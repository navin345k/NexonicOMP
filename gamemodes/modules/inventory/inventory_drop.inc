#define MAX_LISTED_ITEMS 8
#define MAX_DROPPED_ITEMS 200

new NearestItems[MAX_PLAYERS][MAX_LISTED_ITEMS];
enum droppedItems
{
    droppedID,
	droppedItem[32],
	droppedPlayer[24],
	droppedModel,
	droppedQuantity,
	Float:droppedPos[3],
	droppedInt,
	droppedWorld,
	STREAMER_TAG_OBJECT:droppedObject,
	STREAMER_TAG_3D_TEXT_LABEL:droppedText3D
};

new DroppedItems[MAX_DROPPED_ITEMS][droppedItems];

Float: GetItemWeight(const itemname[], quantity)
{
	new Float: weight = 0.0;

    if(!strcmp(itemname, "Money"))
    {
        weight = quantity*0.01;
    }
    else if(!strcmp(itemname, "Currency"))
    {
        weight = quantity*0.01;
    }
    else if(!strcmp(itemname, "Phone"))
    {
        weight = quantity*0.030;
    }
    else if(!strcmp(itemname, "Bandage"))
    {
        weight = quantity*0.01;
    }
    else if(!strcmp(itemname, "Radio"))
    {
        weight = quantity*0.01;
    }
    else if(!strcmp(itemname, "Mask"))
    {
        weight = quantity*0.030;
    }
    else if(!strcmp(itemname, "Mineral Water"))
    {
        weight = quantity*0.01;
    }
    else if(!strcmp(itemname, "Gascan"))
    {
        weight = quantity*0.01;
    }
    else if(!strcmp(itemname, "Biriyani"))
    {
        weight = quantity*0.01;
    }
    else if(!strcmp(itemname, "Rolling Paper"))
    {
        weight = quantity*0.25;
    }
    else if(!strcmp(itemname, "Joint"))
    {
        weight = quantity*0.10;
    }
    else if(!strcmp(itemname, "Meth"))
    {
       weight = quantity*0.25;
    }
    else if(!strcmp(itemname, "Crack"))
    {
        weight = quantity*0.15;
    }
    else if(!strcmp(itemname, "Materials"))
    {
        weight = quantity*0.06;
    }
    else if(!strcmp(itemname, "Seeds"))
    {
        weight = quantity*0.05;
    }
    else if(!strcmp(itemname, "Ephedrine"))
    {
        weight = quantity*0.08;
    }
    else if(!strcmp(itemname, "Painkiller"))
    {
        weight = quantity*0.02;
    }
    else if(!strcmp(itemname, "Aspirin"))
    {
        weight = quantity*0.01;
    }
    else if(!strcmp(itemname, "Dirty Cash"))
    {
       weight = quantity*0.04;
    }
    else if(!strcmp(itemname, "Medkit"))
    {
        weight = quantity*0.04;
    }
    else if(!strcmp(itemname, "Baking Soda"))
    {
        weight = quantity*0.02;
    }
    else if(!strcmp(itemname, "Spraycan"))
    {
        weight = quantity*0.05;
    }
    else if(!strcmp(itemname, "Muriatic Acid"))
    {
        weight = quantity*0.01;
    }
    else if(!strcmp(itemname, "Repairkit"))
    {
        weight = quantity*0.15;
    }
    else if(!strcmp(itemname, "Toolkit"))
    {
        weight = quantity*0.10;
    }
    else if(!strcmp(itemname, "Weed"))
    {
        weight = quantity*0.05;
    }
    else if(!strcmp(itemname, "GPS"))
    {
        weight = quantity*0.005;
    }
    else if(!strcmp(itemname, "Milk"))
    {
        weight = quantity*0.01;
    }
	
	return weight;
}

