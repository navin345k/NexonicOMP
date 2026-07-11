#define MAX_SHOPITEM 				10

enum E_SHOP
{
	shopExitst,
	shopID,
	shopItem[32 char],
	shopModel,
	shopPrice,
    shopDropIndex
};
new shopData[MAX_PLAYERS][MAX_SHOPITEM][E_SHOP];

new Text: shopTD[2];
new PlayerText: shopName[MAX_PLAYERS];

new PlayerText: shopBox[MAX_PLAYERS][10];
new PlayerText: shopPrev[MAX_PLAYERS][10];
new PlayerText: shopAmount[MAX_PLAYERS][10];
new PlayerText: shopItemName[MAX_PLAYERS][10];

loadShopTD(playerid)
{
    shopName[playerid] = CreatePlayerTextDraw(playerid, 374.000, 113.000, "Shop Name");
    PlayerTextDrawLetterSize(playerid, shopName[playerid], 0.128, 1.299);
    PlayerTextDrawTextSize(playerid, shopName[playerid], 99.000, 30.000);
    PlayerTextDrawAlignment(playerid, shopName[playerid], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopName[playerid], -1);
    PlayerTextDrawSetShadow(playerid, shopName[playerid], 0);
    PlayerTextDrawSetOutline(playerid, shopName[playerid], 0);
    PlayerTextDrawBackgroundColour(playerid, shopName[playerid], 150);
    PlayerTextDrawFont(playerid, shopName[playerid], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, shopName[playerid], true);

    shopBox[playerid][0] = CreatePlayerTextDraw(playerid, 344.000, 146.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, shopBox[playerid][0], 44.000, 42.000);
    PlayerTextDrawAlignment(playerid, shopBox[playerid][0], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopBox[playerid][0], 488581119);
    PlayerTextDrawSetShadow(playerid, shopBox[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, shopBox[playerid][0], 0);
    PlayerTextDrawBackgroundColour(playerid, shopBox[playerid][0], 255);
    PlayerTextDrawFont(playerid, shopBox[playerid][0], TEXT_DRAW_FONT_SPRITE_DRAW);
    PlayerTextDrawSetProportional(playerid, shopBox[playerid][0], true);
    PlayerTextDrawSetSelectable(playerid, shopBox[playerid][0], true);

    shopBox[playerid][1] = CreatePlayerTextDraw(playerid, 390.000, 146.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, shopBox[playerid][1], 44.000, 42.000);
    PlayerTextDrawAlignment(playerid, shopBox[playerid][1], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopBox[playerid][1], 488581119);
    PlayerTextDrawSetShadow(playerid, shopBox[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, shopBox[playerid][1], 0);
    PlayerTextDrawBackgroundColour(playerid, shopBox[playerid][1], 255);
    PlayerTextDrawFont(playerid, shopBox[playerid][1], TEXT_DRAW_FONT_SPRITE_DRAW);
    PlayerTextDrawSetProportional(playerid, shopBox[playerid][1], true);
    PlayerTextDrawSetSelectable(playerid, shopBox[playerid][1], true);

    shopBox[playerid][2] = CreatePlayerTextDraw(playerid, 436.000, 146.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, shopBox[playerid][2], 44.000, 42.000);
    PlayerTextDrawAlignment(playerid, shopBox[playerid][2], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopBox[playerid][2], 488581119);
    PlayerTextDrawSetShadow(playerid, shopBox[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, shopBox[playerid][2], 0);
    PlayerTextDrawBackgroundColour(playerid, shopBox[playerid][2], 255);
    PlayerTextDrawFont(playerid, shopBox[playerid][2], TEXT_DRAW_FONT_SPRITE_DRAW);
    PlayerTextDrawSetProportional(playerid, shopBox[playerid][2], true);
    PlayerTextDrawSetSelectable(playerid, shopBox[playerid][2], true);

    shopBox[playerid][3] = CreatePlayerTextDraw(playerid, 482.000, 146.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, shopBox[playerid][3], 44.000, 42.000);
    PlayerTextDrawAlignment(playerid, shopBox[playerid][3], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopBox[playerid][3], 488581119);
    PlayerTextDrawSetShadow(playerid, shopBox[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, shopBox[playerid][3], 0);
    PlayerTextDrawBackgroundColour(playerid, shopBox[playerid][3], 255);
    PlayerTextDrawFont(playerid, shopBox[playerid][3], TEXT_DRAW_FONT_SPRITE_DRAW);
    PlayerTextDrawSetProportional(playerid, shopBox[playerid][3], true);
    PlayerTextDrawSetSelectable(playerid, shopBox[playerid][3], true);

    shopBox[playerid][4] = CreatePlayerTextDraw(playerid, 528.000, 146.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, shopBox[playerid][4], 44.000, 42.000);
    PlayerTextDrawAlignment(playerid, shopBox[playerid][4], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopBox[playerid][4], 488581119);
    PlayerTextDrawSetShadow(playerid, shopBox[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, shopBox[playerid][4], 0);
    PlayerTextDrawBackgroundColour(playerid, shopBox[playerid][4], 255);
    PlayerTextDrawFont(playerid, shopBox[playerid][4], TEXT_DRAW_FONT_SPRITE_DRAW);
    PlayerTextDrawSetProportional(playerid, shopBox[playerid][4], true);
    PlayerTextDrawSetSelectable(playerid, shopBox[playerid][4], true);

    shopBox[playerid][5] = CreatePlayerTextDraw(playerid, 344.000, 190.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, shopBox[playerid][5], 44.000, 42.000);
    PlayerTextDrawAlignment(playerid, shopBox[playerid][5], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopBox[playerid][5], 488581119);
    PlayerTextDrawSetShadow(playerid, shopBox[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, shopBox[playerid][5], 0);
    PlayerTextDrawBackgroundColour(playerid, shopBox[playerid][5], 255);
    PlayerTextDrawFont(playerid, shopBox[playerid][5], TEXT_DRAW_FONT_SPRITE_DRAW);
    PlayerTextDrawSetProportional(playerid, shopBox[playerid][5], true);
    PlayerTextDrawSetSelectable(playerid, shopBox[playerid][5], true);

    shopBox[playerid][6] = CreatePlayerTextDraw(playerid, 390.000, 190.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, shopBox[playerid][6], 44.000, 42.000);
    PlayerTextDrawAlignment(playerid, shopBox[playerid][6], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopBox[playerid][6], 488581119);
    PlayerTextDrawSetShadow(playerid, shopBox[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, shopBox[playerid][6], 0);
    PlayerTextDrawBackgroundColour(playerid, shopBox[playerid][6], 255);
    PlayerTextDrawFont(playerid, shopBox[playerid][6], TEXT_DRAW_FONT_SPRITE_DRAW);
    PlayerTextDrawSetProportional(playerid, shopBox[playerid][6], true);
    PlayerTextDrawSetSelectable(playerid, shopBox[playerid][6], true);

    shopBox[playerid][7] = CreatePlayerTextDraw(playerid, 436.000, 190.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, shopBox[playerid][7], 44.000, 42.000);
    PlayerTextDrawAlignment(playerid, shopBox[playerid][7], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopBox[playerid][7], 488581119);
    PlayerTextDrawSetShadow(playerid, shopBox[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, shopBox[playerid][7], 0);
    PlayerTextDrawBackgroundColour(playerid, shopBox[playerid][7], 255);
    PlayerTextDrawFont(playerid, shopBox[playerid][7], TEXT_DRAW_FONT_SPRITE_DRAW);
    PlayerTextDrawSetProportional(playerid, shopBox[playerid][7], true);
    PlayerTextDrawSetSelectable(playerid, shopBox[playerid][7], true);

    shopBox[playerid][8] = CreatePlayerTextDraw(playerid, 482.000, 190.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, shopBox[playerid][8], 44.000, 42.000);
    PlayerTextDrawAlignment(playerid, shopBox[playerid][8], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopBox[playerid][8], 488581119);
    PlayerTextDrawSetShadow(playerid, shopBox[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, shopBox[playerid][8], 0);
    PlayerTextDrawBackgroundColour(playerid, shopBox[playerid][8], 255);
    PlayerTextDrawFont(playerid, shopBox[playerid][8], TEXT_DRAW_FONT_SPRITE_DRAW);
    PlayerTextDrawSetProportional(playerid, shopBox[playerid][8], true);
    PlayerTextDrawSetSelectable(playerid, shopBox[playerid][8], true);

    shopBox[playerid][9] = CreatePlayerTextDraw(playerid, 528.000, 190.000, "LD_BUM:blkdot");
    PlayerTextDrawTextSize(playerid, shopBox[playerid][9], 44.000, 42.000);
    PlayerTextDrawAlignment(playerid, shopBox[playerid][9], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopBox[playerid][9], 488581119);
    PlayerTextDrawSetShadow(playerid, shopBox[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, shopBox[playerid][9], 0);
    PlayerTextDrawBackgroundColour(playerid, shopBox[playerid][9], 255);
    PlayerTextDrawFont(playerid, shopBox[playerid][9], TEXT_DRAW_FONT_SPRITE_DRAW);
    PlayerTextDrawSetProportional(playerid, shopBox[playerid][9], true);
    PlayerTextDrawSetSelectable(playerid, shopBox[playerid][9], true);

    shopPrev[playerid][0] = CreatePlayerTextDraw(playerid, 343.000, 142.000, "_");
    PlayerTextDrawTextSize(playerid, shopPrev[playerid][0], 47.000, 50.000);
    PlayerTextDrawAlignment(playerid, shopPrev[playerid][0], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopPrev[playerid][0], -1);
    PlayerTextDrawSetShadow(playerid, shopPrev[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, shopPrev[playerid][0], 0);
    PlayerTextDrawBackgroundColour(playerid, shopPrev[playerid][0], 0);
    PlayerTextDrawFont(playerid, shopPrev[playerid][0], TEXT_DRAW_FONT_MODEL_PREVIEW);
    PlayerTextDrawSetProportional(playerid, shopPrev[playerid][0], false);
    PlayerTextDrawSetPreviewModel(playerid, shopPrev[playerid][0], 1546);
    PlayerTextDrawSetPreviewRot(playerid, shopPrev[playerid][0], 0.000, 0.000, 0.000, 1.200);
    PlayerTextDrawSetPreviewVehicleColours(playerid, shopPrev[playerid][0], 0, 0);

    shopPrev[playerid][1] = CreatePlayerTextDraw(playerid, 387.000, 143.000, "_");
    PlayerTextDrawTextSize(playerid, shopPrev[playerid][1], 47.000, 50.000);
    PlayerTextDrawAlignment(playerid, shopPrev[playerid][1], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopPrev[playerid][1], -1);
    PlayerTextDrawSetShadow(playerid, shopPrev[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, shopPrev[playerid][1], 0);
    PlayerTextDrawBackgroundColour(playerid, shopPrev[playerid][1], 0);
    PlayerTextDrawFont(playerid, shopPrev[playerid][1], TEXT_DRAW_FONT_MODEL_PREVIEW);
    PlayerTextDrawSetProportional(playerid, shopPrev[playerid][1], false);
    PlayerTextDrawSetPreviewModel(playerid, shopPrev[playerid][1], 1546);
    PlayerTextDrawSetPreviewRot(playerid, shopPrev[playerid][1], 0.000, 0.000, 0.000, 1.200);
    PlayerTextDrawSetPreviewVehicleColours(playerid, shopPrev[playerid][1], 0, 0);

    shopPrev[playerid][2] = CreatePlayerTextDraw(playerid, 432.000, 142.000, "_");
    PlayerTextDrawTextSize(playerid, shopPrev[playerid][2], 47.000, 50.000);
    PlayerTextDrawAlignment(playerid, shopPrev[playerid][2], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopPrev[playerid][2], -1);
    PlayerTextDrawSetShadow(playerid, shopPrev[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, shopPrev[playerid][2], 0);
    PlayerTextDrawBackgroundColour(playerid, shopPrev[playerid][2], 0);
    PlayerTextDrawFont(playerid, shopPrev[playerid][2], TEXT_DRAW_FONT_MODEL_PREVIEW);
    PlayerTextDrawSetProportional(playerid, shopPrev[playerid][2], false);
    PlayerTextDrawSetPreviewModel(playerid, shopPrev[playerid][2], 1546);
    PlayerTextDrawSetPreviewRot(playerid, shopPrev[playerid][2], 0.000, 0.000, 0.000, 1.200);
    PlayerTextDrawSetPreviewVehicleColours(playerid, shopPrev[playerid][2], 0, 0);

    shopPrev[playerid][3] = CreatePlayerTextDraw(playerid, 478.000, 142.000, "_");
    PlayerTextDrawTextSize(playerid, shopPrev[playerid][3], 47.000, 50.000);
    PlayerTextDrawAlignment(playerid, shopPrev[playerid][3], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopPrev[playerid][3], -1);
    PlayerTextDrawSetShadow(playerid, shopPrev[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, shopPrev[playerid][3], 0);
    PlayerTextDrawBackgroundColour(playerid, shopPrev[playerid][3], 0);
    PlayerTextDrawFont(playerid, shopPrev[playerid][3], TEXT_DRAW_FONT_MODEL_PREVIEW);
    PlayerTextDrawSetProportional(playerid, shopPrev[playerid][3], false);
    PlayerTextDrawSetPreviewModel(playerid, shopPrev[playerid][3], 1546);
    PlayerTextDrawSetPreviewRot(playerid, shopPrev[playerid][3], 0.000, 0.000, 0.000, 1.200);
    PlayerTextDrawSetPreviewVehicleColours(playerid, shopPrev[playerid][3], 0, 0);

    shopPrev[playerid][4] = CreatePlayerTextDraw(playerid, 524.000, 142.000, "_");
    PlayerTextDrawTextSize(playerid, shopPrev[playerid][4], 47.000, 50.000);
    PlayerTextDrawAlignment(playerid, shopPrev[playerid][4], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopPrev[playerid][4], -1);
    PlayerTextDrawSetShadow(playerid, shopPrev[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, shopPrev[playerid][4], 0);
    PlayerTextDrawBackgroundColour(playerid, shopPrev[playerid][4], 0);
    PlayerTextDrawFont(playerid, shopPrev[playerid][4], TEXT_DRAW_FONT_MODEL_PREVIEW);
    PlayerTextDrawSetProportional(playerid, shopPrev[playerid][4], false);
    PlayerTextDrawSetPreviewModel(playerid, shopPrev[playerid][4], 1546);
    PlayerTextDrawSetPreviewRot(playerid, shopPrev[playerid][4], 0.000, 0.000, 0.000, 1.200);
    PlayerTextDrawSetPreviewVehicleColours(playerid, shopPrev[playerid][4], 0, 0);

    shopPrev[playerid][5] = CreatePlayerTextDraw(playerid, 340.000, 185.000, "_");
    PlayerTextDrawTextSize(playerid, shopPrev[playerid][5], 47.000, 50.000);
    PlayerTextDrawAlignment(playerid, shopPrev[playerid][5], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopPrev[playerid][5], -1);
    PlayerTextDrawSetShadow(playerid, shopPrev[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, shopPrev[playerid][5], 0);
    PlayerTextDrawBackgroundColour(playerid, shopPrev[playerid][5], 0);
    PlayerTextDrawFont(playerid, shopPrev[playerid][5], TEXT_DRAW_FONT_MODEL_PREVIEW);
    PlayerTextDrawSetProportional(playerid, shopPrev[playerid][5], false);
    PlayerTextDrawSetPreviewModel(playerid, shopPrev[playerid][5], 1546);
    PlayerTextDrawSetPreviewRot(playerid, shopPrev[playerid][5], 0.000, 0.000, 0.000, 1.200);
    PlayerTextDrawSetPreviewVehicleColours(playerid, shopPrev[playerid][5], 0, 0);

    shopPrev[playerid][6] = CreatePlayerTextDraw(playerid, 386.000, 185.000, "_");
    PlayerTextDrawTextSize(playerid, shopPrev[playerid][6], 47.000, 50.000);
    PlayerTextDrawAlignment(playerid, shopPrev[playerid][6], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopPrev[playerid][6], -1);
    PlayerTextDrawSetShadow(playerid, shopPrev[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, shopPrev[playerid][6], 0);
    PlayerTextDrawBackgroundColour(playerid, shopPrev[playerid][6], 0);
    PlayerTextDrawFont(playerid, shopPrev[playerid][6], TEXT_DRAW_FONT_MODEL_PREVIEW);
    PlayerTextDrawSetProportional(playerid, shopPrev[playerid][6], false);
    PlayerTextDrawSetPreviewModel(playerid, shopPrev[playerid][6], 1546);
    PlayerTextDrawSetPreviewRot(playerid, shopPrev[playerid][6], 0.000, 0.000, 0.000, 1.200);
    PlayerTextDrawSetPreviewVehicleColours(playerid, shopPrev[playerid][6], 0, 0);

    shopPrev[playerid][7] = CreatePlayerTextDraw(playerid, 432.000, 185.000, "_");
    PlayerTextDrawTextSize(playerid, shopPrev[playerid][7], 47.000, 50.000);
    PlayerTextDrawAlignment(playerid, shopPrev[playerid][7], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopPrev[playerid][7], -1);
    PlayerTextDrawSetShadow(playerid, shopPrev[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, shopPrev[playerid][7], 0);
    PlayerTextDrawBackgroundColour(playerid, shopPrev[playerid][7], 0);
    PlayerTextDrawFont(playerid, shopPrev[playerid][7], TEXT_DRAW_FONT_MODEL_PREVIEW);
    PlayerTextDrawSetProportional(playerid, shopPrev[playerid][7], false);
    PlayerTextDrawSetPreviewModel(playerid, shopPrev[playerid][7], 1546);
    PlayerTextDrawSetPreviewRot(playerid, shopPrev[playerid][7], 0.000, 0.000, 0.000, 1.200);
    PlayerTextDrawSetPreviewVehicleColours(playerid, shopPrev[playerid][7], 0, 0);

    shopPrev[playerid][8] = CreatePlayerTextDraw(playerid, 478.000, 185.000, "_");
    PlayerTextDrawTextSize(playerid, shopPrev[playerid][8], 47.000, 50.000);
    PlayerTextDrawAlignment(playerid, shopPrev[playerid][8], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopPrev[playerid][8], -1);
    PlayerTextDrawSetShadow(playerid, shopPrev[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, shopPrev[playerid][8], 0);
    PlayerTextDrawBackgroundColour(playerid, shopPrev[playerid][8], 0);
    PlayerTextDrawFont(playerid, shopPrev[playerid][8], TEXT_DRAW_FONT_MODEL_PREVIEW);
    PlayerTextDrawSetProportional(playerid, shopPrev[playerid][8], false);
    PlayerTextDrawSetPreviewModel(playerid, shopPrev[playerid][8], 1546);
    PlayerTextDrawSetPreviewRot(playerid, shopPrev[playerid][8], 0.000, 0.000, 0.000, 1.200);
    PlayerTextDrawSetPreviewVehicleColours(playerid, shopPrev[playerid][8], 0, 0);

    shopPrev[playerid][9] = CreatePlayerTextDraw(playerid, 524.000, 185.000, "_");
    PlayerTextDrawTextSize(playerid, shopPrev[playerid][9], 47.000, 50.000);
    PlayerTextDrawAlignment(playerid, shopPrev[playerid][9], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopPrev[playerid][9], -1);
    PlayerTextDrawSetShadow(playerid, shopPrev[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, shopPrev[playerid][9], 0);
    PlayerTextDrawBackgroundColour(playerid, shopPrev[playerid][9], 0);
    PlayerTextDrawFont(playerid, shopPrev[playerid][9], TEXT_DRAW_FONT_MODEL_PREVIEW);
    PlayerTextDrawSetProportional(playerid, shopPrev[playerid][9], false);
    PlayerTextDrawSetPreviewModel(playerid, shopPrev[playerid][9], 1546);
    PlayerTextDrawSetPreviewRot(playerid, shopPrev[playerid][9], 0.000, 0.000, 0.000, 1.200);
    PlayerTextDrawSetPreviewVehicleColours(playerid, shopPrev[playerid][9], 0, 0);

    shopAmount[playerid][0] = CreatePlayerTextDraw(playerid, 346.000, 147.000, "$111");
    PlayerTextDrawLetterSize(playerid, shopAmount[playerid][0], 0.128, 1.097);
    PlayerTextDrawTextSize(playerid, shopAmount[playerid][0], 100.000, 30.000);
    PlayerTextDrawAlignment(playerid, shopAmount[playerid][0], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopAmount[playerid][0], 16711935);
    PlayerTextDrawSetShadow(playerid, shopAmount[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, shopAmount[playerid][0], 0);
    PlayerTextDrawBackgroundColour(playerid, shopAmount[playerid][0], 150);
    PlayerTextDrawFont(playerid, shopAmount[playerid][0], TEXT_DRAW_FONT_1);
    PlayerTextDrawSetProportional(playerid, shopAmount[playerid][0], true);

    shopAmount[playerid][1] = CreatePlayerTextDraw(playerid, 392.000, 147.000, "$111");
    PlayerTextDrawLetterSize(playerid, shopAmount[playerid][1], 0.128, 1.097);
    PlayerTextDrawTextSize(playerid, shopAmount[playerid][1], 100.000, 30.000);
    PlayerTextDrawAlignment(playerid, shopAmount[playerid][1], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopAmount[playerid][1], 16711935);
    PlayerTextDrawSetShadow(playerid, shopAmount[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, shopAmount[playerid][1], 0);
    PlayerTextDrawBackgroundColour(playerid, shopAmount[playerid][1], 150);
    PlayerTextDrawFont(playerid, shopAmount[playerid][1], TEXT_DRAW_FONT_1);
    PlayerTextDrawSetProportional(playerid, shopAmount[playerid][1], true);

    shopAmount[playerid][2] = CreatePlayerTextDraw(playerid, 438.000, 147.000, "$111");
    PlayerTextDrawLetterSize(playerid, shopAmount[playerid][2], 0.128, 1.097);
    PlayerTextDrawTextSize(playerid, shopAmount[playerid][2], 100.000, 30.000);
    PlayerTextDrawAlignment(playerid, shopAmount[playerid][2], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopAmount[playerid][2], 16711935);
    PlayerTextDrawSetShadow(playerid, shopAmount[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, shopAmount[playerid][2], 0);
    PlayerTextDrawBackgroundColour(playerid, shopAmount[playerid][2], 150);
    PlayerTextDrawFont(playerid, shopAmount[playerid][2], TEXT_DRAW_FONT_1);
    PlayerTextDrawSetProportional(playerid, shopAmount[playerid][2], true);

    shopAmount[playerid][3] = CreatePlayerTextDraw(playerid, 484.000, 147.000, "$111");
    PlayerTextDrawLetterSize(playerid, shopAmount[playerid][3], 0.128, 1.097);
    PlayerTextDrawTextSize(playerid, shopAmount[playerid][3], 100.000, 30.000);
    PlayerTextDrawAlignment(playerid, shopAmount[playerid][3], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopAmount[playerid][3], 16711935);
    PlayerTextDrawSetShadow(playerid, shopAmount[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, shopAmount[playerid][3], 0);
    PlayerTextDrawBackgroundColour(playerid, shopAmount[playerid][3], 150);
    PlayerTextDrawFont(playerid, shopAmount[playerid][3], TEXT_DRAW_FONT_1);
    PlayerTextDrawSetProportional(playerid, shopAmount[playerid][3], true);

    shopAmount[playerid][4] = CreatePlayerTextDraw(playerid, 530.000, 147.000, "$111");
    PlayerTextDrawLetterSize(playerid, shopAmount[playerid][4], 0.128, 1.097);
    PlayerTextDrawTextSize(playerid, shopAmount[playerid][4], 100.000, 30.000);
    PlayerTextDrawAlignment(playerid, shopAmount[playerid][4], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopAmount[playerid][4], 16711935);
    PlayerTextDrawSetShadow(playerid, shopAmount[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, shopAmount[playerid][4], 0);
    PlayerTextDrawBackgroundColour(playerid, shopAmount[playerid][4], 150);
    PlayerTextDrawFont(playerid, shopAmount[playerid][4], TEXT_DRAW_FONT_1);
    PlayerTextDrawSetProportional(playerid, shopAmount[playerid][4], true);

    shopAmount[playerid][5] = CreatePlayerTextDraw(playerid, 346.000, 191.000, "$111");
    PlayerTextDrawLetterSize(playerid, shopAmount[playerid][5], 0.128, 1.097);
    PlayerTextDrawTextSize(playerid, shopAmount[playerid][5], 100.000, 30.000);
    PlayerTextDrawAlignment(playerid, shopAmount[playerid][5], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopAmount[playerid][5], 16711935);
    PlayerTextDrawSetShadow(playerid, shopAmount[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, shopAmount[playerid][5], 0);
    PlayerTextDrawBackgroundColour(playerid, shopAmount[playerid][5], 150);
    PlayerTextDrawFont(playerid, shopAmount[playerid][5], TEXT_DRAW_FONT_1);
    PlayerTextDrawSetProportional(playerid, shopAmount[playerid][5], true);

    shopAmount[playerid][6] = CreatePlayerTextDraw(playerid, 392.000, 191.000, "$111");
    PlayerTextDrawLetterSize(playerid, shopAmount[playerid][6], 0.128, 1.097);
    PlayerTextDrawTextSize(playerid, shopAmount[playerid][6], 100.000, 30.000);
    PlayerTextDrawAlignment(playerid, shopAmount[playerid][6], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopAmount[playerid][6], 16711935);
    PlayerTextDrawSetShadow(playerid, shopAmount[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, shopAmount[playerid][6], 0);
    PlayerTextDrawBackgroundColour(playerid, shopAmount[playerid][6], 150);
    PlayerTextDrawFont(playerid, shopAmount[playerid][6], TEXT_DRAW_FONT_1);
    PlayerTextDrawSetProportional(playerid, shopAmount[playerid][6], true);

    shopAmount[playerid][7] = CreatePlayerTextDraw(playerid, 438.000, 191.000, "$111");
    PlayerTextDrawLetterSize(playerid, shopAmount[playerid][7], 0.128, 1.097);
    PlayerTextDrawTextSize(playerid, shopAmount[playerid][7], 100.000, 30.000);
    PlayerTextDrawAlignment(playerid, shopAmount[playerid][7], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopAmount[playerid][7], 16711935);
    PlayerTextDrawSetShadow(playerid, shopAmount[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, shopAmount[playerid][7], 0);
    PlayerTextDrawBackgroundColour(playerid, shopAmount[playerid][7], 150);
    PlayerTextDrawFont(playerid, shopAmount[playerid][7], TEXT_DRAW_FONT_1);
    PlayerTextDrawSetProportional(playerid, shopAmount[playerid][7], true);

    shopAmount[playerid][8] = CreatePlayerTextDraw(playerid, 484.000, 191.000, "$111");
    PlayerTextDrawLetterSize(playerid, shopAmount[playerid][8], 0.128, 1.097);
    PlayerTextDrawTextSize(playerid, shopAmount[playerid][8], 100.000, 30.000);
    PlayerTextDrawAlignment(playerid, shopAmount[playerid][8], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopAmount[playerid][8], 16711935);
    PlayerTextDrawSetShadow(playerid, shopAmount[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, shopAmount[playerid][8], 0);
    PlayerTextDrawBackgroundColour(playerid, shopAmount[playerid][8], 150);
    PlayerTextDrawFont(playerid, shopAmount[playerid][8], TEXT_DRAW_FONT_1);
    PlayerTextDrawSetProportional(playerid, shopAmount[playerid][8], true);

    shopAmount[playerid][9] = CreatePlayerTextDraw(playerid, 530.000, 191.000, "$111");
    PlayerTextDrawLetterSize(playerid, shopAmount[playerid][9], 0.128, 1.097);
    PlayerTextDrawTextSize(playerid, shopAmount[playerid][9], 100.000, 30.000);
    PlayerTextDrawAlignment(playerid, shopAmount[playerid][9], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopAmount[playerid][9], 16711935);
    PlayerTextDrawSetShadow(playerid, shopAmount[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, shopAmount[playerid][9], 0);
    PlayerTextDrawBackgroundColour(playerid, shopAmount[playerid][9], 150);
    PlayerTextDrawFont(playerid, shopAmount[playerid][9], TEXT_DRAW_FONT_1);
    PlayerTextDrawSetProportional(playerid, shopAmount[playerid][9], true);

    shopItemName[playerid][0] = CreatePlayerTextDraw(playerid, 345.000, 178.000, "starling");
    PlayerTextDrawLetterSize(playerid, shopItemName[playerid][0], 0.118, 0.999);
    PlayerTextDrawTextSize(playerid, shopItemName[playerid][0], 525.000, 30.000);
    PlayerTextDrawAlignment(playerid, shopItemName[playerid][0], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopItemName[playerid][0], -1);
    PlayerTextDrawSetShadow(playerid, shopItemName[playerid][0], 0);
    PlayerTextDrawSetOutline(playerid, shopItemName[playerid][0], 0);
    PlayerTextDrawBackgroundColour(playerid, shopItemName[playerid][0], 150);
    PlayerTextDrawFont(playerid, shopItemName[playerid][0], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, shopItemName[playerid][0], true);

    shopItemName[playerid][1] = CreatePlayerTextDraw(playerid, 391.000, 178.000, "starling");
    PlayerTextDrawLetterSize(playerid, shopItemName[playerid][1], 0.118, 0.999);
    PlayerTextDrawTextSize(playerid, shopItemName[playerid][1], 525.000, 30.000);
    PlayerTextDrawAlignment(playerid, shopItemName[playerid][1], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopItemName[playerid][1], -1);
    PlayerTextDrawSetShadow(playerid, shopItemName[playerid][1], 0);
    PlayerTextDrawSetOutline(playerid, shopItemName[playerid][1], 0);
    PlayerTextDrawBackgroundColour(playerid, shopItemName[playerid][1], 150);
    PlayerTextDrawFont(playerid, shopItemName[playerid][1], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, shopItemName[playerid][1], true);

    shopItemName[playerid][2] = CreatePlayerTextDraw(playerid, 437.000, 178.000, "STARLING");
    PlayerTextDrawLetterSize(playerid, shopItemName[playerid][2], 0.118, 0.999);
    PlayerTextDrawTextSize(playerid, shopItemName[playerid][2], 868.000, 30.000);
    PlayerTextDrawAlignment(playerid, shopItemName[playerid][2], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopItemName[playerid][2], -1);
    PlayerTextDrawSetShadow(playerid, shopItemName[playerid][2], 0);
    PlayerTextDrawSetOutline(playerid, shopItemName[playerid][2], 0);
    PlayerTextDrawBackgroundColour(playerid, shopItemName[playerid][2], 150);
    PlayerTextDrawFont(playerid, shopItemName[playerid][2], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, shopItemName[playerid][2], true);

    shopItemName[playerid][3] = CreatePlayerTextDraw(playerid, 483.000, 178.000, "STARLING");
    PlayerTextDrawLetterSize(playerid, shopItemName[playerid][3], 0.118, 0.999);
    PlayerTextDrawTextSize(playerid, shopItemName[playerid][3], 525.000, 30.000);
    PlayerTextDrawAlignment(playerid, shopItemName[playerid][3], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopItemName[playerid][3], -1);
    PlayerTextDrawSetShadow(playerid, shopItemName[playerid][3], 0);
    PlayerTextDrawSetOutline(playerid, shopItemName[playerid][3], 0);
    PlayerTextDrawBackgroundColour(playerid, shopItemName[playerid][3], 150);
    PlayerTextDrawFont(playerid, shopItemName[playerid][3], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, shopItemName[playerid][3], true);

    shopItemName[playerid][4] = CreatePlayerTextDraw(playerid, 529.000, 178.000, "starling");
    PlayerTextDrawLetterSize(playerid, shopItemName[playerid][4], 0.118, 0.999);
    PlayerTextDrawTextSize(playerid, shopItemName[playerid][4], 525.000, 30.000);
    PlayerTextDrawAlignment(playerid, shopItemName[playerid][4], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopItemName[playerid][4], -1);
    PlayerTextDrawSetShadow(playerid, shopItemName[playerid][4], 0);
    PlayerTextDrawSetOutline(playerid, shopItemName[playerid][4], 0);
    PlayerTextDrawBackgroundColour(playerid, shopItemName[playerid][4], 150);
    PlayerTextDrawFont(playerid, shopItemName[playerid][4], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, shopItemName[playerid][4], true);

    shopItemName[playerid][5] = CreatePlayerTextDraw(playerid, 345.000, 221.000, "STARLING");
    PlayerTextDrawLetterSize(playerid, shopItemName[playerid][5], 0.118, 0.999);
    PlayerTextDrawTextSize(playerid, shopItemName[playerid][5], 813.000, 30.000);
    PlayerTextDrawAlignment(playerid, shopItemName[playerid][5], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopItemName[playerid][5], -1);
    PlayerTextDrawSetShadow(playerid, shopItemName[playerid][5], 0);
    PlayerTextDrawSetOutline(playerid, shopItemName[playerid][5], 0);
    PlayerTextDrawBackgroundColour(playerid, shopItemName[playerid][5], 150);
    PlayerTextDrawFont(playerid, shopItemName[playerid][5], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, shopItemName[playerid][5], true);

    shopItemName[playerid][6] = CreatePlayerTextDraw(playerid, 391.000, 221.000, "starling");
    PlayerTextDrawLetterSize(playerid, shopItemName[playerid][6], 0.118, 0.999);
    PlayerTextDrawTextSize(playerid, shopItemName[playerid][6], 525.000, 30.000);
    PlayerTextDrawAlignment(playerid, shopItemName[playerid][6], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopItemName[playerid][6], -1);
    PlayerTextDrawSetShadow(playerid, shopItemName[playerid][6], 0);
    PlayerTextDrawSetOutline(playerid, shopItemName[playerid][6], 0);
    PlayerTextDrawBackgroundColour(playerid, shopItemName[playerid][6], 150);
    PlayerTextDrawFont(playerid, shopItemName[playerid][6], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, shopItemName[playerid][6], true);

    shopItemName[playerid][7] = CreatePlayerTextDraw(playerid, 437.000, 221.000, "starling");
    PlayerTextDrawLetterSize(playerid, shopItemName[playerid][7], 0.118, 0.999);
    PlayerTextDrawTextSize(playerid, shopItemName[playerid][7], 525.000, 30.000);
    PlayerTextDrawAlignment(playerid, shopItemName[playerid][7], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopItemName[playerid][7], -1);
    PlayerTextDrawSetShadow(playerid, shopItemName[playerid][7], 0);
    PlayerTextDrawSetOutline(playerid, shopItemName[playerid][7], 0);
    PlayerTextDrawBackgroundColour(playerid, shopItemName[playerid][7], 150);
    PlayerTextDrawFont(playerid, shopItemName[playerid][7], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, shopItemName[playerid][7], true);

    shopItemName[playerid][8] = CreatePlayerTextDraw(playerid, 483.000, 221.000, "starling");
    PlayerTextDrawLetterSize(playerid, shopItemName[playerid][8], 0.118, 0.999);
    PlayerTextDrawTextSize(playerid, shopItemName[playerid][8], 525.000, 30.000);
    PlayerTextDrawAlignment(playerid, shopItemName[playerid][8], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopItemName[playerid][8], -1);
    PlayerTextDrawSetShadow(playerid, shopItemName[playerid][8], 0);
    PlayerTextDrawSetOutline(playerid, shopItemName[playerid][8], 0);
    PlayerTextDrawBackgroundColour(playerid, shopItemName[playerid][8], 150);
    PlayerTextDrawFont(playerid, shopItemName[playerid][8], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, shopItemName[playerid][8], true);

    shopItemName[playerid][9] = CreatePlayerTextDraw(playerid, 529.000, 221.000, "starling");
    PlayerTextDrawLetterSize(playerid, shopItemName[playerid][9], 0.118, 0.999);
    PlayerTextDrawTextSize(playerid, shopItemName[playerid][9], 525.000, 30.000);
    PlayerTextDrawAlignment(playerid, shopItemName[playerid][9], TEXT_DRAW_ALIGN_LEFT);
    PlayerTextDrawColour(playerid, shopItemName[playerid][9], -1);
    PlayerTextDrawSetShadow(playerid, shopItemName[playerid][9], 0);
    PlayerTextDrawSetOutline(playerid, shopItemName[playerid][9], 0);
    PlayerTextDrawBackgroundColour(playerid, shopItemName[playerid][9], 150);
    PlayerTextDrawFont(playerid, shopItemName[playerid][9], TEXT_DRAW_FONT_2);
    PlayerTextDrawSetProportional(playerid, shopItemName[playerid][9], true);
    return 1;
}

function shopClear(playerid)
{
	forex(i, MAX_SHOPITEM)
	{
	    if (shopData[playerid][i][shopExitst])
	    {
	        shopData[playerid][i][shopExitst] = false;
            shopData[playerid][i][shopDropIndex] = -1;
	        shopData[playerid][i][shopModel] = 0;
	        shopData[playerid][i][shopPrice] = 0;
		}
	}
    return 1;
}

shopItemID(playerid, const item[])
{
	for(new i = 0; i < MAX_SHOPITEM; i++)
	{
	    if (!shopData[playerid][i][shopExitst])
	        continue;

		if (!strcmp(shopData[playerid][i][shopItem], item)) return i;
	}
	return -1;
}

shopFreeID(playerid)
{
	if (shopItems(playerid) >= MAX_SHOPITEM)
		return -1;

	for(new i = 0; i < MAX_SHOPITEM; i++)
	{
	    if (!shopData[playerid][i][shopExitst])
	        return i;
	}
	return -1;
}

shopItems(playerid)
{
    new count;

    for(new i = 0; i < MAX_SHOPITEM; i++) if (shopData[playerid][i][shopExitst]) 
	{
        count++;
	}
	return count;
}

function shopOpen(playerid, const shopname[])
{
	if(!IsPlayerConnected(playerid))
		return 0;

	if(PlayerInfo[playerid][pInjured] != 0)
		return 0;

    new item[128], str[128];
    format(str, sizeof(str), "%s", shopname);
    PlayerTextDrawSetString(playerid, shopName[playerid], str);
    PlayerTextDrawShow(playerid, shopName[playerid]);
    SetPVarInt(playerid, "openShop", 1);
    
    forex(i, 2)
	{
	    TextDrawShowForPlayer(playerid, shopTD[i]);
	}
    SelectTextDraw(playerid, COLOR_GREY);
    
    for (new i = 0; i < MAX_SHOPITEM; i ++) 
    {
        PlayerTextDrawShow(playerid, shopBox[playerid][i]);
        
        if(shopData[playerid][i][shopExitst])
        {
            //PENYESUAIAN ROTATE ITEMS
            switch(shopData[playerid][i][shopModel])
            {
                case 18867: PlayerTextDrawSetPreviewRot(playerid, shopPrev[playerid][i], -254.000000, 0.000000, 0.000000, 2.500);
                case 16776: PlayerTextDrawSetPreviewRot(playerid, shopPrev[playerid][i], 0.000000, 0.000000, -85.000000, 2.500);
                case 1581: PlayerTextDrawSetPreviewRot(playerid, shopPrev[playerid][i], 0.000000, 0.000000, -180.000000, 2.500);
                case 19580: PlayerTextDrawSetPreviewRot(playerid, shopPrev[playerid][i], -95.000000, 0.000000, 1.000000, 2.500);
                case 2703: PlayerTextDrawSetPreviewRot(playerid, shopPrev[playerid][i], -80.000, 0.000, 0.000, 2.500);
                case 19896: PlayerTextDrawSetPreviewRot(playerid, shopPrev[playerid][i], -50.000, 0.000, -10.000, 2.500);
                case 18875: PlayerTextDrawSetPreviewRot(playerid, shopPrev[playerid][i], 95.000, 180.000, 0.000, 2.500);
                case 19878: PlayerTextDrawSetPreviewRot(playerid, shopPrev[playerid][i], 163.000, 210.000, -50.000, 2.500);
                case 19883: PlayerTextDrawSetPreviewRot(playerid, shopPrev[playerid][i], 163.000, 210.000, -50.000, 2.500);
                case 11736: PlayerTextDrawSetPreviewRot(playerid, shopPrev[playerid][i], 120.000, -30.000, 0.000, 2.500);
                default: PlayerTextDrawSetPreviewRot(playerid, shopPrev[playerid][i], 0.000, 0.000, 0.000, 2.500);
            }
            
            PlayerTextDrawSetPreviewModel(playerid, shopPrev[playerid][i], shopData[playerid][i][shopModel]);
            PlayerTextDrawShow(playerid, shopPrev[playerid][i]);

            strunpack(item, shopData[playerid][i][shopItem]);

            format(str, sizeof(str), "%s", item);
            PlayerTextDrawSetString(playerid, shopItemName[playerid][i], str);
            PlayerTextDrawShow(playerid, shopItemName[playerid][i]);

            format(str, sizeof(str), "%s", shopData[playerid][i][shopPrice]);
            PlayerTextDrawSetString(playerid, shopAmount[playerid][i], str);
            PlayerTextDrawShow(playerid, shopAmount[playerid][i]);
		}
	}
	return 1;
}

shopClose(playerid)
{
    shopClear(playerid);
    PlayerTextDrawHide(playerid, shopName[playerid]);
	forex(i, 2)
	{
	    TextDrawHideForPlayer(playerid, shopTD[i]);
	}
	forex(i, MAX_SHOPITEM)
	{
	    PlayerTextDrawHide(playerid, shopPrev[playerid][i]);
	    PlayerTextDrawHide(playerid, shopItemName[playerid][i]);
	    PlayerTextDrawHide(playerid, shopAmount[playerid][i]);
	    PlayerTextDrawHide(playerid, shopBox[playerid][i]);
		PlayerTextDrawColour(playerid, shopBox[playerid][i], 150);
	}
	CancelSelectTextDraw(playerid);
	PlayerInfo[playerid][pSelectShop] = -1;

    SetPVarInt(playerid, "openShop", 0);
    SetPVarInt(playerid, "openDrop", 0);
	return 1;
}

shopAdd(playerid, const item[], price = 1)
{
	new
		itemid = shopItemID(playerid, item);

	if (itemid == -1)
	{
		itemid = shopFreeID(playerid);
		if (itemid != -1)
		{
			shopData[playerid][itemid][shopExitst] = true;
	        shopData[playerid][itemid][shopPrice] = price;
	        strpack(shopData[playerid][itemid][shopItem], item, 32 char);

			for (new id = 0; id < sizeof(g_aInventoryItems); id ++) if(!strcmp(g_aInventoryItems[id][e_InventoryItem], item, true))
			{
				shopData[playerid][itemid][shopModel] = g_aInventoryItems[id][e_InventoryModel];
			}

            shopData[playerid][itemid][shopDropIndex] = -1;
			return itemid;
		}
		return -1;
	}
	return itemid;
}

shopSelect(playerid, row)
{
    PlayerInfo[playerid][pSelectShop] = row;
    PlayerTextDrawHide(playerid,shopBox[playerid][row]);
	PlayerTextDrawColour(playerid, shopBox[playerid][row], -190554032);
	PlayerTextDrawShow(playerid,shopBox[playerid][row]);
}

shopUnSelect(playerid)
{	
	if(PlayerInfo[playerid][pSelectShop] != -1)
	{
		new row = PlayerInfo[playerid][pSelectShop];
		PlayerTextDrawHide(playerid, shopBox[playerid][row]);
		PlayerTextDrawColour(playerid, shopBox[playerid][row], 488581119);
		PlayerTextDrawShow(playerid, shopBox[playerid][row]);
	}
	PlayerInfo[playerid][pSelectShop] = -1;
}

freshShop(playerid, itemid)
{
    //HIDE OLD ITEM BOX
	PlayerTextDrawColour(playerid, shopBox[playerid][itemid], 488581119);
	PlayerTextDrawShow(playerid, shopBox[playerid][itemid]);
	PlayerTextDrawHide(playerid, shopPrev[playerid][itemid]);
	PlayerTextDrawHide(playerid, shopItemName[playerid][itemid]);
	PlayerTextDrawHide(playerid, shopAmount[playerid][itemid]);
    return 1;
}