#define FILTERSCRIPT

#include <open.mp>

#define TRAIN_DEBUG false

#define ENABLE_NPC_MARKER false

// Constants
#define NUM_PLAYBACK_FILES 5
#define MAX_TRAINS 5
#define STREAK_TRAIN_ID 538
#define TRAIN_NPC_SKIN 255
#define TRAIN_DRIVER_SEAT 0

#if ENABLE_NPC_MARKER
	#define TRAIN_NPC_MARKER_COLOR 0xFF6347FF
#else
	#define TRAIN_NPC_MARKER_COLOR 0x00000000
#endif


enum
{
	TRAIN_UNITY,        // Unity Station
	TRAIN_MARKET,       // Market Station
	TRAIN_CRANBERRY,    // Cranberry Station
	TRAIN_YELLOWBELL,   // Yellow Bell Station
	TRAIN_LINDEN        // Linden Station
};


new TrainNPC[MAX_TRAINS];
new TrainVehicle[MAX_TRAINS];
new gPlaybackCycle[MAX_TRAINS];
new bool:gPlaybackStarted[MAX_TRAINS];

new const TrainNPCNames[][] = {
	"TrainDriverUnity",
	"TrainDriverMarket",
	"TrainDriverBerry",
	"TrainDriverBell",
	"TrainDriverLinden"
};

new const Float:TrainSpawnData[][4] = {
	{1700.7551, -1953.6531, 14.8756, 190.0},		// Unity
	{814.6358, -1361.7816, -0.2226, 190.0},			// Market
	{-1942.7950, 168.4164, 27.0006, 190.0},			// Cranberry
	{1462.0745, 2630.8787, 10.8203, 190.0},			// Yellow Bell
	{2853.2910, 1348.4590, 11.1272, 190.0}			// Linden
};

#if TRAIN_DEBUG
new const TrainStationNames[][] = {
	"Unity",
	"Market",
	"Cranberry",
	"YellowBell",
	"Linden"
};
#endif

new const TrainRecordings[][] = {
	"TRAIN_UNITY_TO_MARKET",
	"TRAIN_MARKET_TO_CRANBERRY",
	"TRAIN_CRANBERRY_TO_YELLOW_BELL",
	"TRAIN_YELLOW_BELL_TO_LINDEN",
	"TRAIN_LINDEN_TO_UNITY"
};

stock GetTrainIndexByNPC(npcid)
{
	for (new i = 0; i < MAX_TRAINS; i++)
	{
		if (TrainNPC[i] == npcid)
			return i;
	}
	return -1;
}

public OnFilterScriptInit()
{
	for (new i = 0; i < MAX_TRAINS; i++)
	{
		TrainVehicle[i] = AddStaticVehicleEx(
			STREAK_TRAIN_ID,
			TrainSpawnData[i][0],
			TrainSpawnData[i][1],
			TrainSpawnData[i][2],
			TrainSpawnData[i][3],
			-1, -1, -1
		);

		TrainNPC[i] = NPC_Create(TrainNPCNames[i]);

		gPlaybackCycle[i] = 0;
		gPlaybackStarted[i] = false;

		#if TRAIN_DEBUG
		if (TrainNPC[i] != INVALID_NPC_ID)
		{
			printf("[Train NPC]: Driver of train %s created (NPC ID: %d, Vehicle: %d)",
				TrainStationNames[i], TrainNPC[i], TrainVehicle[i]);
		}
		#endif
	}

	#if TRAIN_DEBUG
	printf("[Train NPC]: All %d passenger train vehicles and NPCs created", MAX_TRAINS);
	#endif

	return 1;
}

public OnFilterScriptExit()
{
	for (new i = 0; i < MAX_TRAINS; i++)
	{
		if (NPC_IsValid(TrainNPC[i]))
			NPC_Destroy(TrainNPC[i]);

		if (TrainVehicle[i] != INVALID_VEHICLE_ID)
			DestroyVehicle(TrainVehicle[i]);
	}

	return 1;
}

public OnNPCCreate(npcid)
{
	#if TRAIN_DEBUG
	printf("[Train NPC]: OnNPCCreate called for NPC ID %d", npcid);
	#endif

	SetTimerEx("Train_SpawnNPC", 100, false, "i", npcid);

	return 1;
}

forward Train_SpawnNPC(npcid);
public Train_SpawnNPC(npcid)
{
	new trainIdx = GetTrainIndexByNPC(npcid);

	if (trainIdx != -1)
	{
		NPC_SetPos(npcid, TrainSpawnData[trainIdx][0], TrainSpawnData[trainIdx][1], TrainSpawnData[trainIdx][2]);
		NPC_SetFacingAngle(npcid, TrainSpawnData[trainIdx][3]);
		NPC_SetSkin(npcid, TRAIN_NPC_SKIN);

		NPC_Spawn(npcid);

		#if TRAIN_DEBUG
		printf("[Train NPC]: Spawning train %s (ID: %d)", TrainStationNames[trainIdx], npcid);
		#endif
	}
}

public OnNPCSpawn(npcid)
{
	new trainIdx = GetTrainIndexByNPC(npcid);

	if (trainIdx != -1 && TrainVehicle[trainIdx] != INVALID_VEHICLE_ID)
	{
		NPC_SetSkin(npcid, TRAIN_NPC_SKIN);
		NPC_PutInVehicle(npcid, TrainVehicle[trainIdx], TRAIN_DRIVER_SEAT);
		SetPlayerColor(npcid, TRAIN_NPC_MARKER_COLOR);

		SetTimerEx("Train_StartInitialPlayback", 1000, false, "i", npcid);

		#if TRAIN_DEBUG
		printf("[TRAIN NPC]: Driver of train %s spawned, putting in vehicle", TrainStationNames[trainIdx]);
		#endif
	}

	return 1;
}

forward Train_StartInitialPlayback(npcid);
public Train_StartInitialPlayback(npcid)
{
	new trainIdx = GetTrainIndexByNPC(npcid);

	if (trainIdx != -1 && !gPlaybackStarted[trainIdx])
	{
		NPC_StartPlayback(npcid, TrainRecordings[trainIdx], false, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
		gPlaybackCycle[trainIdx] = 1;
		gPlaybackStarted[trainIdx] = true;

		#if TRAIN_DEBUG
		printf("[Train NPC]: Train %s started initial playback", TrainStationNames[trainIdx]);
		#endif
	}
}

stock TrainNPC_StartNextPlayback(npcid)
{
	new trainIdx = GetTrainIndexByNPC(npcid);
	if (trainIdx == -1) return;

	if (gPlaybackCycle[trainIdx] >= NUM_PLAYBACK_FILES)
		gPlaybackCycle[trainIdx] = 0;

	new recordingIdx = (trainIdx + gPlaybackCycle[trainIdx]) % NUM_PLAYBACK_FILES;

	NPC_StartPlayback(npcid, TrainRecordings[recordingIdx], false, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);

	#if TRAIN_DEBUG
	printf("[Train NPC]: Train %s -> next segment (recording: %s)",
		TrainStationNames[trainIdx], TrainRecordings[recordingIdx]);
	#endif

	gPlaybackCycle[trainIdx]++;
}

public OnNPCPlaybackEnd(npcid, recordid)
{
	if (GetTrainIndexByNPC(npcid) != -1)
	{
		#if TRAIN_DEBUG
		printf("[Train NPC]: NPC %d finished route, starting next...", npcid);
		#endif

		TrainNPC_StartNextPlayback(npcid);
	}

	return 1;
}