stock Item_Delete(itemid)
{
    if (itemid != -1 && DroppedItems[itemid][droppedModel])
    {
        if (IsValidDynamicObject(DroppedItems[itemid][droppedObject]))
        {
            DestroyDynamicObject(DroppedItems[itemid][droppedObject]);
        }

        if (IsValidDynamic3DTextLabel(DroppedItems[itemid][droppedText3D]))
        {
            DestroyDynamic3DTextLabel(DroppedItems[itemid][droppedText3D]);
        }

        new query[64];
        mysql_format(connectionID, query, sizeof(query), "DELETE FROM `dropped` WHERE `ID` = '%d'", DroppedItems[itemid][droppedID]);
	    mysql_tquery(connectionID, query);


        DroppedItems[itemid][droppedModel]     = 0;
        DroppedItems[itemid][droppedQuantity]  = 0;
        DroppedItems[itemid][droppedPos][0]    = 0.0;
        DroppedItems[itemid][droppedPos][1]    = 0.0;
        DroppedItems[itemid][droppedPos][2]    = 0.0;
        DroppedItems[itemid][droppedInt]       = 0;
        DroppedItems[itemid][droppedWorld]     = 0;
        DroppedItems[itemid][droppedObject]    = INVALID_OBJECT_ID;
        DroppedItems[itemid][droppedText3D]    = Text3D:INVALID_3DTEXT_ID;
        DroppedItems[itemid][droppedID]        = -1;
    }
    return 1;
}

stock Item_Nearest(playerid)
{
    for (new i = 0; i != MAX_DROPPED_ITEMS; i ++) if (DroppedItems[i][droppedModel] && IsPlayerInRangeOfPoint(playerid, 1.5, DroppedItems[i][droppedPos][0], DroppedItems[i][droppedPos][1], DroppedItems[i][droppedPos][2]))
	{
	    if (GetPlayerInterior(playerid) == DroppedItems[i][droppedInt] && GetPlayerVirtualWorld(playerid) == DroppedItems[i][droppedWorld])
	        return i;
	}
	return -1;
}

stock PickupItem(playerid, itemid)
{
	if (itemid != -1 && DroppedItems[itemid][droppedModel])
	{
	    Inventory_Add(playerid, DroppedItems[itemid][droppedItem], DroppedItems[itemid][droppedModel], DroppedItems[itemid][droppedQuantity]);
		new str[32];
		format(str, sizeof str, "%s", DroppedItems[itemid][droppedItem]);
		new msg[32];
        format(msg, sizeof(msg), "Received %d", DroppedItems[itemid][droppedQuantity]);


        ShowItemBox(playerid, str, msg, DroppedItems[itemid][droppedModel], 5);

	    // if (id == -1)
	    //     return ErrorMsg(playerid, "Your Inventory is Full!");

	    Item_Delete(itemid);
	}
	return 1;
}

forward Dropped_Load();
public Dropped_Load()
{
	static
	    rows,
	    fields;

	cache_get_data(rows, fields, connectionID);
 	if(rows)
  	{
    	forex(i, rows)
		{
            DroppedItems[i][droppedID] = cache_get_field_content_int(i, "ID");
            cache_get_field_content(i, "itemName", DroppedItems[i][droppedItem], connectionID, MAX_PLAYER_NAME);
            cache_get_field_content(i, "itemPlayer", DroppedItems[i][droppedPlayer], connectionID, MAX_PLAYER_NAME);
            DroppedItems[i][droppedModel] = cache_get_field_content_int(i, "itemModel");
            DroppedItems[i][droppedQuantity] = cache_get_field_content_int(i, "itemQuantity");
            DroppedItems[i][droppedPos][0] = cache_get_field_content_float(i, "itemX");
            DroppedItems[i][droppedPos][1] = cache_get_field_content_float(i, "itemY");
            DroppedItems[i][droppedPos][2] = cache_get_field_content_float(i, "itemZ");
            DroppedItems[i][droppedInt] = cache_get_field_content_int(i, "itemInt");
            DroppedItems[i][droppedWorld] = cache_get_field_content_int(i, "itemWorld");

            new shstr[255];
            format(shstr, sizeof(shstr), ""RED"%s | %d | (%.3f kg)", DroppedItems[i][droppedItem], DroppedItems[i][droppedQuantity], GetItemWeight(DroppedItems[i][droppedItem], DroppedItems[i][droppedQuantity]));
			DroppedItems[i][droppedObject] = CreateDynamicObject(2663, DroppedItems[i][droppedPos][0], DroppedItems[i][droppedPos][1], DroppedItems[i][droppedPos][2], 0.0, 0.0, 0.0, DroppedItems[i][droppedWorld], DroppedItems[i][droppedInt]);
			DroppedItems[i][droppedText3D] = CreateDynamic3DTextLabel(shstr, -1, DroppedItems[i][droppedPos][0], DroppedItems[i][droppedPos][1], DroppedItems[i][droppedPos][2]+0.60, 10.0, INVALID_PLAYER_ID, INVALID_VEHICLE_ID, 1, DroppedItems[i][droppedWorld], DroppedItems[i][droppedInt]);
		}
	}
    printf("[Drop Item] Total number of Dropped Items loaded %d.", rows);
	return 1;
}

