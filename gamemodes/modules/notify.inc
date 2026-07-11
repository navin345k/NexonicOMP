enum eNotify
{
    NotifyIcon,
    NotifyMessage[320],
    Float:NotifyLoading,
    NotifySize
}

new InfoNotify[MAX_PLAYERS][7][eNotify];
new MaxPlayerNotify[MAX_PLAYERS];
new PlayerText:NotifyTD[MAX_PLAYERS][7 * 10];
new IndexNotify[MAX_PLAYERS];

forward HideNotify(playerid);
public HideNotify(playerid)
{
    if(IndexNotify[playerid] <= 0) return 1;

    --IndexNotify[playerid];
    MaxPlayerNotify[playerid]--;
    
    for(new i = 0; i < 10; i++) 
    {
        new tdIndex = (IndexNotify[playerid] * 10) + i;
        if(NotifyTD[playerid][tdIndex] != PlayerText:INVALID_TEXT_DRAW)
        {
            PlayerTextDrawDestroy(playerid, NotifyTD[playerid][tdIndex]);
            NotifyTD[playerid][tdIndex] = PlayerText:INVALID_TEXT_DRAW;
        }
    }
    return 1;
}

stock ShowInfo(playerid, const message[])
{
    PlayerPlaySound(playerid, 5201, 0.0, 0.0, 0.0);
    return ShowNotify(playerid, message, 1);
}

stock ShowNotify(const playerid, const message[], const icon)
{
    if(MaxPlayerNotify[playerid] >= 5) return 0;

    for(new x = IndexNotify[playerid]; x > 0; x--)
    {
        InfoNotify[playerid][x] = InfoNotify[playerid][x-1];
        
        for(new i = 0; i < 10; i++)
        {
            new tdIndex = ((x-1) * 10) + i;
            if(NotifyTD[playerid][tdIndex] != PlayerText:INVALID_TEXT_DRAW)
            {
                PlayerTextDrawDestroy(playerid, NotifyTD[playerid][tdIndex]);
                NotifyTD[playerid][tdIndex] = PlayerText:INVALID_TEXT_DRAW;
            }
        }
    }

    format(InfoNotify[playerid][0][NotifyMessage], 320, "%s", message);
    InfoNotify[playerid][0][NotifyIcon] = icon;
    InfoNotify[playerid][0][NotifySize] = 3;

    MaxPlayerNotify[playerid]++;
    IndexNotify[playerid]++;

    new Float:new_y_offset = 0.0;
    for(new x = 0; x < IndexNotify[playerid]; x++)
    {
        CreateNotify(playerid, x, x * 10, new_y_offset);
        new_y_offset += (InfoNotify[playerid][x][NotifySize] * 7.25) + 15.0;
    }

    SetTimerEx("HideNotify", 5000, false, "i", playerid);
    return 1;
}

