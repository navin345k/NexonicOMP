new PlayerLoginObject[MAX_PLAYERS] = {INVALID_STREAMER_ID, ...};
new PlayerLoginCP[MAX_PLAYERS] = {INVALID_STREAMER_ID, ...};

stock ShowCinematicLogin(playerid)
{
    ClearChat(playerid);
    
    new wid = 200 + PlayerInfo[playerid][pID];
    
    if(IsValidDynamicObject(PlayerLoginObject[playerid]))
        DestroyDynamicObject(PlayerLoginObject[playerid]);
        
    SetPlayerVirtualWorld(playerid, wid);
    SetPlayerPos(playerid, 1291.9954, -2382.0916, 21.6245);
    
    PlayerLoginObject[playerid] = CreateDynamicObject(1681, 1161.48, -2490.2, 66.7269, 0.0, 0.0, -89.8, wid, -1, -1);
    Streamer_Update(playerid, STREAMER_TYPE_OBJECT);
    
    SetPlayerCameraPos(playerid, 1287.4884, -2386.6216, 21.6686);
    SetPlayerCameraLookAt(playerid, 1161.48, -2490.2, 66.7269, CAMERA_CUT);
    
    MoveDynamicObject(PlayerLoginObject[playerid], 1362.21, -2489.5, 66.7269, 18.0, 0.0, 0.0, -89.8);
    InterpolateCameraLookAt(playerid, 1161.48, -2490.2, 66.7269, 1362.21, -2489.5, 66.7269, 10000, CAMERA_MOVE);
    
    SetTimerEx("MoveSceneLogin", 12000, false, "dd", playerid, 1);
    return 1;
}

forward MoveSceneLogin(playerid, value);
public MoveSceneLogin(playerid, value)
{
    if(value == 1)
    {
        new wid = 200 + PlayerInfo[playerid][pID];
        
        if(IsValidDynamicObject(PlayerLoginObject[playerid]))
            DestroyDynamicObject(PlayerLoginObject[playerid]);
            
        PlayerLoginObject[playerid] = CreateDynamicObject(1681, 1487.52, -2494.01, 14.7547, 0.0, 0.0, -90.2, wid, -1, -1);
        Streamer_Update(playerid, STREAMER_TYPE_OBJECT);
        
        SetPlayerPos(playerid, 1606.1193, -2458.1716, 13.5547);
        MoveDynamicObject(PlayerLoginObject[playerid], 1572.76, -2494.01, 14.7547, 18.0, 0.0, 0.0, -90.2);
        SetPlayerCameraPos(playerid, 1604.5731, -2460.0952, 20.4359);
        SetPlayerCameraLookAt(playerid, 1161.48, -2490.2, 66.7269, CAMERA_CUT);
        InterpolateCameraLookAt(playerid, 1487.52, -2494.01, 14.7547, 1572.76, -2494.01, 14.7547, 10000, CAMERA_MOVE);
        
        SetTimerEx("SpawnEndPlayer", 12000, false, "i", playerid);
    }
    return 1;
}

forward SpawnEndPlayer(playerid);
public SpawnEndPlayer(playerid)
{
    if(IsValidDynamicObject(PlayerLoginObject[playerid]))
    {
        DestroyDynamicObject(PlayerLoginObject[playerid]);
        PlayerLoginObject[playerid] = INVALID_STREAMER_ID;
    }

    SetPlayerInterior(playerid, 1);
    SetPlayerVirtualWorld(playerid, 0); 
    SetPlayerPos(playerid, 2.9810, 26.5761, 1199.5938);
    SetPlayerFacingAngle(playerid, 358.8015);
    
    SetCameraBehindPlayer(playerid);
    TogglePlayerControllable(playerid, true);
    
    if(IsValidDynamicCP(PlayerLoginCP[playerid]))
        DestroyDynamicCP(PlayerLoginCP[playerid]);

    PlayerLoginCP[playerid] = CreateDynamicCP(2.4156, 33.1422, 1199.5938, 1.5, 0, 1, playerid, 100.0);
    
    return 1;
}

public OnPlayerEnterDynamicCP(playerid, checkpointid)
{
    if(checkpointid == PlayerLoginCP[playerid])
    {
        DestroyDynamicCP(PlayerLoginCP[playerid]);
        PlayerLoginCP[playerid] = INVALID_STREAMER_ID;
        StopAudioStreamForPlayer(playerid);
        
        PlayerInfo[playerid][pTutorial] = 1;
        PlayerInfo[playerid][pTutorialTimer] = SetTimerEx("PlayerSpawn", 500, false, "ii", playerid);
        
        return 1;
    }
    return 1;
}