DropItem(item[], player[], model, quantity, Float:x, Float:y, Float:z, interior, world)
{
	new
	    query[300], string[256];

	forex(i, MAX_DROPPED_ITEMS) if (!DroppedItems[i][droppedModel])
	{
	    format(DroppedItems[i][droppedItem], 32, item);
	    format(DroppedItems[i][droppedPlayer], 24, player);

		DroppedItems[i][droppedModel] = model;
		DroppedItems[i][droppedQuantity] = quantity;
		DroppedItems[i][droppedPos][0] = x;
		DroppedItems[i][droppedPos][1] = y;
		DroppedItems[i][droppedPos][2] = z;

		DroppedItems[i][droppedInt] = interior;
		DroppedItems[i][droppedWorld] = world;

		DroppedItems[i][droppedObject] = CreateDynamicObject(2663, x, y, z + 0.2, 0.0, 0.0, 0.0, world, interior);

		strunpack(string, DroppedItems[i][droppedItem]);

		new Float:berat = GetItemWeight(string, quantity);
		new label[128];
        format(label, sizeof(label), ""RED"%s | %dx | (%.3f kg)", string, quantity, berat);

        DroppedItems[i][droppedText3D] = CreateDynamic3DTextLabel(
            label,
            -1,
            x, y, z + 0.60,
            10.0,
            INVALID_PLAYER_ID,
            INVALID_VEHICLE_ID,
            1,
            world,
            interior
        );
 		format(query, sizeof(query), "INSERT INTO `dropped` (`itemName`, `itemPlayer`, `itemModel`, `itemQuantity`, `itemX`, `itemY`, `itemZ`, `itemInt`, `itemWorld`) VALUES('%s', '%s', '%d', '%d', '%.4f', '%.4f', '%.4f', '%d', '%d')", item, player, model, quantity, x, y, z, interior, world);
		mysql_tquery(connectionID, query, "OnDroppedItem", "d", i);
		return i;
	}
	return -1;
}

FUNC::OnDroppedItem(itemid)
{
	if (itemid == -1 || !DroppedItems[itemid][droppedModel])
	    return 0;

	DroppedItems[itemid][droppedID] = cache_insert_id();
	return 1;
}

