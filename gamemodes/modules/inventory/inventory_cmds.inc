new PlayerText: InventoryTD[MAX_PLAYERS][19];
new PlayerText: BoxInv[MAX_PLAYERS][20];
new PlayerText: BoxAngka[MAX_PLAYERS][5];
new PlayerText: NameInv[MAX_PLAYERS][20];
new PlayerText: PrevMod[MAX_PLAYERS][20];
new PlayerText: QuantityInv[MAX_PLAYERS][20];

CreateInventoryTextdraw(playerid)
{
    InventoryTD[playerid][0] = CreatePlayerTextDraw(playerid, 346.000, 337.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, InventoryTD[playerid][0], 37.000, 22.000);
    PlayerTextDrawAlignment(playerid, InventoryTD[playerid][0], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, InventoryTD[playerid][0], 488581119);
    PlayerTextDrawSetShadow(playerid, InventoryTD[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, InventoryTD[playerid][0], 0);
    PlayerTextDrawBackgroundColour(playerid, InventoryTD[playerid][0], 255);
    PlayerTextDrawFont(playerid, InventoryTD[playerid][0], TEXT_DRAW_FONT_SPRITE_DRAW);
    PlayerTextDrawSetProportional(playerid, InventoryTD[playerid][0], true);
    PlayerTextDrawSetSelectable(playerid, InventoryTD[playerid][0], true);

    InventoryTD[playerid][1] = CreatePlayerTextDraw(playerid, 385.000, 337.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, InventoryTD[playerid][1], 37.000, 22.000);
    PlayerTextDrawAlignment(playerid, InventoryTD[playerid][1], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, InventoryTD[playerid][1], 488581119);
    PlayerTextDrawSetShadow(playerid, InventoryTD[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, InventoryTD[playerid][1], 0);
    PlayerTextDrawBackgroundColour(playerid, InventoryTD[playerid][1], 255);
    PlayerTextDrawFont(playerid, InventoryTD[playerid][1], TEXT_DRAW_FONT_SPRITE_DRAW);
    PlayerTextDrawSetProportional(playerid, InventoryTD[playerid][1], true);
    PlayerTextDrawSetSelectable(playerid, InventoryTD[playerid][1], true);

    InventoryTD[playerid][2] = CreatePlayerTextDraw(playerid, 424.000, 337.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, InventoryTD[playerid][2], 37.000, 22.000);
    PlayerTextDrawAlignment(playerid, InventoryTD[playerid][2], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, InventoryTD[playerid][2], 488581119);
    PlayerTextDrawSetShadow(playerid, InventoryTD[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, InventoryTD[playerid][2], 0);
    PlayerTextDrawBackgroundColour(playerid, InventoryTD[playerid][2], 255);
    PlayerTextDrawFont(playerid, InventoryTD[playerid][2], TEXT_DRAW_FONT_SPRITE_DRAW);
    PlayerTextDrawSetProportional(playerid, InventoryTD[playerid][2], true);
    PlayerTextDrawSetSelectable(playerid, InventoryTD[playerid][2], true);

    InventoryTD[playerid][3] = CreatePlayerTextDraw(playerid, 463.000, 337.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, InventoryTD[playerid][3], 37.000, 22.000);
    PlayerTextDrawAlignment(playerid, InventoryTD[playerid][3], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, InventoryTD[playerid][3], 488581119);
    PlayerTextDrawSetShadow(playerid, InventoryTD[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, InventoryTD[playerid][3], 0);
    PlayerTextDrawBackgroundColour(playerid, InventoryTD[playerid][3], 255);
    PlayerTextDrawFont(playerid, InventoryTD[playerid][3], TEXT_DRAW_FONT_SPRITE_DRAW);
    PlayerTextDrawSetProportional(playerid, InventoryTD[playerid][3], true);
    PlayerTextDrawSetSelectable(playerid, InventoryTD[playerid][3], true);

    InventoryTD[playerid][4] = CreatePlayerTextDraw(playerid, 398.000, 342.000, "USE");
    PlayerTextDrawLetterSize(playerid, InventoryTD[playerid][4], 0.118, 1.097);
    PlayerTextDrawTextSize(playerid, InventoryTD[playerid][4], 99.000, 30.000);
    PlayerTextDrawAlignment(playerid, InventoryTD[playerid][4], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, InventoryTD[playerid][4], -1);
    PlayerTextDrawSetShadow(playerid, InventoryTD[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, InventoryTD[playerid][4], 0);
    PlayerTextDrawBackgroundColour(playerid, InventoryTD[playerid][4], 150);
    PlayerTextDrawFont(playerid, InventoryTD[playerid][4], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, InventoryTD[playerid][4], true);

    InventoryTD[playerid][5] = CreatePlayerTextDraw(playerid, 436.000, 342.000, "GIVE");
    PlayerTextDrawLetterSize(playerid, InventoryTD[playerid][5], 0.118, 1.097);
    PlayerTextDrawTextSize(playerid, InventoryTD[playerid][5], 99.000, 30.000);
    PlayerTextDrawAlignment(playerid, InventoryTD[playerid][5], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, InventoryTD[playerid][5], -1);
    PlayerTextDrawSetShadow(playerid, InventoryTD[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, InventoryTD[playerid][5], 0);
    PlayerTextDrawBackgroundColour(playerid, InventoryTD[playerid][5], 150);
    PlayerTextDrawFont(playerid, InventoryTD[playerid][5], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, InventoryTD[playerid][5], true);

    InventoryTD[playerid][6] = CreatePlayerTextDraw(playerid, 475.000, 342.000, "DROP");
    PlayerTextDrawLetterSize(playerid, InventoryTD[playerid][6], 0.118, 1.097);
    PlayerTextDrawTextSize(playerid, InventoryTD[playerid][6], 99.000, 30.000);
    PlayerTextDrawAlignment(playerid, InventoryTD[playerid][6], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, InventoryTD[playerid][6], -1);
    PlayerTextDrawSetShadow(playerid, InventoryTD[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, InventoryTD[playerid][6], 0);
    PlayerTextDrawBackgroundColour(playerid, InventoryTD[playerid][6], 150);
    PlayerTextDrawFont(playerid, InventoryTD[playerid][6], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, InventoryTD[playerid][6], true);

    InventoryTD[playerid][7] = CreatePlayerTextDraw(playerid, 363.000, 342.000, "0");
    PlayerTextDrawLetterSize(playerid, InventoryTD[playerid][7], 0.118, 1.097);
    PlayerTextDrawTextSize(playerid, InventoryTD[playerid][7], 99.000, 30.000);
    PlayerTextDrawAlignment(playerid, InventoryTD[playerid][7], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, InventoryTD[playerid][7], -1);
    PlayerTextDrawSetShadow(playerid, InventoryTD[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, InventoryTD[playerid][7], 0);
    PlayerTextDrawBackgroundColour(playerid, InventoryTD[playerid][7], 150);
    PlayerTextDrawFont(playerid, InventoryTD[playerid][7], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, InventoryTD[playerid][7], true);

    InventoryTD[playerid][8] = CreatePlayerTextDraw(playerid, 91.000, 146.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, InventoryTD[playerid][8], 4.000, 213.000);
    PlayerTextDrawAlignment(playerid, InventoryTD[playerid][8], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, InventoryTD[playerid][8], 16777215);
    PlayerTextDrawSetShadow(playerid, InventoryTD[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, InventoryTD[playerid][8], 0);
    PlayerTextDrawBackgroundColour(playerid, InventoryTD[playerid][8], 255);
    PlayerTextDrawFont(playerid, InventoryTD[playerid][8], TEXT_DRAW_FONT_SPRITE_DRAW);
    PlayerTextDrawSetProportional(playerid, InventoryTD[playerid][8], true);

    InventoryTD[playerid][9] = CreatePlayerTextDraw(playerid, 346.000, 325.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, InventoryTD[playerid][9], 192.000, 5.000);
    PlayerTextDrawAlignment(playerid, InventoryTD[playerid][9], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, InventoryTD[playerid][9], 16777215);
    PlayerTextDrawSetShadow(playerid, InventoryTD[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, InventoryTD[playerid][9], 0);
    PlayerTextDrawBackgroundColour(playerid, InventoryTD[playerid][9], 255);
    PlayerTextDrawFont(playerid, InventoryTD[playerid][9], TEXT_DRAW_FONT_SPRITE_DRAW);
    PlayerTextDrawSetProportional(playerid, InventoryTD[playerid][9], true);

    InventoryTD[playerid][10] = CreatePlayerTextDraw(playerid, 131.000, 119.000, "Vasu_Annan");
    PlayerTextDrawLetterSize(playerid, InventoryTD[playerid][10], 0.128, 1.299);
    PlayerTextDrawTextSize(playerid, InventoryTD[playerid][10], 99.000, 30.000);
    PlayerTextDrawAlignment(playerid, InventoryTD[playerid][10], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, InventoryTD[playerid][10], -1);
    PlayerTextDrawSetShadow(playerid, InventoryTD[playerid][10], 0);
    PlayerTextDrawSetOutline(playerid, InventoryTD[playerid][10], 0);
    PlayerTextDrawBackgroundColour(playerid, InventoryTD[playerid][10], 150);
    PlayerTextDrawFont(playerid, InventoryTD[playerid][10], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, InventoryTD[playerid][10], true);

    InventoryTD[playerid][11] = CreatePlayerTextDraw(playerid, 91.000, 100.000, "_");
    PlayerTextDrawTextSize(playerid, InventoryTD[playerid][11], 42.000, 45.000);
    PlayerTextDrawAlignment(playerid, InventoryTD[playerid][11], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, InventoryTD[playerid][11], 16777215);
    PlayerTextDrawSetShadow(playerid, InventoryTD[playerid][11], 0);
    PlayerTextDrawSetOutline(playerid, InventoryTD[playerid][11], 0);
    PlayerTextDrawBackgroundColour(playerid, InventoryTD[playerid][11], 0);
    PlayerTextDrawFont(playerid, InventoryTD[playerid][11], TEXT_DRAW_FONT_MODEL_PREVIEW);
    PlayerTextDrawSetProportional(playerid, InventoryTD[playerid][11], false);
    PlayerTextDrawSetPreviewModel(playerid, InventoryTD[playerid][11], 2751);
    PlayerTextDrawSetPreviewRot(playerid, InventoryTD[playerid][11], -90.000, 0.000, 30.000, 0.898);
    PlayerTextDrawSetPreviewVehicleColours(playerid, InventoryTD[playerid][11], 0, 0);

    InventoryTD[playerid][12] = CreatePlayerTextDraw(playerid, 91.000, 180.000, "_");
    PlayerTextDrawTextSize(playerid, InventoryTD[playerid][12], 42.000, 45.000);
    PlayerTextDrawAlignment(playerid, InventoryTD[playerid][12], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, InventoryTD[playerid][12], 16777215);
    PlayerTextDrawSetShadow(playerid, InventoryTD[playerid][12], 0);
    PlayerTextDrawSetOutline(playerid, InventoryTD[playerid][12], 0);
    PlayerTextDrawBackgroundColour(playerid, InventoryTD[playerid][12], 0);
    PlayerTextDrawFont(playerid, InventoryTD[playerid][12], TEXT_DRAW_FONT_MODEL_PREVIEW);
    PlayerTextDrawSetProportional(playerid, InventoryTD[playerid][12], false);
    PlayerTextDrawSetPreviewModel(playerid, InventoryTD[playerid][12], 2751);
    PlayerTextDrawSetPreviewRot(playerid, InventoryTD[playerid][12], -90.000, 0.000, 30.000, 0.898);
    PlayerTextDrawSetPreviewVehicleColours(playerid, InventoryTD[playerid][12], 0, 0);

    InventoryTD[playerid][13] = CreatePlayerTextDraw(playerid, 95.000, 181.000, "_");
    PlayerTextDrawTextSize(playerid, InventoryTD[playerid][13], 38.000, 47.000);
    PlayerTextDrawAlignment(playerid, InventoryTD[playerid][13], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, InventoryTD[playerid][13], -1);
    PlayerTextDrawSetShadow(playerid, InventoryTD[playerid][13], 0);
    PlayerTextDrawSetOutline(playerid, InventoryTD[playerid][13], 0);
    PlayerTextDrawBackgroundColour(playerid, InventoryTD[playerid][13], 0);
    PlayerTextDrawFont(playerid, InventoryTD[playerid][13], TEXT_DRAW_FONT_MODEL_PREVIEW);
    PlayerTextDrawSetProportional(playerid, InventoryTD[playerid][13], false);
    PlayerTextDrawSetPreviewModel(playerid, InventoryTD[playerid][13], 2971);
    PlayerTextDrawSetPreviewRot(playerid, InventoryTD[playerid][13], 0.000, 0.000, 0.000, 1.200);
    PlayerTextDrawSetPreviewVehicleColours(playerid, InventoryTD[playerid][13], 0, 0);

    InventoryTD[playerid][14] = CreatePlayerTextDraw(playerid, 94.000, 101.000, "_");
    PlayerTextDrawTextSize(playerid, InventoryTD[playerid][14], 38.000, 48.000);
    PlayerTextDrawAlignment(playerid, InventoryTD[playerid][14], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, InventoryTD[playerid][14], -1);
    PlayerTextDrawSetShadow(playerid, InventoryTD[playerid][14], 0);
    PlayerTextDrawSetOutline(playerid, InventoryTD[playerid][14], 0);
    PlayerTextDrawBackgroundColour(playerid, InventoryTD[playerid][14], 0);
    PlayerTextDrawFont(playerid, InventoryTD[playerid][14], TEXT_DRAW_FONT_MODEL_PREVIEW);
    PlayerTextDrawSetProportional(playerid, InventoryTD[playerid][14], false);
    PlayerTextDrawSetPreviewModel(playerid, InventoryTD[playerid][14], 2919);
    PlayerTextDrawSetPreviewRot(playerid, InventoryTD[playerid][14], 0.000, 0.000, 0.000, 1.200);
    PlayerTextDrawSetPreviewVehicleColours(playerid, InventoryTD[playerid][14], 0, 0);

    InventoryTD[playerid][15] = CreatePlayerTextDraw(playerid, 171.000, 123.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, InventoryTD[playerid][15], 157.000, 5.000);
    PlayerTextDrawAlignment(playerid, InventoryTD[playerid][15], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, InventoryTD[playerid][15], 16777215);
    PlayerTextDrawSetShadow(playerid, InventoryTD[playerid][15], 0);
    PlayerTextDrawSetOutline(playerid, InventoryTD[playerid][15], 0);
    PlayerTextDrawBackgroundColour(playerid, InventoryTD[playerid][15], 255);
    PlayerTextDrawFont(playerid, InventoryTD[playerid][15], TEXT_DRAW_FONT_SPRITE_DRAW);
    PlayerTextDrawSetProportional(playerid, InventoryTD[playerid][15], true);

    InventoryTD[playerid][16] = CreatePlayerTextDraw(playerid, 129.000, 200.000, "3.7/5KG");
    PlayerTextDrawLetterSize(playerid, InventoryTD[playerid][16], 0.128, 1.299);
    PlayerTextDrawTextSize(playerid, InventoryTD[playerid][16], 99.000, 30.000);
    PlayerTextDrawAlignment(playerid, InventoryTD[playerid][16], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, InventoryTD[playerid][16], -1);
    PlayerTextDrawSetShadow(playerid, InventoryTD[playerid][16], 0);
    PlayerTextDrawSetOutline(playerid, InventoryTD[playerid][16], 0);
    PlayerTextDrawBackgroundColour(playerid, InventoryTD[playerid][16], 150);
    PlayerTextDrawFont(playerid, InventoryTD[playerid][16], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, InventoryTD[playerid][16], true);

    InventoryTD[playerid][17] = CreatePlayerTextDraw(playerid, 502.000, 337.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, InventoryTD[playerid][17], 37.000, 22.000);
    PlayerTextDrawAlignment(playerid, InventoryTD[playerid][17], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, InventoryTD[playerid][17], 488581119);
    PlayerTextDrawSetShadow(playerid, InventoryTD[playerid][17], 0);
    PlayerTextDrawSetOutline(playerid, InventoryTD[playerid][17], 0);
    PlayerTextDrawBackgroundColour(playerid, InventoryTD[playerid][17], 255);
    PlayerTextDrawFont(playerid, InventoryTD[playerid][17], TEXT_DRAW_FONT_SPRITE_DRAW);
    PlayerTextDrawSetProportional(playerid, InventoryTD[playerid][17], true);
    PlayerTextDrawSetSelectable(playerid, InventoryTD[playerid][17], true);

    InventoryTD[playerid][18] = CreatePlayerTextDraw(playerid, 512.000, 342.000, "CLOSE");
    PlayerTextDrawLetterSize(playerid, InventoryTD[playerid][18], 0.118, 1.097);
    PlayerTextDrawTextSize(playerid, InventoryTD[playerid][18], 99.000, 30.000);
    PlayerTextDrawAlignment(playerid, InventoryTD[playerid][18], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, InventoryTD[playerid][18], -1);
    PlayerTextDrawSetShadow(playerid, InventoryTD[playerid][18], 0);
    PlayerTextDrawSetOutline(playerid, InventoryTD[playerid][18], 0);
    PlayerTextDrawBackgroundColour(playerid, InventoryTD[playerid][18], 150);
    PlayerTextDrawFont(playerid, InventoryTD[playerid][18], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, InventoryTD[playerid][18], true);

    BoxInv[playerid][0] = CreatePlayerTextDraw(playerid, 100.000, 146.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, BoxInv[playerid][0], 44.000, 42.000);
    PlayerTextDrawAlignment(playerid, BoxInv[playerid][0], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, BoxInv[playerid][0], 488581119);
    PlayerTextDrawSetShadow(playerid, BoxInv[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, BoxInv[playerid][0], 0);
    PlayerTextDrawBackgroundColour(playerid, BoxInv[playerid][0], 255);
    PlayerTextDrawFont(playerid, BoxInv[playerid][0], TEXT_DRAW_FONT_SPRITE_DRAW);
    PlayerTextDrawSetProportional(playerid, BoxInv[playerid][0], true);
    PlayerTextDrawSetSelectable(playerid, BoxInv[playerid][0], true);

    BoxInv[playerid][1] = CreatePlayerTextDraw(playerid, 146.000, 146.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, BoxInv[playerid][1], 44.000, 42.000);
    PlayerTextDrawAlignment(playerid, BoxInv[playerid][1], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, BoxInv[playerid][1], 488581119);
    PlayerTextDrawSetShadow(playerid, BoxInv[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, BoxInv[playerid][1], 0);
    PlayerTextDrawBackgroundColour(playerid, BoxInv[playerid][1], 255);
    PlayerTextDrawFont(playerid, BoxInv[playerid][1], TEXT_DRAW_FONT_SPRITE_DRAW);
    PlayerTextDrawSetProportional(playerid, BoxInv[playerid][1], true);
    PlayerTextDrawSetSelectable(playerid, BoxInv[playerid][1], true);

    BoxInv[playerid][2] = CreatePlayerTextDraw(playerid, 192.000, 146.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, BoxInv[playerid][2], 44.000, 42.000);
    PlayerTextDrawAlignment(playerid, BoxInv[playerid][2], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, BoxInv[playerid][2], 488581119);
    PlayerTextDrawSetShadow(playerid, BoxInv[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, BoxInv[playerid][2], 0);
    PlayerTextDrawBackgroundColour(playerid, BoxInv[playerid][2], 255);
    PlayerTextDrawFont(playerid, BoxInv[playerid][2], TEXT_DRAW_FONT_SPRITE_DRAW);
    PlayerTextDrawSetProportional(playerid, BoxInv[playerid][2], true);
    PlayerTextDrawSetSelectable(playerid, BoxInv[playerid][2], true);

    BoxInv[playerid][3] = CreatePlayerTextDraw(playerid, 238.000, 146.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, BoxInv[playerid][3], 44.000, 42.000);
    PlayerTextDrawAlignment(playerid, BoxInv[playerid][3], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, BoxInv[playerid][3], 488581119);
    PlayerTextDrawSetShadow(playerid, BoxInv[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, BoxInv[playerid][3], 0);
    PlayerTextDrawBackgroundColour(playerid, BoxInv[playerid][3], 255);
    PlayerTextDrawFont(playerid, BoxInv[playerid][3], TEXT_DRAW_FONT_SPRITE_DRAW);
    PlayerTextDrawSetProportional(playerid, BoxInv[playerid][3], true);
    PlayerTextDrawSetSelectable(playerid, BoxInv[playerid][3], true);

    BoxInv[playerid][4] = CreatePlayerTextDraw(playerid, 284.000, 146.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, BoxInv[playerid][4], 44.000, 42.000);
    PlayerTextDrawAlignment(playerid, BoxInv[playerid][4], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, BoxInv[playerid][4], 488581119);
    PlayerTextDrawSetShadow(playerid, BoxInv[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, BoxInv[playerid][4], 0);
    PlayerTextDrawBackgroundColour(playerid, BoxInv[playerid][4], 255);
    PlayerTextDrawFont(playerid, BoxInv[playerid][4], TEXT_DRAW_FONT_SPRITE_DRAW);
    PlayerTextDrawSetProportional(playerid, BoxInv[playerid][4], true);
    PlayerTextDrawSetSelectable(playerid, BoxInv[playerid][4], true);

    BoxInv[playerid][5] = CreatePlayerTextDraw(playerid, 100.000, 229.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, BoxInv[playerid][5], 44.000, 42.000);
    PlayerTextDrawAlignment(playerid, BoxInv[playerid][5], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, BoxInv[playerid][5], 488581119);
    PlayerTextDrawSetShadow(playerid, BoxInv[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, BoxInv[playerid][5], 0);
    PlayerTextDrawBackgroundColour(playerid, BoxInv[playerid][5], 255);
    PlayerTextDrawFont(playerid, BoxInv[playerid][5], TEXT_DRAW_FONT_SPRITE_DRAW);
    PlayerTextDrawSetProportional(playerid, BoxInv[playerid][5], true);
    PlayerTextDrawSetSelectable(playerid, BoxInv[playerid][5], true);

    BoxInv[playerid][6] = CreatePlayerTextDraw(playerid, 146.000, 229.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, BoxInv[playerid][6], 44.000, 42.000);
    PlayerTextDrawAlignment(playerid, BoxInv[playerid][6], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, BoxInv[playerid][6], 488581119);
    PlayerTextDrawSetShadow(playerid, BoxInv[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, BoxInv[playerid][6], 0);
    PlayerTextDrawBackgroundColour(playerid, BoxInv[playerid][6], 255);
    PlayerTextDrawFont(playerid, BoxInv[playerid][6], TEXT_DRAW_FONT_SPRITE_DRAW);
    PlayerTextDrawSetProportional(playerid, BoxInv[playerid][6], true);
    PlayerTextDrawSetSelectable(playerid, BoxInv[playerid][6], true);

    BoxInv[playerid][7] = CreatePlayerTextDraw(playerid, 192.000, 229.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, BoxInv[playerid][7], 44.000, 42.000);
    PlayerTextDrawAlignment(playerid, BoxInv[playerid][7], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, BoxInv[playerid][7], 488581119);
    PlayerTextDrawSetShadow(playerid, BoxInv[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, BoxInv[playerid][7], 0);
    PlayerTextDrawBackgroundColour(playerid, BoxInv[playerid][7], 255);
    PlayerTextDrawFont(playerid, BoxInv[playerid][7], TEXT_DRAW_FONT_SPRITE_DRAW);
    PlayerTextDrawSetProportional(playerid, BoxInv[playerid][7], true);
    PlayerTextDrawSetSelectable(playerid, BoxInv[playerid][7], true);

    BoxInv[playerid][8] = CreatePlayerTextDraw(playerid, 238.000, 230.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, BoxInv[playerid][8], 44.000, 42.000);
    PlayerTextDrawAlignment(playerid, BoxInv[playerid][8], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, BoxInv[playerid][8], 488581119);
    PlayerTextDrawSetShadow(playerid, BoxInv[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, BoxInv[playerid][8], 0);
    PlayerTextDrawBackgroundColour(playerid, BoxInv[playerid][8], 255);
    PlayerTextDrawFont(playerid, BoxInv[playerid][8], TEXT_DRAW_FONT_SPRITE_DRAW);
    PlayerTextDrawSetProportional(playerid, BoxInv[playerid][8], true);
    PlayerTextDrawSetSelectable(playerid, BoxInv[playerid][8], true);

    BoxInv[playerid][9] = CreatePlayerTextDraw(playerid, 284.000, 230.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, BoxInv[playerid][9], 44.000, 42.000);
    PlayerTextDrawAlignment(playerid, BoxInv[playerid][9], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, BoxInv[playerid][9], 488581119);
    PlayerTextDrawSetShadow(playerid, BoxInv[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, BoxInv[playerid][9], 0);
    PlayerTextDrawBackgroundColour(playerid, BoxInv[playerid][9], 255);
    PlayerTextDrawFont(playerid, BoxInv[playerid][9], TEXT_DRAW_FONT_SPRITE_DRAW);
    PlayerTextDrawSetProportional(playerid, BoxInv[playerid][9], true);
    PlayerTextDrawSetSelectable(playerid, BoxInv[playerid][9], true);

    BoxInv[playerid][10] = CreatePlayerTextDraw(playerid, 100.000, 273.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, BoxInv[playerid][10], 44.000, 42.000);
    PlayerTextDrawAlignment(playerid, BoxInv[playerid][10], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, BoxInv[playerid][10], 488581119);
    PlayerTextDrawSetShadow(playerid, BoxInv[playerid][10], 0);
    PlayerTextDrawSetOutline(playerid, BoxInv[playerid][10], 0);
    PlayerTextDrawBackgroundColour(playerid, BoxInv[playerid][10], 255);
    PlayerTextDrawFont(playerid, BoxInv[playerid][10], TEXT_DRAW_FONT_SPRITE_DRAW);
    PlayerTextDrawSetProportional(playerid, BoxInv[playerid][10], true);
    PlayerTextDrawSetSelectable(playerid, BoxInv[playerid][10], true);

    BoxInv[playerid][11] = CreatePlayerTextDraw(playerid, 146.000, 273.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, BoxInv[playerid][11], 44.000, 42.000);
    PlayerTextDrawAlignment(playerid, BoxInv[playerid][11], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, BoxInv[playerid][11], 488581119);
    PlayerTextDrawSetShadow(playerid, BoxInv[playerid][11], 0);
    PlayerTextDrawSetOutline(playerid, BoxInv[playerid][11], 0);
    PlayerTextDrawBackgroundColour(playerid, BoxInv[playerid][11], 255);
    PlayerTextDrawFont(playerid, BoxInv[playerid][11], TEXT_DRAW_FONT_SPRITE_DRAW);
    PlayerTextDrawSetProportional(playerid, BoxInv[playerid][11], true);
    PlayerTextDrawSetSelectable(playerid, BoxInv[playerid][11], true);

    BoxInv[playerid][12] = CreatePlayerTextDraw(playerid, 192.000, 273.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, BoxInv[playerid][12], 44.000, 42.000);
    PlayerTextDrawAlignment(playerid, BoxInv[playerid][12], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, BoxInv[playerid][12], 488581119);
    PlayerTextDrawSetShadow(playerid, BoxInv[playerid][12], 0);
    PlayerTextDrawSetOutline(playerid, BoxInv[playerid][12], 0);
    PlayerTextDrawBackgroundColour(playerid, BoxInv[playerid][12], 255);
    PlayerTextDrawFont(playerid, BoxInv[playerid][12], TEXT_DRAW_FONT_SPRITE_DRAW);
    PlayerTextDrawSetProportional(playerid, BoxInv[playerid][12], true);
    PlayerTextDrawSetSelectable(playerid, BoxInv[playerid][12], true);

    BoxInv[playerid][13] = CreatePlayerTextDraw(playerid, 238.000, 274.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, BoxInv[playerid][13], 44.000, 42.000);
    PlayerTextDrawAlignment(playerid, BoxInv[playerid][13], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, BoxInv[playerid][13], 488581119);
    PlayerTextDrawSetShadow(playerid, BoxInv[playerid][13], 0);
    PlayerTextDrawSetOutline(playerid, BoxInv[playerid][13], 0);
    PlayerTextDrawBackgroundColour(playerid, BoxInv[playerid][13], 255);
    PlayerTextDrawFont(playerid, BoxInv[playerid][13], TEXT_DRAW_FONT_SPRITE_DRAW);
    PlayerTextDrawSetProportional(playerid, BoxInv[playerid][13], true);
    PlayerTextDrawSetSelectable(playerid, BoxInv[playerid][13], true);

    BoxInv[playerid][14] = CreatePlayerTextDraw(playerid, 284.000, 274.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, BoxInv[playerid][14], 44.000, 42.000);
    PlayerTextDrawAlignment(playerid, BoxInv[playerid][14], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, BoxInv[playerid][14], 488581119);
    PlayerTextDrawSetShadow(playerid, BoxInv[playerid][14], 0);
    PlayerTextDrawSetOutline(playerid, BoxInv[playerid][14], 0);
    PlayerTextDrawBackgroundColour(playerid, BoxInv[playerid][14], 255);
    PlayerTextDrawFont(playerid, BoxInv[playerid][14], TEXT_DRAW_FONT_SPRITE_DRAW);
    PlayerTextDrawSetProportional(playerid, BoxInv[playerid][14], true);
    PlayerTextDrawSetSelectable(playerid, BoxInv[playerid][14], true);

    BoxInv[playerid][15] = CreatePlayerTextDraw(playerid, 100.000, 317.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, BoxInv[playerid][15], 44.000, 42.000);
    PlayerTextDrawAlignment(playerid, BoxInv[playerid][15], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, BoxInv[playerid][15], 488581119);
    PlayerTextDrawSetShadow(playerid, BoxInv[playerid][15], 0);
    PlayerTextDrawSetOutline(playerid, BoxInv[playerid][15], 0);
    PlayerTextDrawBackgroundColour(playerid, BoxInv[playerid][15], 255);
    PlayerTextDrawFont(playerid, BoxInv[playerid][15], TEXT_DRAW_FONT_SPRITE_DRAW);
    PlayerTextDrawSetProportional(playerid, BoxInv[playerid][15], true);
    PlayerTextDrawSetSelectable(playerid, BoxInv[playerid][15], true);

    BoxInv[playerid][16] = CreatePlayerTextDraw(playerid, 146.000, 317.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, BoxInv[playerid][16], 44.000, 42.000);
    PlayerTextDrawAlignment(playerid, BoxInv[playerid][16], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, BoxInv[playerid][16], 488581119);
    PlayerTextDrawSetShadow(playerid, BoxInv[playerid][16], 0);
    PlayerTextDrawSetOutline(playerid, BoxInv[playerid][16], 0);
    PlayerTextDrawBackgroundColour(playerid, BoxInv[playerid][16], 255);
    PlayerTextDrawFont(playerid, BoxInv[playerid][16], TEXT_DRAW_FONT_SPRITE_DRAW);
    PlayerTextDrawSetProportional(playerid, BoxInv[playerid][16], true);
    PlayerTextDrawSetSelectable(playerid, BoxInv[playerid][16], true);

    BoxInv[playerid][17] = CreatePlayerTextDraw(playerid, 192.000, 317.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, BoxInv[playerid][17], 44.000, 42.000);
    PlayerTextDrawAlignment(playerid, BoxInv[playerid][17], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, BoxInv[playerid][17], 488581119);
    PlayerTextDrawSetShadow(playerid, BoxInv[playerid][17], 0);
    PlayerTextDrawSetOutline(playerid, BoxInv[playerid][17], 0);
    PlayerTextDrawBackgroundColour(playerid, BoxInv[playerid][17], 255);
    PlayerTextDrawFont(playerid, BoxInv[playerid][17], TEXT_DRAW_FONT_SPRITE_DRAW);
    PlayerTextDrawSetProportional(playerid, BoxInv[playerid][17], true);
    PlayerTextDrawSetSelectable(playerid, BoxInv[playerid][17], true);

    BoxInv[playerid][18] = CreatePlayerTextDraw(playerid, 238.000, 317.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, BoxInv[playerid][18], 44.000, 42.000);
    PlayerTextDrawAlignment(playerid, BoxInv[playerid][18], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, BoxInv[playerid][18], 488581119);
    PlayerTextDrawSetShadow(playerid, BoxInv[playerid][18], 0);
    PlayerTextDrawSetOutline(playerid, BoxInv[playerid][18], 0);
    PlayerTextDrawBackgroundColour(playerid, BoxInv[playerid][18], 255);
    PlayerTextDrawFont(playerid, BoxInv[playerid][18], TEXT_DRAW_FONT_SPRITE_DRAW);
    PlayerTextDrawSetProportional(playerid, BoxInv[playerid][18], true);
    PlayerTextDrawSetSelectable(playerid, BoxInv[playerid][18], true);

    BoxInv[playerid][19] = CreatePlayerTextDraw(playerid, 284.000, 317.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, BoxInv[playerid][19], 44.000, 42.000);
    PlayerTextDrawAlignment(playerid, BoxInv[playerid][19], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, BoxInv[playerid][19], 488581119);
    PlayerTextDrawSetShadow(playerid, BoxInv[playerid][19], 0);
    PlayerTextDrawSetOutline(playerid, BoxInv[playerid][19], 0);
    PlayerTextDrawBackgroundColour(playerid, BoxInv[playerid][19], 255);
    PlayerTextDrawFont(playerid, BoxInv[playerid][19], TEXT_DRAW_FONT_SPRITE_DRAW);
    PlayerTextDrawSetProportional(playerid, BoxInv[playerid][19], true);
    PlayerTextDrawSetSelectable(playerid, BoxInv[playerid][19], true);

    BoxAngka[playerid][0] = CreatePlayerTextDraw(playerid, 103.000, 145.000, "1");
    PlayerTextDrawLetterSize(playerid, BoxAngka[playerid][0], 0.128, 1.199);
    PlayerTextDrawTextSize(playerid, BoxAngka[playerid][0], 99.000, 29.000);
    PlayerTextDrawAlignment(playerid, BoxAngka[playerid][0], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, BoxAngka[playerid][0], -2686721);
    PlayerTextDrawSetShadow(playerid, BoxAngka[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, BoxAngka[playerid][0], 0);
    PlayerTextDrawBackgroundColour(playerid, BoxAngka[playerid][0], 150);
    PlayerTextDrawFont(playerid, BoxAngka[playerid][0], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, BoxAngka[playerid][0], true);

    BoxAngka[playerid][1] = CreatePlayerTextDraw(playerid, 149.000, 145.000, "2");
    PlayerTextDrawLetterSize(playerid, BoxAngka[playerid][1], 0.128, 1.199);
    PlayerTextDrawTextSize(playerid, BoxAngka[playerid][1], 99.000, 30.000);
    PlayerTextDrawAlignment(playerid, BoxAngka[playerid][1], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, BoxAngka[playerid][1], -2686721);
    PlayerTextDrawSetShadow(playerid, BoxAngka[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, BoxAngka[playerid][1], 0);
    PlayerTextDrawBackgroundColour(playerid, BoxAngka[playerid][1], 150);
    PlayerTextDrawFont(playerid, BoxAngka[playerid][1], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, BoxAngka[playerid][1], true);

    BoxAngka[playerid][2] = CreatePlayerTextDraw(playerid, 195.000, 145.000, "3");
    PlayerTextDrawLetterSize(playerid, BoxAngka[playerid][2], 0.128, 1.199);
    PlayerTextDrawTextSize(playerid, BoxAngka[playerid][2], 99.000, 30.000);
    PlayerTextDrawAlignment(playerid, BoxAngka[playerid][2], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, BoxAngka[playerid][2], -2686721);
    PlayerTextDrawSetShadow(playerid, BoxAngka[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, BoxAngka[playerid][2], 0);
    PlayerTextDrawBackgroundColour(playerid, BoxAngka[playerid][2], 150);
    PlayerTextDrawFont(playerid, BoxAngka[playerid][2], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, BoxAngka[playerid][2], true);

    BoxAngka[playerid][3] = CreatePlayerTextDraw(playerid, 240.000, 145.000, "4");
    PlayerTextDrawLetterSize(playerid, BoxAngka[playerid][3], 0.128, 1.199);
    PlayerTextDrawTextSize(playerid, BoxAngka[playerid][3], 99.000, 30.000);
    PlayerTextDrawAlignment(playerid, BoxAngka[playerid][3], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, BoxAngka[playerid][3], -2686721);
    PlayerTextDrawSetShadow(playerid, BoxAngka[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, BoxAngka[playerid][3], 0);
    PlayerTextDrawBackgroundColour(playerid, BoxAngka[playerid][3], 150);
    PlayerTextDrawFont(playerid, BoxAngka[playerid][3], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, BoxAngka[playerid][3], true);

    BoxAngka[playerid][4] = CreatePlayerTextDraw(playerid, 287.000, 145.000, "5");
    PlayerTextDrawLetterSize(playerid, BoxAngka[playerid][4], 0.128, 1.199);
    PlayerTextDrawTextSize(playerid, BoxAngka[playerid][4], 99.000, 30.000);
    PlayerTextDrawAlignment(playerid, BoxAngka[playerid][4], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, BoxAngka[playerid][4], -2686721);
    PlayerTextDrawSetShadow(playerid, BoxAngka[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, BoxAngka[playerid][4], 0);
    PlayerTextDrawBackgroundColour(playerid, BoxAngka[playerid][4], 150);
    PlayerTextDrawFont(playerid, BoxAngka[playerid][4], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, BoxAngka[playerid][4], true);

    NameInv[playerid][0] = CreatePlayerTextDraw(playerid, 102.000, 177.000, "starling");
    PlayerTextDrawLetterSize(playerid, NameInv[playerid][0], 0.118, 0.999);
    PlayerTextDrawTextSize(playerid, NameInv[playerid][0], 525.000, 30.000);
    PlayerTextDrawAlignment(playerid, NameInv[playerid][0], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, NameInv[playerid][0], -1);
    PlayerTextDrawSetShadow(playerid, NameInv[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, NameInv[playerid][0], 0);
    PlayerTextDrawBackgroundColour(playerid, NameInv[playerid][0], 150);
    PlayerTextDrawFont(playerid, NameInv[playerid][0], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, NameInv[playerid][0], true);

    NameInv[playerid][1] = CreatePlayerTextDraw(playerid, 148.000, 177.000, "starling");
    PlayerTextDrawLetterSize(playerid, NameInv[playerid][1], 0.118, 0.999);
    PlayerTextDrawTextSize(playerid, NameInv[playerid][1], 525.000, 30.000);
    PlayerTextDrawAlignment(playerid, NameInv[playerid][1], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, NameInv[playerid][1], -1);
    PlayerTextDrawSetShadow(playerid, NameInv[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, NameInv[playerid][1], 0);
    PlayerTextDrawBackgroundColour(playerid, NameInv[playerid][1], 150);
    PlayerTextDrawFont(playerid, NameInv[playerid][1], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, NameInv[playerid][1], true);

    NameInv[playerid][2] = CreatePlayerTextDraw(playerid, 194.000, 177.000, "starling");
    PlayerTextDrawLetterSize(playerid, NameInv[playerid][2], 0.118, 0.999);
    PlayerTextDrawTextSize(playerid, NameInv[playerid][2], 525.000, 30.000);
    PlayerTextDrawAlignment(playerid, NameInv[playerid][2], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, NameInv[playerid][2], -1);
    PlayerTextDrawSetShadow(playerid, NameInv[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, NameInv[playerid][2], 0);
    PlayerTextDrawBackgroundColour(playerid, NameInv[playerid][2], 150);
    PlayerTextDrawFont(playerid, NameInv[playerid][2], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, NameInv[playerid][2], true);

    NameInv[playerid][3] = CreatePlayerTextDraw(playerid, 239.000, 177.000, "starling");
    PlayerTextDrawLetterSize(playerid, NameInv[playerid][3], 0.118, 0.999);
    PlayerTextDrawTextSize(playerid, NameInv[playerid][3], 525.000, 30.000);
    PlayerTextDrawAlignment(playerid, NameInv[playerid][3], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, NameInv[playerid][3], -1);
    PlayerTextDrawSetShadow(playerid, NameInv[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, NameInv[playerid][3], 0);
    PlayerTextDrawBackgroundColour(playerid, NameInv[playerid][3], 150);
    PlayerTextDrawFont(playerid, NameInv[playerid][3], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, NameInv[playerid][3], true);

    NameInv[playerid][4] = CreatePlayerTextDraw(playerid, 286.000, 177.000, "starling");
    PlayerTextDrawLetterSize(playerid, NameInv[playerid][4], 0.118, 0.999);
    PlayerTextDrawTextSize(playerid, NameInv[playerid][4], 525.000, 30.000);
    PlayerTextDrawAlignment(playerid, NameInv[playerid][4], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, NameInv[playerid][4], -1);
    PlayerTextDrawSetShadow(playerid, NameInv[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, NameInv[playerid][4], 0);
    PlayerTextDrawBackgroundColour(playerid, NameInv[playerid][4], 150);
    PlayerTextDrawFont(playerid, NameInv[playerid][4], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, NameInv[playerid][4], true);

    NameInv[playerid][5] = CreatePlayerTextDraw(playerid, 102.000, 260.000, "starling");
    PlayerTextDrawLetterSize(playerid, NameInv[playerid][5], 0.118, 0.999);
    PlayerTextDrawTextSize(playerid, NameInv[playerid][5], 525.000, 30.000);
    PlayerTextDrawAlignment(playerid, NameInv[playerid][5], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, NameInv[playerid][5], -1);
    PlayerTextDrawSetShadow(playerid, NameInv[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, NameInv[playerid][5], 0);
    PlayerTextDrawBackgroundColour(playerid, NameInv[playerid][5], 150);
    PlayerTextDrawFont(playerid, NameInv[playerid][5], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, NameInv[playerid][5], true);

    NameInv[playerid][6] = CreatePlayerTextDraw(playerid, 147.000, 260.000, "starling");
    PlayerTextDrawLetterSize(playerid, NameInv[playerid][6], 0.118, 0.999);
    PlayerTextDrawTextSize(playerid, NameInv[playerid][6], 525.000, 30.000);
    PlayerTextDrawAlignment(playerid, NameInv[playerid][6], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, NameInv[playerid][6], -1);
    PlayerTextDrawSetShadow(playerid, NameInv[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, NameInv[playerid][6], 0);
    PlayerTextDrawBackgroundColour(playerid, NameInv[playerid][6], 150);
    PlayerTextDrawFont(playerid, NameInv[playerid][6], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, NameInv[playerid][6], true);

    NameInv[playerid][7] = CreatePlayerTextDraw(playerid, 193.000, 260.000, "starling");
    PlayerTextDrawLetterSize(playerid, NameInv[playerid][7], 0.118, 0.999);
    PlayerTextDrawTextSize(playerid, NameInv[playerid][7], 525.000, 30.000);
    PlayerTextDrawAlignment(playerid, NameInv[playerid][7], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, NameInv[playerid][7], -1);
    PlayerTextDrawSetShadow(playerid, NameInv[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, NameInv[playerid][7], 0);
    PlayerTextDrawBackgroundColour(playerid, NameInv[playerid][7], 150);
    PlayerTextDrawFont(playerid, NameInv[playerid][7], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, NameInv[playerid][7], true);

    NameInv[playerid][8] = CreatePlayerTextDraw(playerid, 239.000, 260.000, "starling");
    PlayerTextDrawLetterSize(playerid, NameInv[playerid][8], 0.118, 0.999);
    PlayerTextDrawTextSize(playerid, NameInv[playerid][8], 525.000, 30.000);
    PlayerTextDrawAlignment(playerid, NameInv[playerid][8], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, NameInv[playerid][8], -1);
    PlayerTextDrawSetShadow(playerid, NameInv[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, NameInv[playerid][8], 0);
    PlayerTextDrawBackgroundColour(playerid, NameInv[playerid][8], 150);
    PlayerTextDrawFont(playerid, NameInv[playerid][8], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, NameInv[playerid][8], true);

    NameInv[playerid][9] = CreatePlayerTextDraw(playerid, 285.000, 260.000, "starling");
    PlayerTextDrawLetterSize(playerid, NameInv[playerid][9], 0.118, 0.999);
    PlayerTextDrawTextSize(playerid, NameInv[playerid][9], 525.000, 30.000);
    PlayerTextDrawAlignment(playerid, NameInv[playerid][9], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, NameInv[playerid][9], -1);
    PlayerTextDrawSetShadow(playerid, NameInv[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, NameInv[playerid][9], 0);
    PlayerTextDrawBackgroundColour(playerid, NameInv[playerid][9], 150);
    PlayerTextDrawFont(playerid, NameInv[playerid][9], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, NameInv[playerid][9], true);

    NameInv[playerid][10] = CreatePlayerTextDraw(playerid, 102.000, 304.000, "starling");
    PlayerTextDrawLetterSize(playerid, NameInv[playerid][10], 0.118, 0.999);
    PlayerTextDrawTextSize(playerid, NameInv[playerid][10], 525.000, 30.000);
    PlayerTextDrawAlignment(playerid, NameInv[playerid][10], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, NameInv[playerid][10], -1);
    PlayerTextDrawSetShadow(playerid, NameInv[playerid][10], 0);
    PlayerTextDrawSetOutline(playerid, NameInv[playerid][10], 0);
    PlayerTextDrawBackgroundColour(playerid, NameInv[playerid][10], 150);
    PlayerTextDrawFont(playerid, NameInv[playerid][10], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, NameInv[playerid][10], true);

    NameInv[playerid][11] = CreatePlayerTextDraw(playerid, 147.000, 304.000, "starling");
    PlayerTextDrawLetterSize(playerid, NameInv[playerid][11], 0.118, 0.999);
    PlayerTextDrawTextSize(playerid, NameInv[playerid][11], 525.000, 30.000);
    PlayerTextDrawAlignment(playerid, NameInv[playerid][11], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, NameInv[playerid][11], -1);
    PlayerTextDrawSetShadow(playerid, NameInv[playerid][11], 0);
    PlayerTextDrawSetOutline(playerid, NameInv[playerid][11], 0);
    PlayerTextDrawBackgroundColour(playerid, NameInv[playerid][11], 150);
    PlayerTextDrawFont(playerid, NameInv[playerid][11], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, NameInv[playerid][11], true);

    NameInv[playerid][12] = CreatePlayerTextDraw(playerid, 193.000, 304.000, "starling");
    PlayerTextDrawLetterSize(playerid, NameInv[playerid][12], 0.118, 0.999);
    PlayerTextDrawTextSize(playerid, NameInv[playerid][12], 525.000, 30.000);
    PlayerTextDrawAlignment(playerid, NameInv[playerid][12], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, NameInv[playerid][12], -1);
    PlayerTextDrawSetShadow(playerid, NameInv[playerid][12], 0);
    PlayerTextDrawSetOutline(playerid, NameInv[playerid][12], 0);
    PlayerTextDrawBackgroundColour(playerid, NameInv[playerid][12], 150);
    PlayerTextDrawFont(playerid, NameInv[playerid][12], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, NameInv[playerid][12], true);

    NameInv[playerid][13] = CreatePlayerTextDraw(playerid, 239.000, 305.000, "starling");
    PlayerTextDrawLetterSize(playerid, NameInv[playerid][13], 0.118, 0.999);
    PlayerTextDrawTextSize(playerid, NameInv[playerid][13], 525.000, 30.000);
    PlayerTextDrawAlignment(playerid, NameInv[playerid][13], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, NameInv[playerid][13], -1);
    PlayerTextDrawSetShadow(playerid, NameInv[playerid][13], 0);
    PlayerTextDrawSetOutline(playerid, NameInv[playerid][13], 0);
    PlayerTextDrawBackgroundColour(playerid, NameInv[playerid][13], 150);
    PlayerTextDrawFont(playerid, NameInv[playerid][13], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, NameInv[playerid][13], true);

    NameInv[playerid][14] = CreatePlayerTextDraw(playerid, 285.000, 305.000, "starling");
    PlayerTextDrawLetterSize(playerid, NameInv[playerid][14], 0.118, 0.999);
    PlayerTextDrawTextSize(playerid, NameInv[playerid][14], 525.000, 30.000);
    PlayerTextDrawAlignment(playerid, NameInv[playerid][14], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, NameInv[playerid][14], -1);
    PlayerTextDrawSetShadow(playerid, NameInv[playerid][14], 0);
    PlayerTextDrawSetOutline(playerid, NameInv[playerid][14], 0);
    PlayerTextDrawBackgroundColour(playerid, NameInv[playerid][14], 150);
    PlayerTextDrawFont(playerid, NameInv[playerid][14], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, NameInv[playerid][14], true);

    NameInv[playerid][15] = CreatePlayerTextDraw(playerid, 102.000, 348.000, "starling");
    PlayerTextDrawLetterSize(playerid, NameInv[playerid][15], 0.118, 0.999);
    PlayerTextDrawTextSize(playerid, NameInv[playerid][15], 525.000, 30.000);
    PlayerTextDrawAlignment(playerid, NameInv[playerid][15], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, NameInv[playerid][15], -1);
    PlayerTextDrawSetShadow(playerid, NameInv[playerid][15], 0);
    PlayerTextDrawSetOutline(playerid, NameInv[playerid][15], 0);
    PlayerTextDrawBackgroundColour(playerid, NameInv[playerid][15], 150);
    PlayerTextDrawFont(playerid, NameInv[playerid][15], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, NameInv[playerid][15], true);

    NameInv[playerid][16] = CreatePlayerTextDraw(playerid, 147.000, 348.000, "starling");
    PlayerTextDrawLetterSize(playerid, NameInv[playerid][16], 0.118, 0.999);
    PlayerTextDrawTextSize(playerid, NameInv[playerid][16], 525.000, 30.000);
    PlayerTextDrawAlignment(playerid, NameInv[playerid][16], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, NameInv[playerid][16], -1);
    PlayerTextDrawSetShadow(playerid, NameInv[playerid][16], 0);
    PlayerTextDrawSetOutline(playerid, NameInv[playerid][16], 0);
    PlayerTextDrawBackgroundColour(playerid, NameInv[playerid][16], 150);
    PlayerTextDrawFont(playerid, NameInv[playerid][16], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, NameInv[playerid][16], true);

    NameInv[playerid][17] = CreatePlayerTextDraw(playerid, 193.000, 348.000, "starling");
    PlayerTextDrawLetterSize(playerid, NameInv[playerid][17], 0.118, 0.999);
    PlayerTextDrawTextSize(playerid, NameInv[playerid][17], 525.000, 30.000);
    PlayerTextDrawAlignment(playerid, NameInv[playerid][17], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, NameInv[playerid][17], -1);
    PlayerTextDrawSetShadow(playerid, NameInv[playerid][17], 0);
    PlayerTextDrawSetOutline(playerid, NameInv[playerid][17], 0);
    PlayerTextDrawBackgroundColour(playerid, NameInv[playerid][17], 150);
    PlayerTextDrawFont(playerid, NameInv[playerid][17], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, NameInv[playerid][17], true);

    NameInv[playerid][18] = CreatePlayerTextDraw(playerid, 239.000, 348.000, "starling");
    PlayerTextDrawLetterSize(playerid, NameInv[playerid][18], 0.118, 0.999);
    PlayerTextDrawTextSize(playerid, NameInv[playerid][18], 525.000, 30.000);
    PlayerTextDrawAlignment(playerid, NameInv[playerid][18], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, NameInv[playerid][18], -1);
    PlayerTextDrawSetShadow(playerid, NameInv[playerid][18], 0);
    PlayerTextDrawSetOutline(playerid, NameInv[playerid][18], 0);
    PlayerTextDrawBackgroundColour(playerid, NameInv[playerid][18], 150);
    PlayerTextDrawFont(playerid, NameInv[playerid][18], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, NameInv[playerid][18], true);

    NameInv[playerid][19] = CreatePlayerTextDraw(playerid, 285.000, 348.000, "starling");
    PlayerTextDrawLetterSize(playerid, NameInv[playerid][19], 0.118, 0.999);
    PlayerTextDrawTextSize(playerid, NameInv[playerid][19], 525.000, 30.000);
    PlayerTextDrawAlignment(playerid, NameInv[playerid][19], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, NameInv[playerid][19], -1);
    PlayerTextDrawSetShadow(playerid, NameInv[playerid][19], 0);
    PlayerTextDrawSetOutline(playerid, NameInv[playerid][19], 0);
    PlayerTextDrawBackgroundColour(playerid, NameInv[playerid][19], 150);
    PlayerTextDrawFont(playerid, NameInv[playerid][19], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, NameInv[playerid][19], true);

    PrevMod[playerid][0] = CreatePlayerTextDraw(playerid, 97.000, 140.000, "_");
    PlayerTextDrawTextSize(playerid, PrevMod[playerid][0], 47.000, 50.000);
    PlayerTextDrawAlignment(playerid, PrevMod[playerid][0], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, PrevMod[playerid][0], -1);
    PlayerTextDrawSetShadow(playerid, PrevMod[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, PrevMod[playerid][0], 0);
    PlayerTextDrawBackgroundColour(playerid, PrevMod[playerid][0], 0);
    PlayerTextDrawFont(playerid, PrevMod[playerid][0], TEXT_DRAW_FONT_MODEL_PREVIEW);
    PlayerTextDrawSetProportional(playerid, PrevMod[playerid][0], false);
    PlayerTextDrawSetPreviewModel(playerid, PrevMod[playerid][0], 1546);
    PlayerTextDrawSetPreviewRot(playerid, PrevMod[playerid][0], 0.000, 0.000, 0.000, 1.200);
    PlayerTextDrawSetPreviewVehicleColours(playerid, PrevMod[playerid][0], 0, 0);

    PrevMod[playerid][1] = CreatePlayerTextDraw(playerid, 143.000, 140.000, "_");
    PlayerTextDrawTextSize(playerid, PrevMod[playerid][1], 47.000, 50.000);
    PlayerTextDrawAlignment(playerid, PrevMod[playerid][1], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, PrevMod[playerid][1], -1);
    PlayerTextDrawSetShadow(playerid, PrevMod[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, PrevMod[playerid][1], 0);
    PlayerTextDrawBackgroundColour(playerid, PrevMod[playerid][1], 0);
    PlayerTextDrawFont(playerid, PrevMod[playerid][1], TEXT_DRAW_FONT_MODEL_PREVIEW);
    PlayerTextDrawSetProportional(playerid, PrevMod[playerid][1], false);
    PlayerTextDrawSetPreviewModel(playerid, PrevMod[playerid][1], 1546);
    PlayerTextDrawSetPreviewRot(playerid, PrevMod[playerid][1], 0.000, 0.000, 0.000, 1.200);
    PlayerTextDrawSetPreviewVehicleColours(playerid, PrevMod[playerid][1], 0, 0);

    PrevMod[playerid][2] = CreatePlayerTextDraw(playerid, 189.000, 140.000, "_");
    PlayerTextDrawTextSize(playerid, PrevMod[playerid][2], 47.000, 50.000);
    PlayerTextDrawAlignment(playerid, PrevMod[playerid][2], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, PrevMod[playerid][2], -1);
    PlayerTextDrawSetShadow(playerid, PrevMod[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, PrevMod[playerid][2], 0);
    PlayerTextDrawBackgroundColour(playerid, PrevMod[playerid][2], 0);
    PlayerTextDrawFont(playerid, PrevMod[playerid][2], TEXT_DRAW_FONT_MODEL_PREVIEW);
    PlayerTextDrawSetProportional(playerid, PrevMod[playerid][2], false);
    PlayerTextDrawSetPreviewModel(playerid, PrevMod[playerid][2], 1546);
    PlayerTextDrawSetPreviewRot(playerid, PrevMod[playerid][2], 0.000, 0.000, 0.000, 1.200);
    PlayerTextDrawSetPreviewVehicleColours(playerid, PrevMod[playerid][2], 0, 0);

    PrevMod[playerid][3] = CreatePlayerTextDraw(playerid, 236.000, 140.000, "_");
    PlayerTextDrawTextSize(playerid, PrevMod[playerid][3], 47.000, 50.000);
    PlayerTextDrawAlignment(playerid, PrevMod[playerid][3], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, PrevMod[playerid][3], -1);
    PlayerTextDrawSetShadow(playerid, PrevMod[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, PrevMod[playerid][3], 0);
    PlayerTextDrawBackgroundColour(playerid, PrevMod[playerid][3], 0);
    PlayerTextDrawFont(playerid, PrevMod[playerid][3], TEXT_DRAW_FONT_MODEL_PREVIEW);
    PlayerTextDrawSetProportional(playerid, PrevMod[playerid][3], false);
    PlayerTextDrawSetPreviewModel(playerid, PrevMod[playerid][3], 1546);
    PlayerTextDrawSetPreviewRot(playerid, PrevMod[playerid][3], 0.000, 0.000, 0.000, 1.200);
    PlayerTextDrawSetPreviewVehicleColours(playerid, PrevMod[playerid][3], 0, 0);

    PrevMod[playerid][4] = CreatePlayerTextDraw(playerid, 281.000, 140.000, "_");
    PlayerTextDrawTextSize(playerid, PrevMod[playerid][4], 47.000, 50.000);
    PlayerTextDrawAlignment(playerid, PrevMod[playerid][4], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, PrevMod[playerid][4], -1);
    PlayerTextDrawSetShadow(playerid, PrevMod[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, PrevMod[playerid][4], 0);
    PlayerTextDrawBackgroundColour(playerid, PrevMod[playerid][4], 0);
    PlayerTextDrawFont(playerid, PrevMod[playerid][4], TEXT_DRAW_FONT_MODEL_PREVIEW);
    PlayerTextDrawSetProportional(playerid, PrevMod[playerid][4], false);
    PlayerTextDrawSetPreviewModel(playerid, PrevMod[playerid][4], 1546);
    PlayerTextDrawSetPreviewRot(playerid, PrevMod[playerid][4], 0.000, 0.000, 0.000, 1.200);
    PlayerTextDrawSetPreviewVehicleColours(playerid, PrevMod[playerid][4], 0, 0);

    PrevMod[playerid][5] = CreatePlayerTextDraw(playerid, 97.000, 223.000, "_");
    PlayerTextDrawTextSize(playerid, PrevMod[playerid][5], 47.000, 50.000);
    PlayerTextDrawAlignment(playerid, PrevMod[playerid][5], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, PrevMod[playerid][5], -1);
    PlayerTextDrawSetShadow(playerid, PrevMod[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, PrevMod[playerid][5], 0);
    PlayerTextDrawBackgroundColour(playerid, PrevMod[playerid][5], 0);
    PlayerTextDrawFont(playerid, PrevMod[playerid][5], TEXT_DRAW_FONT_MODEL_PREVIEW);
    PlayerTextDrawSetProportional(playerid, PrevMod[playerid][5], false);
    PlayerTextDrawSetPreviewModel(playerid, PrevMod[playerid][5], 1546);
    PlayerTextDrawSetPreviewRot(playerid, PrevMod[playerid][5], 0.000, 0.000, 0.000, 1.200);
    PlayerTextDrawSetPreviewVehicleColours(playerid, PrevMod[playerid][5], 0, 0);

    PrevMod[playerid][6] = CreatePlayerTextDraw(playerid, 142.000, 223.000, "_");
    PlayerTextDrawTextSize(playerid, PrevMod[playerid][6], 47.000, 50.000);
    PlayerTextDrawAlignment(playerid, PrevMod[playerid][6], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, PrevMod[playerid][6], -1);
    PlayerTextDrawSetShadow(playerid, PrevMod[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, PrevMod[playerid][6], 0);
    PlayerTextDrawBackgroundColour(playerid, PrevMod[playerid][6], 0);
    PlayerTextDrawFont(playerid, PrevMod[playerid][6], TEXT_DRAW_FONT_MODEL_PREVIEW);
    PlayerTextDrawSetProportional(playerid, PrevMod[playerid][6], false);
    PlayerTextDrawSetPreviewModel(playerid, PrevMod[playerid][6], 1546);
    PlayerTextDrawSetPreviewRot(playerid, PrevMod[playerid][6], 0.000, 0.000, 0.000, 1.200);
    PlayerTextDrawSetPreviewVehicleColours(playerid, PrevMod[playerid][6], 0, 0);

    PrevMod[playerid][7] = CreatePlayerTextDraw(playerid, 187.000, 223.000, "_");
    PlayerTextDrawTextSize(playerid, PrevMod[playerid][7], 47.000, 50.000);
    PlayerTextDrawAlignment(playerid, PrevMod[playerid][7], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, PrevMod[playerid][7], -1);
    PlayerTextDrawSetShadow(playerid, PrevMod[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, PrevMod[playerid][7], 0);
    PlayerTextDrawBackgroundColour(playerid, PrevMod[playerid][7], 0);
    PlayerTextDrawFont(playerid, PrevMod[playerid][7], TEXT_DRAW_FONT_MODEL_PREVIEW);
    PlayerTextDrawSetProportional(playerid, PrevMod[playerid][7], false);
    PlayerTextDrawSetPreviewModel(playerid, PrevMod[playerid][7], 1546);
    PlayerTextDrawSetPreviewRot(playerid, PrevMod[playerid][7], 0.000, 0.000, 0.000, 1.200);
    PlayerTextDrawSetPreviewVehicleColours(playerid, PrevMod[playerid][7], 0, 0);

    PrevMod[playerid][8] = CreatePlayerTextDraw(playerid, 234.000, 223.000, "_");
    PlayerTextDrawTextSize(playerid, PrevMod[playerid][8], 47.000, 50.000);
    PlayerTextDrawAlignment(playerid, PrevMod[playerid][8], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, PrevMod[playerid][8], -1);
    PlayerTextDrawSetShadow(playerid, PrevMod[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, PrevMod[playerid][8], 0);
    PlayerTextDrawBackgroundColour(playerid, PrevMod[playerid][8], 0);
    PlayerTextDrawFont(playerid, PrevMod[playerid][8], TEXT_DRAW_FONT_MODEL_PREVIEW);
    PlayerTextDrawSetProportional(playerid, PrevMod[playerid][8], false);
    PlayerTextDrawSetPreviewModel(playerid, PrevMod[playerid][8], 1546);
    PlayerTextDrawSetPreviewRot(playerid, PrevMod[playerid][8], 0.000, 0.000, 0.000, 1.200);
    PlayerTextDrawSetPreviewVehicleColours(playerid, PrevMod[playerid][8], 0, 0);

    PrevMod[playerid][9] = CreatePlayerTextDraw(playerid, 280.000, 223.000, "_");
    PlayerTextDrawTextSize(playerid, PrevMod[playerid][9], 47.000, 50.000);
    PlayerTextDrawAlignment(playerid, PrevMod[playerid][9], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, PrevMod[playerid][9], -1);
    PlayerTextDrawSetShadow(playerid, PrevMod[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, PrevMod[playerid][9], 0);
    PlayerTextDrawBackgroundColour(playerid, PrevMod[playerid][9], 0);
    PlayerTextDrawFont(playerid, PrevMod[playerid][9], TEXT_DRAW_FONT_MODEL_PREVIEW);
    PlayerTextDrawSetProportional(playerid, PrevMod[playerid][9], false);
    PlayerTextDrawSetPreviewModel(playerid, PrevMod[playerid][9], 1546);
    PlayerTextDrawSetPreviewRot(playerid, PrevMod[playerid][9], 0.000, 0.000, 0.000, 1.200);
    PlayerTextDrawSetPreviewVehicleColours(playerid, PrevMod[playerid][9], 0, 0);

    PrevMod[playerid][10] = CreatePlayerTextDraw(playerid, 97.000, 267.000, "_");
    PlayerTextDrawTextSize(playerid, PrevMod[playerid][10], 47.000, 50.000);
    PlayerTextDrawAlignment(playerid, PrevMod[playerid][10], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, PrevMod[playerid][10], -1);
    PlayerTextDrawSetShadow(playerid, PrevMod[playerid][10], 0);
    PlayerTextDrawSetOutline(playerid, PrevMod[playerid][10], 0);
    PlayerTextDrawBackgroundColour(playerid, PrevMod[playerid][10], 0);
    PlayerTextDrawFont(playerid, PrevMod[playerid][10], TEXT_DRAW_FONT_MODEL_PREVIEW);
    PlayerTextDrawSetProportional(playerid, PrevMod[playerid][10], false);
    PlayerTextDrawSetPreviewModel(playerid, PrevMod[playerid][10], 1546);
    PlayerTextDrawSetPreviewRot(playerid, PrevMod[playerid][10], 0.000, 0.000, 0.000, 1.200);
    PlayerTextDrawSetPreviewVehicleColours(playerid, PrevMod[playerid][10], 0, 0);

    PrevMod[playerid][11] = CreatePlayerTextDraw(playerid, 142.000, 267.000, "_");
    PlayerTextDrawTextSize(playerid, PrevMod[playerid][11], 47.000, 50.000);
    PlayerTextDrawAlignment(playerid, PrevMod[playerid][11], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, PrevMod[playerid][11], -1);
    PlayerTextDrawSetShadow(playerid, PrevMod[playerid][11], 0);
    PlayerTextDrawSetOutline(playerid, PrevMod[playerid][11], 0);
    PlayerTextDrawBackgroundColour(playerid, PrevMod[playerid][11], 0);
    PlayerTextDrawFont(playerid, PrevMod[playerid][11], TEXT_DRAW_FONT_MODEL_PREVIEW);
    PlayerTextDrawSetProportional(playerid, PrevMod[playerid][11], false);
    PlayerTextDrawSetPreviewModel(playerid, PrevMod[playerid][11], 1546);
    PlayerTextDrawSetPreviewRot(playerid, PrevMod[playerid][11], 0.000, 0.000, 0.000, 1.200);
    PlayerTextDrawSetPreviewVehicleColours(playerid, PrevMod[playerid][11], 0, 0);

    PrevMod[playerid][12] = CreatePlayerTextDraw(playerid, 188.000, 267.000, "_");
    PlayerTextDrawTextSize(playerid, PrevMod[playerid][12], 47.000, 50.000);
    PlayerTextDrawAlignment(playerid, PrevMod[playerid][12], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, PrevMod[playerid][12], -1);
    PlayerTextDrawSetShadow(playerid, PrevMod[playerid][12], 0);
    PlayerTextDrawSetOutline(playerid, PrevMod[playerid][12], 0);
    PlayerTextDrawBackgroundColour(playerid, PrevMod[playerid][12], 0);
    PlayerTextDrawFont(playerid, PrevMod[playerid][12], TEXT_DRAW_FONT_MODEL_PREVIEW);
    PlayerTextDrawSetProportional(playerid, PrevMod[playerid][12], false);
    PlayerTextDrawSetPreviewModel(playerid, PrevMod[playerid][12], 1546);
    PlayerTextDrawSetPreviewRot(playerid, PrevMod[playerid][12], 0.000, 0.000, 0.000, 1.200);
    PlayerTextDrawSetPreviewVehicleColours(playerid, PrevMod[playerid][12], 0, 0);

    PrevMod[playerid][13] = CreatePlayerTextDraw(playerid, 234.000, 267.000, "_");
    PlayerTextDrawTextSize(playerid, PrevMod[playerid][13], 47.000, 50.000);
    PlayerTextDrawAlignment(playerid, PrevMod[playerid][13], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, PrevMod[playerid][13], -1);
    PlayerTextDrawSetShadow(playerid, PrevMod[playerid][13], 0);
    PlayerTextDrawSetOutline(playerid, PrevMod[playerid][13], 0);
    PlayerTextDrawBackgroundColour(playerid, PrevMod[playerid][13], 0);
    PlayerTextDrawFont(playerid, PrevMod[playerid][13], TEXT_DRAW_FONT_MODEL_PREVIEW);
    PlayerTextDrawSetProportional(playerid, PrevMod[playerid][13], false);
    PlayerTextDrawSetPreviewModel(playerid, PrevMod[playerid][13], 1546);
    PlayerTextDrawSetPreviewRot(playerid, PrevMod[playerid][13], 0.000, 0.000, 0.000, 1.200);
    PlayerTextDrawSetPreviewVehicleColours(playerid, PrevMod[playerid][13], 0, 0);

    PrevMod[playerid][14] = CreatePlayerTextDraw(playerid, 280.000, 268.000, "_");
    PlayerTextDrawTextSize(playerid, PrevMod[playerid][14], 47.000, 50.000);
    PlayerTextDrawAlignment(playerid, PrevMod[playerid][14], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, PrevMod[playerid][14], -1);
    PlayerTextDrawSetShadow(playerid, PrevMod[playerid][14], 0);
    PlayerTextDrawSetOutline(playerid, PrevMod[playerid][14], 0);
    PlayerTextDrawBackgroundColour(playerid, PrevMod[playerid][14], 0);
    PlayerTextDrawFont(playerid, PrevMod[playerid][14], TEXT_DRAW_FONT_MODEL_PREVIEW);
    PlayerTextDrawSetProportional(playerid, PrevMod[playerid][14], false);
    PlayerTextDrawSetPreviewModel(playerid, PrevMod[playerid][14], 1546);
    PlayerTextDrawSetPreviewRot(playerid, PrevMod[playerid][14], 0.000, 0.000, 0.000, 1.200);
    PlayerTextDrawSetPreviewVehicleColours(playerid, PrevMod[playerid][14], 0, 0);

    PrevMod[playerid][15] = CreatePlayerTextDraw(playerid, 97.000, 311.000, "_");
    PlayerTextDrawTextSize(playerid, PrevMod[playerid][15], 47.000, 50.000);
    PlayerTextDrawAlignment(playerid, PrevMod[playerid][15], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, PrevMod[playerid][15], -1);
    PlayerTextDrawSetShadow(playerid, PrevMod[playerid][15], 0);
    PlayerTextDrawSetOutline(playerid, PrevMod[playerid][15], 0);
    PlayerTextDrawBackgroundColour(playerid, PrevMod[playerid][15], 0);
    PlayerTextDrawFont(playerid, PrevMod[playerid][15], TEXT_DRAW_FONT_MODEL_PREVIEW);
    PlayerTextDrawSetProportional(playerid, PrevMod[playerid][15], false);
    PlayerTextDrawSetPreviewModel(playerid, PrevMod[playerid][15], 1546);
    PlayerTextDrawSetPreviewRot(playerid, PrevMod[playerid][15], 0.000, 0.000, 0.000, 1.200);
    PlayerTextDrawSetPreviewVehicleColours(playerid, PrevMod[playerid][15], 0, 0);

    PrevMod[playerid][16] = CreatePlayerTextDraw(playerid, 142.000, 311.000, "_");
    PlayerTextDrawTextSize(playerid, PrevMod[playerid][16], 47.000, 50.000);
    PlayerTextDrawAlignment(playerid, PrevMod[playerid][16], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, PrevMod[playerid][16], -1);
    PlayerTextDrawSetShadow(playerid, PrevMod[playerid][16], 0);
    PlayerTextDrawSetOutline(playerid, PrevMod[playerid][16], 0);
    PlayerTextDrawBackgroundColour(playerid, PrevMod[playerid][16], 0);
    PlayerTextDrawFont(playerid, PrevMod[playerid][16], TEXT_DRAW_FONT_MODEL_PREVIEW);
    PlayerTextDrawSetProportional(playerid, PrevMod[playerid][16], false);
    PlayerTextDrawSetPreviewModel(playerid, PrevMod[playerid][16], 1546);
    PlayerTextDrawSetPreviewRot(playerid, PrevMod[playerid][16], 0.000, 0.000, 0.000, 1.200);
    PlayerTextDrawSetPreviewVehicleColours(playerid, PrevMod[playerid][16], 0, 0);

    PrevMod[playerid][17] = CreatePlayerTextDraw(playerid, 188.000, 311.000, "_");
    PlayerTextDrawTextSize(playerid, PrevMod[playerid][17], 47.000, 50.000);
    PlayerTextDrawAlignment(playerid, PrevMod[playerid][17], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, PrevMod[playerid][17], -1);
    PlayerTextDrawSetShadow(playerid, PrevMod[playerid][17], 0);
    PlayerTextDrawSetOutline(playerid, PrevMod[playerid][17], 0);
    PlayerTextDrawBackgroundColour(playerid, PrevMod[playerid][17], 0);
    PlayerTextDrawFont(playerid, PrevMod[playerid][17], TEXT_DRAW_FONT_MODEL_PREVIEW);
    PlayerTextDrawSetProportional(playerid, PrevMod[playerid][17], false);
    PlayerTextDrawSetPreviewModel(playerid, PrevMod[playerid][17], 1546);
    PlayerTextDrawSetPreviewRot(playerid, PrevMod[playerid][17], 0.000, 0.000, 0.000, 1.200);
    PlayerTextDrawSetPreviewVehicleColours(playerid, PrevMod[playerid][17], 0, 0);

    PrevMod[playerid][18] = CreatePlayerTextDraw(playerid, 234.000, 311.000, "_");
    PlayerTextDrawTextSize(playerid, PrevMod[playerid][18], 47.000, 50.000);
    PlayerTextDrawAlignment(playerid, PrevMod[playerid][18], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, PrevMod[playerid][18], -1);
    PlayerTextDrawSetShadow(playerid, PrevMod[playerid][18], 0);
    PlayerTextDrawSetOutline(playerid, PrevMod[playerid][18], 0);
    PlayerTextDrawBackgroundColour(playerid, PrevMod[playerid][18], 0);
    PlayerTextDrawFont(playerid, PrevMod[playerid][18], TEXT_DRAW_FONT_MODEL_PREVIEW);
    PlayerTextDrawSetProportional(playerid, PrevMod[playerid][18], false);
    PlayerTextDrawSetPreviewModel(playerid, PrevMod[playerid][18], 1546);
    PlayerTextDrawSetPreviewRot(playerid, PrevMod[playerid][18], 0.000, 0.000, 0.000, 1.200);
    PlayerTextDrawSetPreviewVehicleColours(playerid, PrevMod[playerid][18], 0, 0);

    PrevMod[playerid][19] = CreatePlayerTextDraw(playerid, 280.000, 311.000, "_");
    PlayerTextDrawTextSize(playerid, PrevMod[playerid][19], 47.000, 50.000);
    PlayerTextDrawAlignment(playerid, PrevMod[playerid][19], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, PrevMod[playerid][19], -1);
    PlayerTextDrawSetShadow(playerid, PrevMod[playerid][19], 0);
    PlayerTextDrawSetOutline(playerid, PrevMod[playerid][19], 0);
    PlayerTextDrawBackgroundColour(playerid, PrevMod[playerid][19], 0);
    PlayerTextDrawFont(playerid, PrevMod[playerid][19], TEXT_DRAW_FONT_MODEL_PREVIEW);
    PlayerTextDrawSetProportional(playerid, PrevMod[playerid][19], false);
    PlayerTextDrawSetPreviewModel(playerid, PrevMod[playerid][19], 1546);
    PlayerTextDrawSetPreviewRot(playerid, PrevMod[playerid][19], 0.000, 0.000, 0.000, 1.200);
    PlayerTextDrawSetPreviewVehicleColours(playerid, PrevMod[playerid][19], 0, 0);

    QuantityInv[playerid][0] = CreatePlayerTextDraw(playerid, 142.000, 146.000, "5X");
    PlayerTextDrawLetterSize(playerid, QuantityInv[playerid][0], 0.118, 1.097);
    PlayerTextDrawTextSize(playerid, QuantityInv[playerid][0], 99.000, 30.000);
    PlayerTextDrawAlignment(playerid, QuantityInv[playerid][0], TEXT_DRAW_ALIGN_RIGHT);
    PlayerTextDrawColour(playerid, QuantityInv[playerid][0], -1);
    PlayerTextDrawSetShadow(playerid, QuantityInv[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, QuantityInv[playerid][0], 0);
    PlayerTextDrawBackgroundColour(playerid, QuantityInv[playerid][0], 150);
    PlayerTextDrawFont(playerid, QuantityInv[playerid][0], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, QuantityInv[playerid][0], true);

    QuantityInv[playerid][1] = CreatePlayerTextDraw(playerid, 188.000, 146.000, "5X");
    PlayerTextDrawLetterSize(playerid, QuantityInv[playerid][1], 0.118, 1.097);
    PlayerTextDrawTextSize(playerid, QuantityInv[playerid][1], 99.000, 30.000);
    PlayerTextDrawAlignment(playerid, QuantityInv[playerid][1], TEXT_DRAW_ALIGN_RIGHT);
    PlayerTextDrawColour(playerid, QuantityInv[playerid][1], -1);
    PlayerTextDrawSetShadow(playerid, QuantityInv[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, QuantityInv[playerid][1], 0);
    PlayerTextDrawBackgroundColour(playerid, QuantityInv[playerid][1], 150);
    PlayerTextDrawFont(playerid, QuantityInv[playerid][1], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, QuantityInv[playerid][1], true);

    QuantityInv[playerid][2] = CreatePlayerTextDraw(playerid, 235.000, 146.000, "5X");
    PlayerTextDrawLetterSize(playerid, QuantityInv[playerid][2], 0.118, 1.097);
    PlayerTextDrawTextSize(playerid, QuantityInv[playerid][2], 99.000, 30.000);
    PlayerTextDrawAlignment(playerid, QuantityInv[playerid][2], TEXT_DRAW_ALIGN_RIGHT);
    PlayerTextDrawColour(playerid, QuantityInv[playerid][2], -1);
    PlayerTextDrawSetShadow(playerid, QuantityInv[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, QuantityInv[playerid][2], 0);
    PlayerTextDrawBackgroundColour(playerid, QuantityInv[playerid][2], 150);
    PlayerTextDrawFont(playerid, QuantityInv[playerid][2], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, QuantityInv[playerid][2], true);

    QuantityInv[playerid][3] = CreatePlayerTextDraw(playerid, 280.000, 146.000, "5X");
    PlayerTextDrawLetterSize(playerid, QuantityInv[playerid][3], 0.118, 1.097);
    PlayerTextDrawTextSize(playerid, QuantityInv[playerid][3], 99.000, 30.000);
    PlayerTextDrawAlignment(playerid, QuantityInv[playerid][3], TEXT_DRAW_ALIGN_RIGHT);
    PlayerTextDrawColour(playerid, QuantityInv[playerid][3], -1);
    PlayerTextDrawSetShadow(playerid, QuantityInv[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, QuantityInv[playerid][3], 0);
    PlayerTextDrawBackgroundColour(playerid, QuantityInv[playerid][3], 150);
    PlayerTextDrawFont(playerid, QuantityInv[playerid][3], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, QuantityInv[playerid][3], true);

    QuantityInv[playerid][4] = CreatePlayerTextDraw(playerid, 326.000, 146.000, "5X");
    PlayerTextDrawLetterSize(playerid, QuantityInv[playerid][4], 0.118, 1.097);
    PlayerTextDrawTextSize(playerid, QuantityInv[playerid][4], 99.000, 30.000);
    PlayerTextDrawAlignment(playerid, QuantityInv[playerid][4], TEXT_DRAW_ALIGN_RIGHT);
    PlayerTextDrawColour(playerid, QuantityInv[playerid][4], -1);
    PlayerTextDrawSetShadow(playerid, QuantityInv[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, QuantityInv[playerid][4], 0);
    PlayerTextDrawBackgroundColour(playerid, QuantityInv[playerid][4], 150);
    PlayerTextDrawFont(playerid, QuantityInv[playerid][4], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, QuantityInv[playerid][4], true);

    QuantityInv[playerid][5] = CreatePlayerTextDraw(playerid, 142.000, 229.000, "5X");
    PlayerTextDrawLetterSize(playerid, QuantityInv[playerid][5], 0.118, 1.097);
    PlayerTextDrawTextSize(playerid, QuantityInv[playerid][5], 99.000, 30.000);
    PlayerTextDrawAlignment(playerid, QuantityInv[playerid][5], TEXT_DRAW_ALIGN_RIGHT);
    PlayerTextDrawColour(playerid, QuantityInv[playerid][5], -1);
    PlayerTextDrawSetShadow(playerid, QuantityInv[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, QuantityInv[playerid][5], 0);
    PlayerTextDrawBackgroundColour(playerid, QuantityInv[playerid][5], 150);
    PlayerTextDrawFont(playerid, QuantityInv[playerid][5], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, QuantityInv[playerid][5], true);

    QuantityInv[playerid][6] = CreatePlayerTextDraw(playerid, 189.000, 229.000, "5X");
    PlayerTextDrawLetterSize(playerid, QuantityInv[playerid][6], 0.118, 1.097);
    PlayerTextDrawTextSize(playerid, QuantityInv[playerid][6], 99.000, 30.000);
    PlayerTextDrawAlignment(playerid, QuantityInv[playerid][6], TEXT_DRAW_ALIGN_RIGHT);
    PlayerTextDrawColour(playerid, QuantityInv[playerid][6], -1);
    PlayerTextDrawSetShadow(playerid, QuantityInv[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, QuantityInv[playerid][6], 0);
    PlayerTextDrawBackgroundColour(playerid, QuantityInv[playerid][6], 150);
    PlayerTextDrawFont(playerid, QuantityInv[playerid][6], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, QuantityInv[playerid][6], true);

    QuantityInv[playerid][7] = CreatePlayerTextDraw(playerid, 235.000, 229.000, "5X");
    PlayerTextDrawLetterSize(playerid, QuantityInv[playerid][7], 0.118, 1.097);
    PlayerTextDrawTextSize(playerid, QuantityInv[playerid][7], 99.000, 30.000);
    PlayerTextDrawAlignment(playerid, QuantityInv[playerid][7], TEXT_DRAW_ALIGN_RIGHT);
    PlayerTextDrawColour(playerid, QuantityInv[playerid][7], -1);
    PlayerTextDrawSetShadow(playerid, QuantityInv[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, QuantityInv[playerid][7], 0);
    PlayerTextDrawBackgroundColour(playerid, QuantityInv[playerid][7], 150);
    PlayerTextDrawFont(playerid, QuantityInv[playerid][7], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, QuantityInv[playerid][7], true);

    QuantityInv[playerid][8] = CreatePlayerTextDraw(playerid, 281.000, 229.000, "5X");
    PlayerTextDrawLetterSize(playerid, QuantityInv[playerid][8], 0.118, 1.097);
    PlayerTextDrawTextSize(playerid, QuantityInv[playerid][8], 99.000, 30.000);
    PlayerTextDrawAlignment(playerid, QuantityInv[playerid][8], TEXT_DRAW_ALIGN_RIGHT);
    PlayerTextDrawColour(playerid, QuantityInv[playerid][8], -1);
    PlayerTextDrawSetShadow(playerid, QuantityInv[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, QuantityInv[playerid][8], 0);
    PlayerTextDrawBackgroundColour(playerid, QuantityInv[playerid][8], 150);
    PlayerTextDrawFont(playerid, QuantityInv[playerid][8], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, QuantityInv[playerid][8], true);

    QuantityInv[playerid][9] = CreatePlayerTextDraw(playerid, 326.000, 229.000, "5X");
    PlayerTextDrawLetterSize(playerid, QuantityInv[playerid][9], 0.118, 1.097);
    PlayerTextDrawTextSize(playerid, QuantityInv[playerid][9], 99.000, 30.000);
    PlayerTextDrawAlignment(playerid, QuantityInv[playerid][9], TEXT_DRAW_ALIGN_RIGHT);
    PlayerTextDrawColour(playerid, QuantityInv[playerid][9], -1);
    PlayerTextDrawSetShadow(playerid, QuantityInv[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, QuantityInv[playerid][9], 0);
    PlayerTextDrawBackgroundColour(playerid, QuantityInv[playerid][9], 150);
    PlayerTextDrawFont(playerid, QuantityInv[playerid][9], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, QuantityInv[playerid][9], true);

    QuantityInv[playerid][10] = CreatePlayerTextDraw(playerid, 142.000, 273.000, "5X");
    PlayerTextDrawLetterSize(playerid, QuantityInv[playerid][10], 0.118, 1.097);
    PlayerTextDrawTextSize(playerid, QuantityInv[playerid][10], 99.000, 30.000);
    PlayerTextDrawAlignment(playerid, QuantityInv[playerid][10], TEXT_DRAW_ALIGN_RIGHT);
    PlayerTextDrawColour(playerid, QuantityInv[playerid][10], -1);
    PlayerTextDrawSetShadow(playerid, QuantityInv[playerid][10], 0);
    PlayerTextDrawSetOutline(playerid, QuantityInv[playerid][10], 0);
    PlayerTextDrawBackgroundColour(playerid, QuantityInv[playerid][10], 150);
    PlayerTextDrawFont(playerid, QuantityInv[playerid][10], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, QuantityInv[playerid][10], true);

    QuantityInv[playerid][11] = CreatePlayerTextDraw(playerid, 189.000, 273.000, "5X");
    PlayerTextDrawLetterSize(playerid, QuantityInv[playerid][11], 0.118, 1.097);
    PlayerTextDrawTextSize(playerid, QuantityInv[playerid][11], 99.000, 30.000);
    PlayerTextDrawAlignment(playerid, QuantityInv[playerid][11], TEXT_DRAW_ALIGN_RIGHT);
    PlayerTextDrawColour(playerid, QuantityInv[playerid][11], -1);
    PlayerTextDrawSetShadow(playerid, QuantityInv[playerid][11], 0);
    PlayerTextDrawSetOutline(playerid, QuantityInv[playerid][11], 0);
    PlayerTextDrawBackgroundColour(playerid, QuantityInv[playerid][11], 150);
    PlayerTextDrawFont(playerid, QuantityInv[playerid][11], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, QuantityInv[playerid][11], true);

    QuantityInv[playerid][12] = CreatePlayerTextDraw(playerid, 235.000, 273.000, "5X");
    PlayerTextDrawLetterSize(playerid, QuantityInv[playerid][12], 0.118, 1.097);
    PlayerTextDrawTextSize(playerid, QuantityInv[playerid][12], 99.000, 30.000);
    PlayerTextDrawAlignment(playerid, QuantityInv[playerid][12], TEXT_DRAW_ALIGN_RIGHT);
    PlayerTextDrawColour(playerid, QuantityInv[playerid][12], -1);
    PlayerTextDrawSetShadow(playerid, QuantityInv[playerid][12], 0);
    PlayerTextDrawSetOutline(playerid, QuantityInv[playerid][12], 0);
    PlayerTextDrawBackgroundColour(playerid, QuantityInv[playerid][12], 150);
    PlayerTextDrawFont(playerid, QuantityInv[playerid][12], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, QuantityInv[playerid][12], true);

    QuantityInv[playerid][13] = CreatePlayerTextDraw(playerid, 281.000, 273.000, "5X");
    PlayerTextDrawLetterSize(playerid, QuantityInv[playerid][13], 0.118, 1.097);
    PlayerTextDrawTextSize(playerid, QuantityInv[playerid][13], 99.000, 30.000);
    PlayerTextDrawAlignment(playerid, QuantityInv[playerid][13], TEXT_DRAW_ALIGN_RIGHT);
    PlayerTextDrawColour(playerid, QuantityInv[playerid][13], -1);
    PlayerTextDrawSetShadow(playerid, QuantityInv[playerid][13], 0);
    PlayerTextDrawSetOutline(playerid, QuantityInv[playerid][13], 0);
    PlayerTextDrawBackgroundColour(playerid, QuantityInv[playerid][13], 150);
    PlayerTextDrawFont(playerid, QuantityInv[playerid][13], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, QuantityInv[playerid][13], true);

    QuantityInv[playerid][14] = CreatePlayerTextDraw(playerid, 327.000, 273.000, "5X");
    PlayerTextDrawLetterSize(playerid, QuantityInv[playerid][14], 0.118, 1.097);
    PlayerTextDrawTextSize(playerid, QuantityInv[playerid][14], 99.000, 30.000);
    PlayerTextDrawAlignment(playerid, QuantityInv[playerid][14], TEXT_DRAW_ALIGN_RIGHT);
    PlayerTextDrawColour(playerid, QuantityInv[playerid][14], -1);
    PlayerTextDrawSetShadow(playerid, QuantityInv[playerid][14], 0);
    PlayerTextDrawSetOutline(playerid, QuantityInv[playerid][14], 0);
    PlayerTextDrawBackgroundColour(playerid, QuantityInv[playerid][14], 150);
    PlayerTextDrawFont(playerid, QuantityInv[playerid][14], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, QuantityInv[playerid][14], true);

    QuantityInv[playerid][15] = CreatePlayerTextDraw(playerid, 142.000, 317.000, "5X");
    PlayerTextDrawLetterSize(playerid, QuantityInv[playerid][15], 0.118, 1.097);
    PlayerTextDrawTextSize(playerid, QuantityInv[playerid][15], 99.000, 30.000);
    PlayerTextDrawAlignment(playerid, QuantityInv[playerid][15], TEXT_DRAW_ALIGN_RIGHT);
    PlayerTextDrawColour(playerid, QuantityInv[playerid][15], -1);
    PlayerTextDrawSetShadow(playerid, QuantityInv[playerid][15], 0);
    PlayerTextDrawSetOutline(playerid, QuantityInv[playerid][15], 0);
    PlayerTextDrawBackgroundColour(playerid, QuantityInv[playerid][15], 150);
    PlayerTextDrawFont(playerid, QuantityInv[playerid][15], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, QuantityInv[playerid][15], true);

    QuantityInv[playerid][16] = CreatePlayerTextDraw(playerid, 189.000, 317.000, "5X");
    PlayerTextDrawLetterSize(playerid, QuantityInv[playerid][16], 0.118, 1.097);
    PlayerTextDrawTextSize(playerid, QuantityInv[playerid][16], 99.000, 30.000);
    PlayerTextDrawAlignment(playerid, QuantityInv[playerid][16], TEXT_DRAW_ALIGN_RIGHT);
    PlayerTextDrawColour(playerid, QuantityInv[playerid][16], -1);
    PlayerTextDrawSetShadow(playerid, QuantityInv[playerid][16], 0);
    PlayerTextDrawSetOutline(playerid, QuantityInv[playerid][16], 0);
    PlayerTextDrawBackgroundColour(playerid, QuantityInv[playerid][16], 150);
    PlayerTextDrawFont(playerid, QuantityInv[playerid][16], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, QuantityInv[playerid][16], true);

    QuantityInv[playerid][17] = CreatePlayerTextDraw(playerid, 235.000, 317.000, "5X");
    PlayerTextDrawLetterSize(playerid, QuantityInv[playerid][17], 0.118, 1.097);
    PlayerTextDrawTextSize(playerid, QuantityInv[playerid][17], 99.000, 30.000);
    PlayerTextDrawAlignment(playerid, QuantityInv[playerid][17], TEXT_DRAW_ALIGN_RIGHT);
    PlayerTextDrawColour(playerid, QuantityInv[playerid][17], -1);
    PlayerTextDrawSetShadow(playerid, QuantityInv[playerid][17], 0);
    PlayerTextDrawSetOutline(playerid, QuantityInv[playerid][17], 0);
    PlayerTextDrawBackgroundColour(playerid, QuantityInv[playerid][17], 150);
    PlayerTextDrawFont(playerid, QuantityInv[playerid][17], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, QuantityInv[playerid][17], true);

    QuantityInv[playerid][18] = CreatePlayerTextDraw(playerid, 281.000, 317.000, "5X");
    PlayerTextDrawLetterSize(playerid, QuantityInv[playerid][18], 0.118, 1.097);
    PlayerTextDrawTextSize(playerid, QuantityInv[playerid][18], 99.000, 30.000);
    PlayerTextDrawAlignment(playerid, QuantityInv[playerid][18], TEXT_DRAW_ALIGN_RIGHT);
    PlayerTextDrawColour(playerid, QuantityInv[playerid][18], -1);
    PlayerTextDrawSetShadow(playerid, QuantityInv[playerid][18], 0);
    PlayerTextDrawSetOutline(playerid, QuantityInv[playerid][18], 0);
    PlayerTextDrawBackgroundColour(playerid, QuantityInv[playerid][18], 150);
    PlayerTextDrawFont(playerid, QuantityInv[playerid][18], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, QuantityInv[playerid][18], true);

    QuantityInv[playerid][19] = CreatePlayerTextDraw(playerid, 327.000, 317.000, "5X");
    PlayerTextDrawLetterSize(playerid, QuantityInv[playerid][19], 0.118, 1.097);
    PlayerTextDrawTextSize(playerid, QuantityInv[playerid][19], 99.000, 30.000);
    PlayerTextDrawAlignment(playerid, QuantityInv[playerid][19], TEXT_DRAW_ALIGN_RIGHT);
    PlayerTextDrawColour(playerid, QuantityInv[playerid][19], -1);
    PlayerTextDrawSetShadow(playerid, QuantityInv[playerid][19], 0);
    PlayerTextDrawSetOutline(playerid, QuantityInv[playerid][19], 0);
    PlayerTextDrawBackgroundColour(playerid, QuantityInv[playerid][19], 150);
    PlayerTextDrawFont(playerid, QuantityInv[playerid][19], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, QuantityInv[playerid][19], true);
}

ShowInventoryTD(playerid)
{
    for(new i; i < 19; i ++)
    {
        PlayerTextDrawShow(playerid, InventoryTD[playerid][i]);
    }
    for(new i; i < 20; i ++)
    {
        PlayerTextDrawShow(playerid, BoxInv[playerid][i]);
        PlayerTextDrawColour(playerid, BoxInv[playerid][i], 488581119);
    }
    forex(i, 5)
    {
        PlayerTextDrawShow(playerid, BoxAngka[playerid][i]);
    }
    PlayerInfo[playerid][pAmountInv] = 0;
    PlayerTextDrawSetString(playerid, InventoryTD[playerid][7], "0");
}

stock Inventory_Item_Update(playerid)
{
	Inventory_Set(playerid, "Money", 1212, PlayerInfo[playerid][pCash]);
	Inventory_Set(playerid, "Phone", 18867, PlayerInfo[playerid][pPhone]);
	Inventory_Set(playerid, "Boombox", 2226, PlayerInfo[playerid][pBoombox]);
	Inventory_Set(playerid, "GPS", 18875, PlayerInfo[playerid][pGPS]);
	Inventory_Set(playerid, "Radio", 19942, PlayerInfo[playerid][pWalkieTalkie]);
	Inventory_Set(playerid, "Mask", 19036, PlayerInfo[playerid][pMask]);
	Inventory_Set(playerid, "Mineral Water", 2958, PlayerInfo[playerid][pDrink]);
	Inventory_Set(playerid, "Gascan", 1650, PlayerInfo[playerid][pGasCan]);
	Inventory_Set(playerid, "Biriyani", 2768, PlayerInfo[playerid][pFood]);
	Inventory_Set(playerid, "Rolling Paper", 19873, PlayerInfo[playerid][pEcoin]);
	Inventory_Set(playerid, "Joint", 3027, PlayerInfo[playerid][pJoint]);
	Inventory_Set(playerid, "Meth", 1578, PlayerInfo[playerid][pMeth]);
	Inventory_Set(playerid, "Crack", 1580, PlayerInfo[playerid][pCrack]);
	Inventory_Set(playerid, "Materials", 2041, PlayerInfo[playerid][pMaterials]);
	Inventory_Set(playerid, "Seeds", 1577, PlayerInfo[playerid][pSeeds]);
	Inventory_Set(playerid, "Ephedrine", 1576, PlayerInfo[playerid][pEphedrine]);
	Inventory_Set(playerid, "Painkiller", 1241, PlayerInfo[playerid][pPainkillers]);
	Inventory_Set(playerid, "Aspirin", 2060, PlayerInfo[playerid][pCigars]);
	Inventory_Set(playerid, "Dirty Cash", 1550, PlayerInfo[playerid][pDirtyCash]);
	Inventory_Set(playerid, "Baking Soda", 958, PlayerInfo[playerid][pBakingSoda]);
	Inventory_Set(playerid, "Spraycan", 365, PlayerInfo[playerid][pSpraycans]);
	Inventory_Set(playerid, "Muriatic Acid", 19823, PlayerInfo[playerid][pMuriaticAcid]);
	Inventory_Set(playerid, "Repairkit", 19921, PlayerInfo[playerid][pRepairKit]);
	Inventory_Set(playerid, "Toolkit", 19918, PlayerInfo[playerid][pToolkit]);
	Inventory_Set(playerid, "Weed", 19473, PlayerInfo[playerid][pPot]);
    Inventory_Set(playerid, "Milk", 19570, PlayerInfo[playerid][pMilk]);
}

Inventory_Show(playerid)
{
    if(!IsPlayerConnected(playerid)) return 0;

    ShowInventoryTD(playerid);
    Inventory_Item_Update(playerid);
    AnimNumber[playerid] = (AnimIndex[playerid] - 1) * 20;

    new str[120];
    for(new index; index < 20; index ++)
    {
        if(InventoryData[playerid][index + AnimNumber[playerid]][invExists])
        {
            for (new i; i < sizeof(g_aInventoryItems); i ++) if(!strcmp(g_aInventoryItems[i][e_InventoryItem], InventoryData[playerid][index + AnimNumber[playerid]][invItem], true))
            {
                PlayerTextDrawSetPreviewModel(playerid, PrevMod[playerid][index], InventoryData[playerid][index + AnimNumber[playerid]][invModel]);
                PlayerTextDrawShow(playerid, PrevMod[playerid][index]);

                format(str, sizeof(str), "%s", g_aInventoryItems[i][e_InventoryItem]);
                PlayerTextDrawSetString(playerid, NameInv[playerid][index], str);
                PlayerTextDrawShow(playerid, NameInv[playerid][index]);

                format(str, sizeof(str), "%d", 
                    InventoryData[playerid][index + AnimNumber[playerid]][invQuantity]
                );
                PlayerTextDrawSetString(playerid, QuantityInv[playerid][index], str);
                PlayerTextDrawShow(playerid, QuantityInv[playerid][index]);
            }
        }
    }

    format(str, sizeof(str), "%s", PlayerInfo[playerid][pUsername]);
    PlayerTextDrawSetString(playerid, InventoryTD[playerid][10], str);
    PlayerTextDrawShow(playerid, InventoryTD[playerid][10]);

    format(str, sizeof(str), "%.3f/50Kg", PlayerInfo[playerid][pBeratItem]);
    PlayerTextDrawSetString(playerid, InventoryTD[playerid][16], str);
    PlayerTextDrawShow(playerid, InventoryTD[playerid][16]);
    
    SelectTextDraw(playerid, 0x72D172FF);
    return 1;
}

Inventory_Close(playerid)
{
    forex(i, 19)
    {
        PlayerTextDrawHide(playerid, InventoryTD[playerid][i]);
    }
    forex(i, 20)
    {
        PlayerTextDrawHide(playerid, BoxInv[playerid][i]);
        PlayerTextDrawColour(playerid, BoxInv[playerid][i], 488581119);
    }
    forex(i, 5)
    {
        PlayerTextDrawHide(playerid, BoxAngka[playerid][i]);
    }
    forex(i, 20)
    {
        PlayerTextDrawHide(playerid, PrevMod[playerid][i]);
        PlayerTextDrawHide(playerid, NameInv[playerid][i]);
        PlayerTextDrawHide(playerid, QuantityInv[playerid][i]);
    }
    CancelSelectTextDraw(playerid);
    PlayerInfo[playerid][pSelectItem] = -1;
    PlayerInfo[playerid][pAmountInv] = 0;
    return 1;
}

stock SelectItem(playerid, i)
{
    PlayerInfo[playerid][pSelectItem] = i;
    PlayerTextDrawColour(playerid, BoxInv[playerid][i], -190554032);
    PlayerTextDrawShow(playerid, BoxInv[playerid][i]);
    PlayerPlaySound(playerid, 1052, 0, 0, 0);
    return 1;
}

stock UnselectItem(playerid)
{
    if(PlayerInfo[playerid][pSelectItem] != -1)
    {
        PlayerTextDrawHide(playerid, BoxInv[playerid][PlayerInfo[playerid][pSelectItem]]);
        PlayerTextDrawColour(playerid, BoxInv[playerid][PlayerInfo[playerid][pSelectItem]], 488581119);
		PlayerTextDrawShow(playerid, BoxInv[playerid][PlayerInfo[playerid][pSelectItem]]);
    }
    PlayerInfo[playerid][pSelectItem] = -1;
    return 1;
}

stock ItemSwitch(playerid, itemid, slot, old_slot)
{
	//ITEM BARU
	InventoryData[playerid][slot][invExists] = true;
	InventoryData[playerid][slot][invQuantity] = InventoryData[playerid][itemid][invQuantity];
	strpack(InventoryData[playerid][slot][invItem], InventoryData[playerid][itemid][invItem], 32 char);
	InventoryData[playerid][slot][invModel] = InventoryData[playerid][itemid][invModel];
	InventoryData[playerid][slot][invID] = InventoryData[playerid][itemid][invID];

	//ITEM LAMA
	InventoryData[playerid][itemid][invExists] = false;
	InventoryData[playerid][itemid][invModel] = 0;
	InventoryData[playerid][itemid][invQuantity] = 0;
	InventoryData[playerid][itemid][invID] = -1;

	//HIDE OLD ITEM BOX
	PlayerTextDrawHide(playerid, BoxInv[playerid][old_slot]);
	PlayerTextDrawColour(playerid, BoxInv[playerid][old_slot], 488581119);
	PlayerTextDrawShow(playerid, BoxInv[playerid][old_slot]);

	PlayerTextDrawHide(playerid, PrevMod[playerid][old_slot]);
	PlayerTextDrawHide(playerid, NameInv[playerid][old_slot]);
	PlayerTextDrawHide(playerid, QuantityInv[playerid][old_slot]);

	//SHOW THE NEW ITEMBOX
	new 
		str[32],
		string[64];

	PlayerTextDrawHide(playerid, BoxInv[playerid][slot - AnimPlayed[playerid]]);
	PlayerTextDrawShow(playerid, BoxInv[playerid][slot - AnimPlayed[playerid]]);
	
    PlayerTextDrawSetPreviewModel(playerid, PrevMod[playerid][slot - AnimPlayed[playerid]], InventoryData[playerid][slot][invModel]);
	PlayerTextDrawShow(playerid, PrevMod[playerid][slot - AnimPlayed[playerid]]);
	strunpack(string, InventoryData[playerid][slot][invItem]);

	format(str, sizeof(str), "%s", string);
	PlayerTextDrawSetString(playerid, NameInv[playerid][slot - AnimPlayed[playerid]], str);
	PlayerTextDrawShow(playerid, NameInv[playerid][slot - AnimPlayed[playerid]]);

	for (new ai = 0; ai < sizeof(g_aInventoryItems); ai ++) if (!strcmp(g_aInventoryItems[ai][e_InventoryItem], string, true))
	{
		format(str, sizeof(str), "%d", InventoryData[playerid][slot][invQuantity]);
		PlayerTextDrawSetString(playerid, QuantityInv[playerid][slot - AnimPlayed[playerid]], str);
		PlayerTextDrawShow(playerid, QuantityInv[playerid][slot - AnimPlayed[playerid]]);
	}

	PlayerInfo[playerid][pSelectItem] = -1;
	return 1;
}

stock SwitchPageInventory(playerid, page)
{
    new baseindex = (page -1) * 20;
    new str[120];

    // Hide Semua Textdraw
    UnselectItem(playerid);
    for(new i = 0; i < 20; i++)
    {
        PlayerTextDrawHide(playerid, BoxInv[playerid][i]);
        PlayerTextDrawColour(playerid, BoxInv[playerid][i], 488581119);
        PlayerTextDrawShow(playerid, BoxInv[playerid][i]);

        PlayerTextDrawHide(playerid, PrevMod[playerid][i]);
        PlayerTextDrawHide(playerid, NameInv[playerid][i]);
        PlayerTextDrawHide(playerid, QuantityInv[playerid][i]);
    }
    
    for(new iba = 0; iba < 5; iba++)
    {
        PlayerTextDrawHide(playerid, BoxAngka[playerid][iba]);
    }

    PlayerInfo[playerid][pInvPage] = page;

    for(new i = 0; i < 20; i++)
    {
        new index = baseindex + i;
        PlayerInfo[playerid][pInvIndexCount] = index;

        if(InventoryData[playerid][index][invExists])
        {
            for (new id = 0; id < sizeof(g_aInventoryItems); id++)
            {
                if(!strcmp(g_aInventoryItems[id][e_InventoryItem], InventoryData[playerid][index][invItem], true))
                {
                    PlayerTextDrawSetPreviewModel(playerid, PrevMod[playerid][i], InventoryData[playerid][index][invModel]);
                    PlayerTextDrawShow(playerid, PrevMod[playerid][i]);

                    format(str, sizeof(str), "%s", g_aInventoryItems[id][e_InventoryItem], InventoryData[playerid][index][invQuantity]);
                    PlayerTextDrawSetString(playerid, NameInv[playerid][i], str);
                    PlayerTextDrawShow(playerid, NameInv[playerid][i]);

                    format(str, sizeof(str), "%dx (%.1f)", InventoryData[playerid][index][invQuantity], 
                            Float:GetInventoryWeight(g_aInventoryItems[id][e_InventoryItem], InventoryData[playerid][index][invQuantity]));
                    PlayerTextDrawSetString(playerid, QuantityInv[playerid][i], str);
                    PlayerTextDrawShow(playerid, QuantityInv[playerid][i]);
                }
            }
        }
    }
    PlayerInfo[playerid][pInvIndex] = PlayerInfo[playerid][pInvIndexCount];
    return 1;
}