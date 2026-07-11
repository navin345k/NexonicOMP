#if defined _loadingbar_included
  #endinput
#endif
#define _loadingbar_included

static	LoadingTimer[MAX_PLAYERS],
        LoadingValue[MAX_PLAYERS],
        bool:IsLoading[MAX_PLAYERS],
PlayerText:LOADINGTD[MAX_PLAYERS][6],
PlayerText:LOADING1[MAX_PLAYERS],
PlayerText:LOADING2[MAX_PLAYERS],
PlayerText:LOADING3[MAX_PLAYERS],
PlayerText:LOADING4[MAX_PLAYERS],
PlayerText:LOADING5[MAX_PLAYERS],
PlayerText:LOADING6[MAX_PLAYERS],
PlayerText:LOADING7[MAX_PLAYERS],
PlayerText:LOADING8[MAX_PLAYERS],
PlayerText:LOADING9[MAX_PLAYERS],
PlayerText:LOADING10[MAX_PLAYERS];

stock Loading_Remove(playerid)
{
	for(new i = 0; i < 6; i++)
	{
		PlayerTextDrawDestroy(playerid, LOADINGTD[playerid][i]);
	}
	PlayerTextDrawDestroy(playerid, LOADING1[playerid]);
	PlayerTextDrawDestroy(playerid, LOADING2[playerid]);
	PlayerTextDrawDestroy(playerid, LOADING3[playerid]);
	PlayerTextDrawDestroy(playerid, LOADING4[playerid]);
	PlayerTextDrawDestroy(playerid, LOADING5[playerid]);
	PlayerTextDrawDestroy(playerid, LOADING6[playerid]);
	PlayerTextDrawDestroy(playerid, LOADING7[playerid]);
	PlayerTextDrawDestroy(playerid, LOADING8[playerid]);
	PlayerTextDrawDestroy(playerid, LOADING9[playerid]);
	PlayerTextDrawDestroy(playerid, LOADING10[playerid]);
	LoadingValue[playerid] = 0;
	IsLoading[playerid] = false;
	return 1;
}

stock Loading_BarUpdate(playerid)
{
    if(LoadingValue[playerid] >= 10)
    {
        PlayerTextDrawShow(playerid, LOADING1[playerid]);
    }
    if(LoadingValue[playerid] >= 20)
    {
        PlayerTextDrawShow(playerid, LOADING2[playerid]);
    }
    if(LoadingValue[playerid] >= 30)
    {
        PlayerTextDrawShow(playerid, LOADING3[playerid]);
    }
    if(LoadingValue[playerid] >= 40)
    {
        PlayerTextDrawShow(playerid, LOADING4[playerid]);
    }
    if(LoadingValue[playerid] >= 50)
    {
        PlayerTextDrawShow(playerid, LOADING5[playerid]);
    }
    if(LoadingValue[playerid] >= 60)
    {
        PlayerTextDrawShow(playerid, LOADING6[playerid]);
    }
    if(LoadingValue[playerid] >= 70)
    {
        PlayerTextDrawShow(playerid, LOADING7[playerid]);
    }
    if(LoadingValue[playerid] >= 80)
    {
        PlayerTextDrawShow(playerid, LOADING8[playerid]);
    }
	if(LoadingValue[playerid] >= 90)
    {
        PlayerTextDrawShow(playerid, LOADING9[playerid]);
    }
    if(LoadingValue[playerid] >= 100)
    {
        PlayerTextDrawShow(playerid, LOADING10[playerid]);
    }
}

forward Loading_TimerUpdate(playerid);
public Loading_TimerUpdate(playerid)
{
	if(!IsValidLoadingBar(playerid))
		return 0;

	if(LoadingValue[playerid] < 100)
	{
		LoadingValue[playerid]++;
		new AgusSamp[256];
		format(AgusSamp, sizeof(AgusSamp), "%d%", LoadingValue[playerid]);
		PlayerTextDrawSetString(playerid, LOADINGTD[playerid][5], AgusSamp);
		Loading_BarUpdate(playerid);
	}
	else
	{
		StopPlayerLoadingBar(playerid);
	}
	return 1;
}

stock IsValidLoadingBar(playerid)
	return IsLoading[playerid];