DropPlayerItem(playerid, itemid, quantity = 1)
{
	if (itemid == -1 || !InventoryData[playerid][itemid][invExists])
	    return 0;

    new
		Float:x,
  		Float:y,
    	Float:z,
		Float:angle,
		string[32],
        str[100];

	strunpack(string, InventoryData[playerid][itemid][invItem]);

    if(Inventory_Count(playerid, string) < PlayerInfo[playerid][pAmountInv]) return SendClientMessage(playerid, COLOR_WHITE, sprintf("You dont have that many %s!", string));
	GetPlayerPos(playerid, x, y, z);
	GetPlayerFacingAngle(playerid, angle);

	DropItem(string, ReturnName(playerid), InventoryData[playerid][itemid][invModel], quantity, x, y, z - 0.9, GetPlayerInterior(playerid), GetPlayerVirtualWorld(playerid));
 	new model = InventoryData[playerid][itemid][invModel];
    if(model == 1212)
    {
        if(quantity > PlayerInfo[playerid][pCash])
        return SendClientMessage(playerid, COLOR_WHITE, "You don't have that quantity");

        format(str, sizeof(str), "REMOVED_%dx", quantity);
        ShowItemBox1(playerid, string, str, model, 2);

        Inventory_Remove(playerid, string, quantity);
        
        PlayerInfo[playerid][pCash] -= quantity;
        
        mysql_format(connectionID, queryBuffer, sizeof(queryBuffer), "UPDATE users SET cash = %i WHERE uid = %i", PlayerInfo[playerid][pCash], PlayerInfo[playerid][pID]);
        mysql_tquery(connectionID, queryBuffer);
    }
    if(model == 2958)
    {
        if(quantity > PlayerInfo[playerid][pDrink])
        return SendClientMessage(playerid, COLOR_WHITE, "You don't have that quantity");

        format(str, sizeof(str), "REMOVED_%dx", quantity);
        ShowItemBox1(playerid, string, str, model, 2);

        Inventory_Remove(playerid, string, quantity);
        
        PlayerInfo[playerid][pDrink] -= quantity;
        
        mysql_format(connectionID, queryBuffer, sizeof(queryBuffer), "UPDATE users SET drink = %i WHERE uid = %i", PlayerInfo[playerid][pDrink], PlayerInfo[playerid][pID]);
        mysql_tquery(connectionID, queryBuffer);
    }
    if(model == 1650)
    {
        if(quantity > PlayerInfo[playerid][pGasCan])
        return SendClientMessage(playerid, COLOR_WHITE, "You don't have that quantity");

        format(str, sizeof(str), "REMOVED_%dx", quantity);
        ShowItemBox1(playerid, string, str, model, 2);

        Inventory_Remove(playerid, string, quantity);
        
        PlayerInfo[playerid][pGasCan] -= quantity;
        
        mysql_format(connectionID, queryBuffer, sizeof(queryBuffer), "UPDATE users SET gascan = %i WHERE uid = %i", PlayerInfo[playerid][pGasCan], PlayerInfo[playerid][pID]);
        mysql_tquery(connectionID, queryBuffer);
    }
    if(model == 2768)
    {
        if(quantity > PlayerInfo[playerid][pFood])
        return SendClientMessage(playerid, COLOR_WHITE, "You don't have that quantity");

        format(str, sizeof(str), "REMOVED_%dx", quantity);
        ShowItemBox1(playerid, string, str, model, 2);

        Inventory_Remove(playerid, string, quantity);
        
        PlayerInfo[playerid][pFood] -= quantity;
        
        mysql_format(connectionID, queryBuffer, sizeof(queryBuffer), "UPDATE users SET food = %i WHERE uid = %i", PlayerInfo[playerid][pFood], PlayerInfo[playerid][pID]);
        mysql_tquery(connectionID, queryBuffer);
    }
    if(model == 1578)
    {
        if(quantity > PlayerInfo[playerid][pMeth])
        return SendClientMessage(playerid, COLOR_WHITE, "You don't have that quantity");

        format(str, sizeof(str), "REMOVED_%dx", quantity);
        ShowItemBox1(playerid, string, str, model, 2);

        Inventory_Remove(playerid, string, quantity);
        
        PlayerInfo[playerid][pMeth] -= quantity;

        mysql_format(connectionID, queryBuffer, sizeof(queryBuffer), "UPDATE users SET meth = %i WHERE uid = %i", PlayerInfo[playerid][pMeth], PlayerInfo[playerid][pID]);
        mysql_tquery(connectionID, queryBuffer);
    }
    if(model == 1580)
    {
        if(quantity > PlayerInfo[playerid][pCrack])
        return SendClientMessage(playerid, COLOR_WHITE, "You don't have that quantity");

        format(str, sizeof(str), "REMOVED_%dx", quantity);
        ShowItemBox1(playerid, string, str, model, 2);

        Inventory_Remove(playerid, string, quantity);
        
        PlayerInfo[playerid][pCrack] -= quantity;
        
        mysql_format(connectionID, queryBuffer, sizeof(queryBuffer), "UPDATE users SET crack = %i WHERE uid = %i", PlayerInfo[playerid][pCrack], PlayerInfo[playerid][pID]);
        mysql_tquery(connectionID, queryBuffer);
    }
    if(model == 2041)
    {
        if(quantity > PlayerInfo[playerid][pMaterials])
        return SendClientMessage(playerid, COLOR_WHITE, "You don't have that quantity");

        format(str, sizeof(str), "REMOVED_%dx", quantity);
        ShowItemBox1(playerid, string, str, model, 2);

        Inventory_Remove(playerid, string, quantity);
        
        PlayerInfo[playerid][pMaterials] -= quantity;
        
        mysql_format(connectionID, queryBuffer, sizeof(queryBuffer), "UPDATE users SET materials = %i WHERE uid = %i", PlayerInfo[playerid][pMaterials], PlayerInfo[playerid][pID]);
        mysql_tquery(connectionID, queryBuffer);
    }
    if(model == 1577)
    {
        if(quantity > PlayerInfo[playerid][pSeeds])
        return SendClientMessage(playerid, COLOR_WHITE, "You don't have that quantity");

        format(str, sizeof(str), "REMOVED_%dx", quantity);
        ShowItemBox1(playerid, string, str, model, 2);

        Inventory_Remove(playerid, string, quantity);
        
        PlayerInfo[playerid][pSeeds] -= quantity;
        
        mysql_format(connectionID, queryBuffer, sizeof(queryBuffer), "UPDATE users SET seeds = %i WHERE uid = %i", PlayerInfo[playerid][pSeeds], PlayerInfo[playerid][pID]);
        mysql_tquery(connectionID, queryBuffer);
    }
    if(model == 1576)
    {
        if(quantity > PlayerInfo[playerid][pEphedrine])
        return SendClientMessage(playerid, COLOR_WHITE, "You don't have that quantity");

        format(str, sizeof(str), "REMOVED_%dx", quantity);
        ShowItemBox1(playerid, string, str, model, 2);

        Inventory_Remove(playerid, string, quantity);
        
        PlayerInfo[playerid][pEphedrine] -= quantity;
        
        mysql_format(connectionID, queryBuffer, sizeof(queryBuffer), "UPDATE users SET ephedrine = %i WHERE uid = %i", PlayerInfo[playerid][pEphedrine], PlayerInfo[playerid][pID]);
        mysql_tquery(connectionID, queryBuffer);
    }
    if(model == 1241)
    {
        if(quantity > PlayerInfo[playerid][pPainkillers])
        return SendClientMessage(playerid, COLOR_WHITE, "You don't have that quantity");

        format(str, sizeof(str), "REMOVED_%dx", quantity);
        ShowItemBox1(playerid, string, str, model, 2);

        Inventory_Remove(playerid, string, quantity);
        
        PlayerInfo[playerid][pPainkillers] -= quantity;
        
        mysql_format(connectionID, queryBuffer, sizeof(queryBuffer), "UPDATE users SET painkillers = %i WHERE uid = %i", PlayerInfo[playerid][pPainkillers], PlayerInfo[playerid][pID]);
        mysql_tquery(connectionID, queryBuffer);
    }
    if(model == 1550)
    {
        if(quantity > PlayerInfo[playerid][pDirtyCash])
        return SendClientMessage(playerid, COLOR_WHITE, "You don't have that quantity");

        format(str, sizeof(str), "REMOVED_%dx", quantity);
        ShowItemBox1(playerid, string, str, model, 2);

        Inventory_Remove(playerid, string, quantity);
        
        
        PlayerInfo[playerid][pDirtyCash] -= quantity;
        
        mysql_format(connectionID, queryBuffer, sizeof(queryBuffer), "UPDATE users SET dirtycash = %i WHERE uid = %i", PlayerInfo[playerid][pDirtyCash], PlayerInfo[playerid][pID]);
        mysql_tquery(connectionID, queryBuffer);
    }
    if(model == 19921)
    {
        if(quantity > PlayerInfo[playerid][pRepairKit])
        return SendClientMessage(playerid, COLOR_WHITE, "You don't have that quantity");

        format(str, sizeof(str), "REMOVED_%dx", quantity);
        ShowItemBox1(playerid, string, str, model, 2);

        Inventory_Remove(playerid, string, quantity);
        
        PlayerInfo[playerid][pRepairKit] -= quantity;
        
        mysql_format(connectionID, queryBuffer, sizeof(queryBuffer), "UPDATE users SET repairkit = %i WHERE uid = %i", PlayerInfo[playerid][pRepairKit], PlayerInfo[playerid][pID]);
        mysql_tquery(connectionID, queryBuffer);
    }
    if(model == 19918)
    {
        if(quantity > PlayerInfo[playerid][pToolkit])
        return SendClientMessage(playerid, COLOR_WHITE, "You don't have that quantity");

        format(str, sizeof(str), "REMOVED_%dx", quantity);
        ShowItemBox1(playerid, string, str, model, 2);

        Inventory_Remove(playerid, string, quantity);
        
        PlayerInfo[playerid][pToolkit] -= quantity;
        
        mysql_format(connectionID, queryBuffer, sizeof(queryBuffer), "UPDATE users SET toolkit = %i WHERE uid = %i", PlayerInfo[playerid][pToolkit], PlayerInfo[playerid][pID]);
        mysql_tquery(connectionID, queryBuffer);
    }
    if(model == 19473)
    {
        if(quantity > PlayerInfo[playerid][pPot])
        return SendClientMessage(playerid, COLOR_WHITE, "You don't have that quantity");

        format(str, sizeof(str), "REMOVED_%dx", quantity);
        ShowItemBox1(playerid, string, str, model, 2);

        Inventory_Remove(playerid, string, quantity);
        
        PlayerInfo[playerid][pPot] -= quantity;
        
        mysql_format(connectionID, queryBuffer, sizeof(queryBuffer), "UPDATE users SET pot = %i WHERE uid = %i", PlayerInfo[playerid][pPot], PlayerInfo[playerid][pID]);
        mysql_tquery(connectionID, queryBuffer);
    }
    if(model == 19873)
    {
        if(quantity > PlayerInfo[playerid][pEcoin])
        return SendClientMessage(playerid, COLOR_WHITE, "You don't have that quantity");

        format(str, sizeof(str), "REMOVED_%dx", quantity);
        ShowItemBox1(playerid, string, str, model, 2);

        Inventory_Remove(playerid, string, quantity);
        
        PlayerInfo[playerid][pEcoin] -= quantity;
        
        mysql_format(connectionID, queryBuffer, sizeof(queryBuffer), "UPDATE users SET ecoin = %i WHERE uid = %i", PlayerInfo[playerid][pEcoin], PlayerInfo[playerid][pID]);
        mysql_tquery(connectionID, queryBuffer);
    }
    if(model == 19570)
    {
        if(quantity > PlayerInfo[playerid][pMilk])
        return SendClientMessage(playerid, COLOR_WHITE, "You don't have that quantity");

        format(str, sizeof(str), "REMOVED_%dx", quantity);
        ShowItemBox1(playerid, string, str, model, 2);

        Inventory_Remove(playerid, string, quantity);
        
        PlayerInfo[playerid][pMilk] -= quantity;
        
        mysql_format(connectionID, queryBuffer, sizeof(queryBuffer), "UPDATE users SET milk = %i WHERE uid = %i", PlayerInfo[playerid][pMilk], PlayerInfo[playerid][pID]);
        mysql_tquery(connectionID, queryBuffer);
    }
    if(model == 18867)
    {
        SendClientMessage(playerid, COLOR_WHITE, "You can't give this item");
    }
    if(model == 19942)
    {
        SendClientMessage(playerid, COLOR_WHITE, "You can't give this item");
    }
    if(model == 19036)
    {
        SendClientMessage(playerid, COLOR_WHITE, "You can't give this item");
    }
    if(model == 958)
    {
        SendClientMessage(playerid, COLOR_WHITE, "You can't give this item");
    }
    if(model == 365)
    {
        SendClientMessage(playerid, COLOR_WHITE, "You can't give this item");
    }
    if(model == 19823)
    {
        SendClientMessage(playerid, COLOR_WHITE, "You can't give this item");
    }
    if(model == 18875)
    {
        SendClientMessage(playerid, COLOR_WHITE, "You can't give this item");
    }

	ApplyAnimation(playerid, "CARRY", "putdwn", 4.1, 0, 0, 0, 0, 0, 1);
	Inventory_Close(playerid);
	return 1;
}