stock CreateNotify(const playerid, index, start_index, Float:y_offset)
{
    new i = start_index;

    if(InfoNotify[playerid][index][NotifyIcon] == 1)
    {
        NotifyTD[playerid][i] = CreatePlayerTextDraw(playerid, 1000.000, 108.500 + y_offset, "_");
        PlayerTextDrawLetterSize(playerid, NotifyTD[playerid][i], 0.425, 1.399);
        PlayerTextDrawTextSize(playerid, NotifyTD[playerid][i], 400.0, 17.0);
        PlayerTextDrawAlignment(playerid, NotifyTD[playerid][i], TEXT_DRAW_ALIGN_LEFT);
        PlayerTextDrawColour(playerid, NotifyTD[playerid][i], -1);
        PlayerTextDrawSetShadow(playerid, NotifyTD[playerid][i], 0);
        PlayerTextDrawSetOutline(playerid, NotifyTD[playerid][i], 0);
        PlayerTextDrawBackgroundColour(playerid, NotifyTD[playerid][i], 255);
        PlayerTextDrawFont(playerid, NotifyTD[playerid][i], TEXT_DRAW_FONT_1);
        PlayerTextDrawSetProportional(playerid, NotifyTD[playerid][i], true);
        PlayerTextDrawShow(playerid, NotifyTD[playerid][i]);

        NotifyTD[playerid][++i] = CreatePlayerTextDraw(playerid, 498.500, 111.000 + y_offset, "LD_BEAT:chit");
        PlayerTextDrawTextSize(playerid, NotifyTD[playerid][i], 12.0, 49.0);
        PlayerTextDrawAlignment(playerid, NotifyTD[playerid][i], TEXT_DRAW_ALIGN_LEFT);
        PlayerTextDrawColour(playerid, NotifyTD[playerid][i], -2147450625);
        PlayerTextDrawSetShadow(playerid, NotifyTD[playerid][i], 0);
        PlayerTextDrawSetOutline(playerid, NotifyTD[playerid][i], 0);
        PlayerTextDrawBackgroundColour(playerid, NotifyTD[playerid][i], 255);
        PlayerTextDrawFont(playerid, NotifyTD[playerid][i], TEXT_DRAW_FONT_SPRITE_DRAW);
        PlayerTextDrawSetProportional(playerid, NotifyTD[playerid][i], true);
        PlayerTextDrawShow(playerid, NotifyTD[playerid][i]);

        NotifyTD[playerid][++i] = CreatePlayerTextDraw(playerid, 621.000, 111.000 + y_offset, "LD_BEAT:chit");
        PlayerTextDrawTextSize(playerid, NotifyTD[playerid][i], 12.0, 49.0);
        PlayerTextDrawAlignment(playerid, NotifyTD[playerid][i], TEXT_DRAW_ALIGN_LEFT);
        PlayerTextDrawColour(playerid, NotifyTD[playerid][i], 255);
        PlayerTextDrawSetShadow(playerid, NotifyTD[playerid][i], 0);
        PlayerTextDrawSetOutline(playerid, NotifyTD[playerid][i], 0);
        PlayerTextDrawBackgroundColour(playerid, NotifyTD[playerid][i], 255);
        PlayerTextDrawFont(playerid, NotifyTD[playerid][i], TEXT_DRAW_FONT_SPRITE_DRAW);
        PlayerTextDrawSetProportional(playerid, NotifyTD[playerid][i], true);
        PlayerTextDrawShow(playerid, NotifyTD[playerid][i]);

        NotifyTD[playerid][++i] = CreatePlayerTextDraw(playerid, 504.000, 119.000 + y_offset, "LD_BUM:blkdot");
        PlayerTextDrawTextSize(playerid, NotifyTD[playerid][i], 123.0, 33.0);
        PlayerTextDrawAlignment(playerid, NotifyTD[playerid][i], TEXT_DRAW_ALIGN_LEFT);
        PlayerTextDrawColour(playerid, NotifyTD[playerid][i], 255);
        PlayerTextDrawSetShadow(playerid, NotifyTD[playerid][i], 0);
        PlayerTextDrawSetOutline(playerid, NotifyTD[playerid][i], 0);
        PlayerTextDrawBackgroundColour(playerid, NotifyTD[playerid][i], 255);
        PlayerTextDrawFont(playerid, NotifyTD[playerid][i], TEXT_DRAW_FONT_SPRITE_DRAW);
        PlayerTextDrawSetProportional(playerid, NotifyTD[playerid][i], true);
        PlayerTextDrawShow(playerid, NotifyTD[playerid][i]);

        NotifyTD[playerid][++i] = CreatePlayerTextDraw(playerid, 510.000, 122.000 + y_offset, "INFO");
        PlayerTextDrawLetterSize(playerid, NotifyTD[playerid][i], 0.218, 0.998);
        PlayerTextDrawAlignment(playerid, NotifyTD[playerid][i], TEXT_DRAW_ALIGN_LEFT);
        PlayerTextDrawColour(playerid, NotifyTD[playerid][i], -2147450625);
        PlayerTextDrawSetShadow(playerid, NotifyTD[playerid][i], 0);
        PlayerTextDrawSetOutline(playerid, NotifyTD[playerid][i], 0);
        PlayerTextDrawBackgroundColour(playerid, NotifyTD[playerid][i], 150);
        PlayerTextDrawFont(playerid, NotifyTD[playerid][i], TEXT_DRAW_FONT_1);
        PlayerTextDrawSetProportional(playerid, NotifyTD[playerid][i], true);
        PlayerTextDrawShow(playerid, NotifyTD[playerid][i]);

        NotifyTD[playerid][++i] = CreatePlayerTextDraw(playerid, 510.000, 133.000 + y_offset, InfoNotify[playerid][index][NotifyMessage]);
        PlayerTextDrawLetterSize(playerid, NotifyTD[playerid][i], 0.150, 0.699);
        PlayerTextDrawTextSize(playerid, NotifyTD[playerid][i], 630.500, 494.000);
        PlayerTextDrawAlignment(playerid, NotifyTD[playerid][i], TEXT_DRAW_ALIGN_LEFT);
        PlayerTextDrawColour(playerid, NotifyTD[playerid][i], -1);
        PlayerTextDrawSetShadow(playerid, NotifyTD[playerid][i], 0);
        PlayerTextDrawSetOutline(playerid, NotifyTD[playerid][i], 0);
        PlayerTextDrawBackgroundColour(playerid, NotifyTD[playerid][i], 255);
        PlayerTextDrawFont(playerid, NotifyTD[playerid][i], TEXT_DRAW_FONT_1);
        PlayerTextDrawSetProportional(playerid, NotifyTD[playerid][i], true);
        PlayerTextDrawShow(playerid, NotifyTD[playerid][i]);
    }
    return true;
}