stock ShowProgressBar(playerid, const text[] = "", interval)
{
	if(IsValidLoadingBar(playerid))
		StopPlayerLoadingBar(playerid);

	new time = interval*10;

	LOADING1[playerid] = CreatePlayerTextDraw(playerid, 253.000000, 301.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, LOADING1[playerid], TEXT_DRAW_FONT_SPRITE_DRAW);
	PlayerTextDrawLetterSize(playerid, LOADING1[playerid], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, LOADING1[playerid], 11.000000, 11.500000);
	PlayerTextDrawSetOutline(playerid, LOADING1[playerid], 1);
	PlayerTextDrawSetShadow(playerid, LOADING1[playerid], 0);
	PlayerTextDrawAlignment(playerid, LOADING1[playerid], TEXT_DRAW_ALIGN_LEFT);
	PlayerTextDrawColour(playerid, LOADING1[playerid], 12582911);
	PlayerTextDrawBackgroundColour(playerid, LOADING1[playerid], 255);
	PlayerTextDrawBoxColour(playerid, LOADING1[playerid], 50);
	PlayerTextDrawUseBox(playerid, LOADING1[playerid], 1);
	PlayerTextDrawSetProportional(playerid, LOADING1[playerid], 1);
	PlayerTextDrawSetSelectable(playerid, LOADING1[playerid], 0);

	LOADING2[playerid] = CreatePlayerTextDraw(playerid, 267.000000, 301.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, LOADING2[playerid], TEXT_DRAW_FONT_SPRITE_DRAW);
	PlayerTextDrawLetterSize(playerid, LOADING2[playerid], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, LOADING2[playerid], 11.000000, 11.500000);
	PlayerTextDrawSetOutline(playerid, LOADING2[playerid], 1);
	PlayerTextDrawSetShadow(playerid, LOADING2[playerid], 0);
	PlayerTextDrawAlignment(playerid, LOADING2[playerid], TEXT_DRAW_ALIGN_LEFT);
	PlayerTextDrawColour(playerid, LOADING2[playerid], 12582911);
	PlayerTextDrawBackgroundColour(playerid, LOADING2[playerid], 255);
	PlayerTextDrawBoxColour(playerid, LOADING2[playerid], 50);
	PlayerTextDrawUseBox(playerid, LOADING2[playerid], 1);
	PlayerTextDrawSetProportional(playerid, LOADING2[playerid], 1);
	PlayerTextDrawSetSelectable(playerid, LOADING2[playerid], 0);

	LOADING3[playerid] = CreatePlayerTextDraw(playerid, 282.000000, 301.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, LOADING3[playerid], TEXT_DRAW_FONT_SPRITE_DRAW);
	PlayerTextDrawLetterSize(playerid, LOADING3[playerid], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, LOADING3[playerid], 11.000000, 11.500000);
	PlayerTextDrawSetOutline(playerid, LOADING3[playerid], 1);
	PlayerTextDrawSetShadow(playerid, LOADING3[playerid], 0);
	PlayerTextDrawAlignment(playerid, LOADING3[playerid], TEXT_DRAW_ALIGN_LEFT);
	PlayerTextDrawColour(playerid, LOADING3[playerid], 12582911);
	PlayerTextDrawBackgroundColour(playerid, LOADING3[playerid], 255);
	PlayerTextDrawBoxColour(playerid, LOADING3[playerid], 50);
	PlayerTextDrawUseBox(playerid, LOADING3[playerid], 1);
	PlayerTextDrawSetProportional(playerid, LOADING3[playerid], 1);
	PlayerTextDrawSetSelectable(playerid, LOADING3[playerid], 0);

	LOADING4[playerid] = CreatePlayerTextDraw(playerid, 297.000000, 301.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, LOADING4[playerid], TEXT_DRAW_FONT_SPRITE_DRAW);
	PlayerTextDrawLetterSize(playerid, LOADING4[playerid], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, LOADING4[playerid], 11.000000, 11.500000);
	PlayerTextDrawSetOutline(playerid, LOADING4[playerid], 1);
	PlayerTextDrawSetShadow(playerid, LOADING4[playerid], 0);
	PlayerTextDrawAlignment(playerid, LOADING4[playerid], TEXT_DRAW_ALIGN_LEFT);
	PlayerTextDrawColour(playerid, LOADING4[playerid], 12582911);
	PlayerTextDrawBackgroundColour(playerid, LOADING4[playerid], 255);
	PlayerTextDrawBoxColour(playerid, LOADING4[playerid], 50);
	PlayerTextDrawUseBox(playerid, LOADING4[playerid], 1);
	PlayerTextDrawSetProportional(playerid, LOADING4[playerid], 1);
	PlayerTextDrawSetSelectable(playerid, LOADING4[playerid], 0);

	LOADING5[playerid] = CreatePlayerTextDraw(playerid, 312.000000, 301.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, LOADING5[playerid], TEXT_DRAW_FONT_SPRITE_DRAW);
	PlayerTextDrawLetterSize(playerid, LOADING5[playerid], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, LOADING5[playerid], 11.000000, 11.500000);
	PlayerTextDrawSetOutline(playerid, LOADING5[playerid], 1);
	PlayerTextDrawSetShadow(playerid, LOADING5[playerid], 0);
	PlayerTextDrawAlignment(playerid, LOADING5[playerid], TEXT_DRAW_ALIGN_LEFT);
	PlayerTextDrawColour(playerid, LOADING5[playerid], 12582911);
	PlayerTextDrawBackgroundColour(playerid, LOADING5[playerid], 255);
	PlayerTextDrawBoxColour(playerid, LOADING5[playerid], 50);
	PlayerTextDrawUseBox(playerid, LOADING5[playerid], 1);
	PlayerTextDrawSetProportional(playerid, LOADING5[playerid], 1);
	PlayerTextDrawSetSelectable(playerid, LOADING5[playerid], 0);

	LOADING6[playerid] = CreatePlayerTextDraw(playerid, 327.000000, 301.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, LOADING6[playerid], TEXT_DRAW_FONT_SPRITE_DRAW);
	PlayerTextDrawLetterSize(playerid, LOADING6[playerid], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, LOADING6[playerid], 11.000000, 11.500000);
	PlayerTextDrawSetOutline(playerid, LOADING6[playerid], 1);
	PlayerTextDrawSetShadow(playerid, LOADING6[playerid], 0);
	PlayerTextDrawAlignment(playerid, LOADING6[playerid], TEXT_DRAW_ALIGN_LEFT);
	PlayerTextDrawColour(playerid, LOADING6[playerid], 12582911);
	PlayerTextDrawBackgroundColour(playerid, LOADING6[playerid], 255);
	PlayerTextDrawBoxColour(playerid, LOADING6[playerid], 50);
	PlayerTextDrawUseBox(playerid, LOADING6[playerid], 1);
	PlayerTextDrawSetProportional(playerid, LOADING6[playerid], 1);
	PlayerTextDrawSetSelectable(playerid, LOADING6[playerid], 0);

	LOADING7[playerid] = CreatePlayerTextDraw(playerid, 341.000000, 301.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, LOADING7[playerid], TEXT_DRAW_FONT_SPRITE_DRAW);
	PlayerTextDrawLetterSize(playerid, LOADING7[playerid], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, LOADING7[playerid], 11.000000, 11.500000);
	PlayerTextDrawSetOutline(playerid, LOADING7[playerid], 1);
	PlayerTextDrawSetShadow(playerid, LOADING7[playerid], 0);
	PlayerTextDrawAlignment(playerid, LOADING7[playerid], TEXT_DRAW_ALIGN_LEFT);
	PlayerTextDrawColour(playerid, LOADING7[playerid], -2686721);
	PlayerTextDrawBackgroundColour(playerid, LOADING7[playerid], 255);
	PlayerTextDrawBoxColour(playerid, LOADING7[playerid], 50);
	PlayerTextDrawUseBox(playerid, LOADING7[playerid], 1);
	PlayerTextDrawSetProportional(playerid, LOADING7[playerid], 1);
	PlayerTextDrawSetSelectable(playerid, LOADING7[playerid], 0);

	LOADING8[playerid] = CreatePlayerTextDraw(playerid, 355.000000, 301.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, LOADING8[playerid], TEXT_DRAW_FONT_SPRITE_DRAW);
	PlayerTextDrawLetterSize(playerid, LOADING8[playerid], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, LOADING8[playerid], 11.000000, 11.500000);
	PlayerTextDrawSetOutline(playerid, LOADING8[playerid], 1);
	PlayerTextDrawSetShadow(playerid, LOADING8[playerid], 0);
	PlayerTextDrawAlignment(playerid, LOADING8[playerid], TEXT_DRAW_ALIGN_LEFT);
	PlayerTextDrawColour(playerid, LOADING8[playerid], -2686721);
	PlayerTextDrawBackgroundColour(playerid, LOADING8[playerid], 255);
	PlayerTextDrawBoxColour(playerid, LOADING8[playerid], 50);
	PlayerTextDrawUseBox(playerid, LOADING8[playerid], 1);
	PlayerTextDrawSetProportional(playerid, LOADING8[playerid], 1);
	PlayerTextDrawSetSelectable(playerid, LOADING8[playerid], 0);

	LOADING9[playerid] = CreatePlayerTextDraw(playerid, 369.000000, 301.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, LOADING9[playerid], TEXT_DRAW_FONT_SPRITE_DRAW);
	PlayerTextDrawLetterSize(playerid, LOADING9[playerid], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, LOADING9[playerid], 11.000000, 11.500000);
	PlayerTextDrawSetOutline(playerid, LOADING9[playerid], 1);
	PlayerTextDrawSetShadow(playerid, LOADING9[playerid], 0);
	PlayerTextDrawAlignment(playerid, LOADING9[playerid], TEXT_DRAW_ALIGN_LEFT);
	PlayerTextDrawColour(playerid, LOADING9[playerid], -16776961);
	PlayerTextDrawBackgroundColour(playerid, LOADING9[playerid], 255);
	PlayerTextDrawBoxColour(playerid, LOADING9[playerid], 50);
	PlayerTextDrawUseBox(playerid, LOADING9[playerid], 1);
	PlayerTextDrawSetProportional(playerid, LOADING9[playerid], 1);
	PlayerTextDrawSetSelectable(playerid, LOADING9[playerid], 0);

	LOADING10[playerid] = CreatePlayerTextDraw(playerid, 383.000000, 301.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, LOADING10[playerid], TEXT_DRAW_FONT_SPRITE_DRAW);
	PlayerTextDrawLetterSize(playerid, LOADING10[playerid], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, LOADING10[playerid], 11.000000, 11.500000);
	PlayerTextDrawSetOutline(playerid, LOADING10[playerid], 1);
	PlayerTextDrawSetShadow(playerid, LOADING10[playerid], 0);
	PlayerTextDrawAlignment(playerid, LOADING10[playerid], TEXT_DRAW_ALIGN_LEFT);
	PlayerTextDrawColour(playerid, LOADING10[playerid], -16776961);
	PlayerTextDrawBackgroundColour(playerid, LOADING10[playerid], 255);
	PlayerTextDrawBoxColour(playerid, LOADING10[playerid], 50);
	PlayerTextDrawUseBox(playerid, LOADING10[playerid], 1);
	PlayerTextDrawSetProportional(playerid, LOADING10[playerid], 1);
	PlayerTextDrawSetSelectable(playerid, LOADING10[playerid], 0);

	LOADINGTD[playerid][0] = CreatePlayerTextDraw(playerid, 250.000000, 295.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, LOADINGTD[playerid][0], TEXT_DRAW_FONT_SPRITE_DRAW);
	PlayerTextDrawLetterSize(playerid, LOADINGTD[playerid][0], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, LOADINGTD[playerid][0], 1.500000, 23.000000);
	PlayerTextDrawSetOutline(playerid, LOADINGTD[playerid][0], 1);
	PlayerTextDrawSetShadow(playerid, LOADINGTD[playerid][0], 0);
	PlayerTextDrawAlignment(playerid, LOADINGTD[playerid][0], TEXT_DRAW_ALIGN_LEFT);
	PlayerTextDrawColour(playerid, LOADINGTD[playerid][0], 640435711);
	PlayerTextDrawBackgroundColour(playerid, LOADINGTD[playerid][0], 255);
	PlayerTextDrawBoxColour(playerid, LOADINGTD[playerid][0], 50);
	PlayerTextDrawUseBox(playerid, LOADINGTD[playerid][0], 1);
	PlayerTextDrawSetProportional(playerid, LOADINGTD[playerid][0], 1);
	PlayerTextDrawSetSelectable(playerid, LOADINGTD[playerid][0], 0);

	LOADINGTD[playerid][1] = CreatePlayerTextDraw(playerid, 395.000000, 295.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, LOADINGTD[playerid][1], TEXT_DRAW_FONT_SPRITE_DRAW);
	PlayerTextDrawLetterSize(playerid, LOADINGTD[playerid][1], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, LOADINGTD[playerid][1], 1.500000, 23.000000);
	PlayerTextDrawSetOutline(playerid, LOADINGTD[playerid][1], 1);
	PlayerTextDrawSetShadow(playerid, LOADINGTD[playerid][1], 0);
	PlayerTextDrawAlignment(playerid, LOADINGTD[playerid][1], TEXT_DRAW_ALIGN_LEFT);
	PlayerTextDrawColour(playerid, LOADINGTD[playerid][1], 640435711);
	PlayerTextDrawBackgroundColour(playerid, LOADINGTD[playerid][1], 255);
	PlayerTextDrawBoxColour(playerid, LOADINGTD[playerid][1], 50);
	PlayerTextDrawUseBox(playerid, LOADINGTD[playerid][1], 1);
	PlayerTextDrawSetProportional(playerid, LOADINGTD[playerid][1], 1);
	PlayerTextDrawSetSelectable(playerid, LOADINGTD[playerid][1], 0);

	LOADINGTD[playerid][2] = CreatePlayerTextDraw(playerid, 250.000000, 295.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, LOADINGTD[playerid][2], TEXT_DRAW_FONT_SPRITE_DRAW);
	PlayerTextDrawLetterSize(playerid, LOADINGTD[playerid][2], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, LOADINGTD[playerid][2], 146.000000, 1.500000);
	PlayerTextDrawSetOutline(playerid, LOADINGTD[playerid][2], 1);
	PlayerTextDrawSetShadow(playerid, LOADINGTD[playerid][2], 0);
	PlayerTextDrawAlignment(playerid, LOADINGTD[playerid][2], TEXT_DRAW_ALIGN_LEFT);
	PlayerTextDrawColour(playerid, LOADINGTD[playerid][2], 640435711);
	PlayerTextDrawBackgroundColour(playerid, LOADINGTD[playerid][2], 255);
	PlayerTextDrawBoxColour(playerid, LOADINGTD[playerid][2], 50);
	PlayerTextDrawUseBox(playerid, LOADINGTD[playerid][2], 1);
	PlayerTextDrawSetProportional(playerid, LOADINGTD[playerid][2], 1);
	PlayerTextDrawSetSelectable(playerid, LOADINGTD[playerid][2], 0);

	LOADINGTD[playerid][3] = CreatePlayerTextDraw(playerid, 250.000000, 317.000000, "ld_dual:white");
	PlayerTextDrawFont(playerid, LOADINGTD[playerid][3], TEXT_DRAW_FONT_SPRITE_DRAW);
	PlayerTextDrawLetterSize(playerid, LOADINGTD[playerid][3], 0.600000, 2.000000);
	PlayerTextDrawTextSize(playerid, LOADINGTD[playerid][3], 146.500000, 2.000000);
	PlayerTextDrawSetOutline(playerid, LOADINGTD[playerid][3], 1);
	PlayerTextDrawSetShadow(playerid, LOADINGTD[playerid][3], 0);
	PlayerTextDrawAlignment(playerid, LOADINGTD[playerid][3], TEXT_DRAW_ALIGN_LEFT);
	PlayerTextDrawColour(playerid, LOADINGTD[playerid][3], 640435711);
	PlayerTextDrawBackgroundColour(playerid, LOADINGTD[playerid][3], 255);
	PlayerTextDrawBoxColour(playerid, LOADINGTD[playerid][3], 50);
	PlayerTextDrawUseBox(playerid, LOADINGTD[playerid][3], 1);
	PlayerTextDrawSetProportional(playerid, LOADINGTD[playerid][3], 1);
	PlayerTextDrawSetSelectable(playerid, LOADINGTD[playerid][3], 0);

	LOADINGTD[playerid][4] = CreatePlayerTextDraw(playerid, 250.000000, 284.000000, "Sabar Sedang Loading");
	PlayerTextDrawFont(playerid, LOADINGTD[playerid][4], TEXT_DRAW_FONT_2);
	PlayerTextDrawLetterSize(playerid, LOADINGTD[playerid][4], 0.137500, 1.200000);
	PlayerTextDrawTextSize(playerid, LOADINGTD[playerid][4], 400.000000, 17.000000);
	PlayerTextDrawSetOutline(playerid, LOADINGTD[playerid][4], 0);
	PlayerTextDrawSetShadow(playerid, LOADINGTD[playerid][4], 0);
	PlayerTextDrawAlignment(playerid, LOADINGTD[playerid][4], TEXT_DRAW_ALIGN_LEFT);
	PlayerTextDrawColour(playerid, LOADINGTD[playerid][4], -1);
	PlayerTextDrawBackgroundColour(playerid, LOADINGTD[playerid][4], 255);
	PlayerTextDrawBoxColour(playerid, LOADINGTD[playerid][4], 50);
	PlayerTextDrawUseBox(playerid, LOADINGTD[playerid][4], 0);
	PlayerTextDrawSetProportional(playerid, LOADINGTD[playerid][4], 1);
	PlayerTextDrawSetSelectable(playerid, LOADINGTD[playerid][4], 0);

	LOADINGTD[playerid][5] = CreatePlayerTextDraw(playerid, 383.000000, 284.000000, "100%");
	PlayerTextDrawFont(playerid, LOADINGTD[playerid][5], TEXT_DRAW_FONT_2);
	PlayerTextDrawLetterSize(playerid, LOADINGTD[playerid][5], 0.137500, 1.200000);
	PlayerTextDrawTextSize(playerid, LOADINGTD[playerid][5], 400.000000, 17.000000);
	PlayerTextDrawSetOutline(playerid, LOADINGTD[playerid][5], 0);
	PlayerTextDrawSetShadow(playerid, LOADINGTD[playerid][5], 0);
	PlayerTextDrawAlignment(playerid, LOADINGTD[playerid][5], TEXT_DRAW_ALIGN_LEFT);
	PlayerTextDrawColour(playerid, LOADINGTD[playerid][5], -1);
	PlayerTextDrawBackgroundColour(playerid, LOADINGTD[playerid][5], 255);
	PlayerTextDrawBoxColour(playerid, LOADINGTD[playerid][5], 50);
	PlayerTextDrawUseBox(playerid, LOADINGTD[playerid][5], 0);
	PlayerTextDrawSetProportional(playerid, LOADINGTD[playerid][5], 1);
	PlayerTextDrawSetSelectable(playerid, LOADINGTD[playerid][5], 0);

	PlayerTextDrawSetString(playerid, LOADINGTD[playerid][4], text);
	PlayerTextDrawShow(playerid, LOADINGTD[playerid][0]);
	PlayerTextDrawShow(playerid, LOADINGTD[playerid][1]);
	PlayerTextDrawShow(playerid, LOADINGTD[playerid][2]);
	PlayerTextDrawShow(playerid, LOADINGTD[playerid][3]);
	PlayerTextDrawShow(playerid, LOADINGTD[playerid][4]);
	PlayerTextDrawShow(playerid, LOADINGTD[playerid][5]);

	LoadingValue[playerid] = 0;
	new AgusSamp[256];
	format(AgusSamp, sizeof(AgusSamp), "%d%", LoadingValue[playerid]);
	PlayerTextDrawSetString(playerid, LOADINGTD[playerid][5], AgusSamp);

	IsLoading[playerid] = true;
	LoadingTimer[playerid] = SetTimerEx(#Loading_TimerUpdate, time, true, "d", playerid);
	TogglePlayerControllable(playerid, 0);
	return 1;
}

stock StopPlayerLoadingBar(playerid)
{
    KillTimer(LoadingTimer[playerid]);
    Loading_Remove(playerid);
	TogglePlayerControllable(playerid, 1);
}