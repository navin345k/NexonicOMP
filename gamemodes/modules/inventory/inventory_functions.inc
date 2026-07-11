#include <strlib>                   //by Slice

new AnimIndex[MAX_PLAYERS],
    AnimNumber[MAX_PLAYERS],
    AnimPlayed[MAX_PLAYERS];

#define MAX_INVENTORY   32
#define ARWIN1						"{C6E2FF}"
#define X11_ARWIN					0xC6E2FFFF
#define X11_PLUM1                   0xFFBBFFAA
#define FUNC::%0(%1) forward %0(%1); public %0(%1)
#define function%0(%1) forward %0(%1); public %0(%1)
#define GetTotalWeightStatus(%0)        PlayerInfo[%0][pBeratItem]
#define GetTotalWeightFloat(%0)        PlayerInfo[%0][pBeratItem]
#define forex(%0,%1) for(new %0 = 0; %0 != %1; %0++)

SQL_IsCharacterLogged(playerid)
{
	return (IsPlayerConnected(playerid) && PlayerInfo[playerid][pLogged]);
}

SendRPMeAboveHead(playerid, const text[], color)
{
    new frmxt[255];

    format(frmxt, sizeof(frmxt), "> %s", text);
    SetPlayerChatBubble(playerid, frmxt, color, 15.0, 6500);

    SendClientMessageEx(playerid, -1, ""WHITE"ACTION: "RED"%s", text);
    return 1;
}

stock IsPlayerNearPlayer(playerid, targetid, Float:radius)
{
    static
        Float:fX,
        Float:fY,
        Float:fZ;

    GetPlayerPos(targetid, fX, fY, fZ);

    return (GetPlayerInterior(playerid) == GetPlayerInterior(targetid) && GetPlayerVirtualWorld(playerid) == GetPlayerVirtualWorld(targetid)) && IsPlayerInRangeOfPoint(playerid, radius, fX, fY, fZ);
}
new ListedInventory[MAX_PLAYERS][MAX_INVENTORY];

enum inventoryData
{
	invID,
	invExists,
	invItem[128 char],
	invModel,
	invQuantity
};
new InventoryData[MAX_PLAYERS][MAX_INVENTORY][inventoryData];

enum e_InventoryItems
{
    e_InventoryItem[128],
    e_InventoryModel
};

new const g_aInventoryItems[][e_InventoryItems] =
{
    {"Money", 1212},
    {"Phone", 18867},
    {"Radio", 19942},
    {"Mask", 19036},
    {"Mineral Water", 2958},
	{"Gascan", 1650},
	{"Biriyani", 2768},
    {"Rolling Paper", 19873},
    {"Joint", 3027},
    {"Meth", 1578},
    {"Crack", 1580},
    {"Materials", 2041},
    {"Seeds", 1577},
    {"Ephedrine",  1576},
    {"Painkiller", 1241},
    {"Aspirin", 2060},
    {"Dirty Cash", 1550},
    {"Baking Soda", 958},
    {"Spraycan", 365},
    {"Muriatic Acid", 19823},
    {"Repairkit", 19921},
    {"Toolkit", 19918},
	{"Weed", 19473},
	{"GPS", 18875},
    {"Milk", 19570}
};

/*Function*/
forward Float:GetInventoryWeight(const item[], quantity);
public Float:GetInventoryWeight(const item[], quantity)
{
    static Float:totalweight;
    if(!strcmp(item, "Money"))
    {
        totalweight = quantity*0.01;
    }
    else if(!strcmp(item, "Currency"))
    {
        totalweight = quantity*0.01;
    }
    else if(!strcmp(item, "Phone"))
    {
        totalweight = quantity*0.030;
    }
    else if(!strcmp(item, "Bandage"))
    {
        totalweight = quantity*0.01;
    }
    else if(!strcmp(item, "Radio"))
    {
        totalweight = quantity*0.01;
    }
    else if(!strcmp(item, "Mask"))
    {
        totalweight = quantity*0.030;
    }
    else if(!strcmp(item, "Mineral Water"))
    {
        totalweight = quantity*0.01;
    }
    else if(!strcmp(item, "Gascan"))
    {
        totalweight = quantity*0.01;
    }
    else if(!strcmp(item, "Biriyani"))
    {
        totalweight = quantity*0.01;
    }
    else if(!strcmp(item, "Rolling Paper"))
    {
        totalweight = quantity*0.25;
    }
    else if(!strcmp(item, "Joint"))
    {
        totalweight = quantity*0.10;
    }
    else if(!strcmp(item, "Meth"))
    {
        totalweight = quantity*0.25;
    }
    else if(!strcmp(item, "Crack"))
    {
        totalweight = quantity*0.15;
    }
    else if(!strcmp(item, "Materials"))
    {
        totalweight = quantity*0.06;
    }
    else if(!strcmp(item, "Seeds"))
    {
        totalweight = quantity*0.05;
    }
    else if(!strcmp(item, "Ephedrine"))
    {
        totalweight = quantity*0.08;
    }
    else if(!strcmp(item, "Painkiller"))
    {
        totalweight = quantity*0.02;
    }
    else if(!strcmp(item, "Aspirin"))
    {
        totalweight = quantity*0.01;
    }
    else if(!strcmp(item, "Dirty Cash"))
    {
        totalweight = quantity*0.04;
    }
    else if(!strcmp(item, "Medkit"))
    {
        totalweight = quantity*0.04;
    }
    else if(!strcmp(item, "Baking Soda"))
    {
        totalweight = quantity*0.02;
    }
    else if(!strcmp(item, "Spraycan"))
    {
        totalweight = quantity*0.05;
    }
    else if(!strcmp(item, "Muriatic Acid"))
    {
        totalweight = quantity*0.01;
    }
    else if(!strcmp(item, "Repairkit"))
    {
        totalweight = quantity*0.15;
    }
    else if(!strcmp(item, "Toolkit"))
    {
        totalweight = quantity*0.10;
    }
    else if(!strcmp(item, "Weed"))
    {
        totalweight = quantity*0.05;
    }
    else if(!strcmp(item, "GPS"))
    {
        totalweight = quantity*0.005;
    }
    else if(!strcmp(item, "Milk"))
    {
        totalweight = quantity*0.01;
    }
    return totalweight;
}

stock InventoryClear(playerid)
{
	mysql_format(connectionID, queryBuffer, sizeof(queryBuffer), "DELETE FROM `inventory` WHERE `ID` = '%d'", PlayerInfo[playerid][pID]);
	mysql_tquery(connectionID, queryBuffer);
	return 1;
}

FUNC::Inventory_Clear(playerid)
{
    for(new i = 0; i < MAX_INVENTORY; i++)
    {
        InventoryData[playerid][i][invExists] = false;
        InventoryData[playerid][i][invModel] = 0;
        InventoryData[playerid][i][invQuantity] = 0;
        PlayerInfo[playerid][pBeratItem] = 0;
    }
    return InventoryClear(playerid);
}

FUNC::Inventory_GetItemID(playerid, const item[])
{
	forex(i, MAX_INVENTORY)
	{
	    if (!InventoryData[playerid][i][invExists])
	        continue;
		if (!strcmp(InventoryData[playerid][i][invItem], item)) return i;
	}
	return -1;
}

FUNC::Inventory_GetFreeID(playerid)
{
	if (Inventory_Items(playerid) >= MAX_INVENTORY)
		return -1;
	forex(i, MAX_INVENTORY)
	{
	    if (!InventoryData[playerid][i][invExists])
	        return i;
	}
	return -1;
}

FUNC::Inventory_Items(playerid)
{
    new count;
    for(new i = 0; i < MAX_INVENTORY; i++) if (InventoryData[playerid][i][invExists]) {
        count++;
    }
    return count;
}

FUNC::Inventory_Count(playerid, const item[])
{
    new itemid = Inventory_GetItemID(playerid, item);
    if (itemid != -1)
        return InventoryData[playerid][itemid][invQuantity];
    return 0;
}

FUNC::PlayerHasItem(playerid, const item[])
{
    return (Inventory_GetItemID(playerid, item) != -1);
}

FUNC::Inventory_Set(playerid, const item[], model, amount)
{
    new itemid = Inventory_GetItemID(playerid, item);
    if (itemid == -1 && amount > 0)
        Inventory_Add(playerid, item, model, amount);
    else if (amount > 0 && itemid != -1)
        Inventory_SetQuantity(playerid, item, amount);
    else if (amount < 1 && itemid != -1)
        Inventory_Remove(playerid, item, Inventory_Count(playerid, item));
    return 1;
}

FUNC::Inventory_SetQuantity(playerid, const item[], quantity)
{
    new
        itemid = Inventory_GetItemID(playerid, item);
    if (itemid != -1)
    {
        new query[256];
        mysql_format(connectionID, query, sizeof(query),
            "UPDATE `inventory` SET `invQuantity` = %d WHERE `ID` = %d AND `invID` = %d",
            quantity,
            PlayerInfo[playerid][pID],
            InventoryData[playerid][itemid][invID]
        );
        mysql_tquery(connectionID, query);

        InventoryData[playerid][itemid][invQuantity] = quantity;
    }
    return 1;
}

stock Inventory_Remove(playerid, const item[], quantity = 1)
{
	new
		itemid = Inventory_GetItemID(playerid, item);

	if (itemid != -1)
	{
	    if (InventoryData[playerid][itemid][invQuantity] > 0)
	    {
            PlayerInfo[playerid][pBeratItem] -= Float:GetInventoryWeight(item, quantity);
	        InventoryData[playerid][itemid][invQuantity] -= quantity;
		}
		if (quantity == -1 || InventoryData[playerid][itemid][invQuantity] < 1)
		{
		    InventoryData[playerid][itemid][invExists] = false;
		    InventoryData[playerid][itemid][invModel] = 0;
		    InventoryData[playerid][itemid][invQuantity] = 0;
	        new query[128];
            mysql_format(connectionID, query, sizeof(query),
                "DELETE FROM `inventory` WHERE `ID` = %d AND `invID` = %d",
                PlayerInfo[playerid][pID],
                InventoryData[playerid][itemid][invID]
            );
            mysql_tquery(connectionID, query);
		}
		else if (quantity != -1 && InventoryData[playerid][itemid][invQuantity] > 0)
		{
            new query[256];
            format(query, sizeof(query),
                "UPDATE `inventory` SET `invQuantity` = `invQuantity` - %d WHERE `ID` = %d AND `invID` = %d",
                quantity,
                PlayerInfo[playerid][pID],
                InventoryData[playerid][itemid][invID]
            );
            mysql_tquery(connectionID, query);
		}
		return 1;
	}
	return 0;
}

FUNC::AddWeight(playerid, const item[], quantity)
{
    //if(PlayerInfo[playerid][pBeratItem] >= 50) return SendClientMessage(playerid, COLOR_WHITE, "Your Inventory is Full!"), Inventory_Close(playerid);

    PlayerInfo[playerid][pBeratItem] += Float:GetInventoryWeight(item, quantity);
    return 1;
}

stock Inventory_Add(playerid, const item[], model, quantity = 1)
{
	new
		itemid = Inventory_GetItemID(playerid, item);

	if (itemid == -1)
	{
	    itemid = Inventory_GetFreeID(playerid);

	    if (itemid != -1)
	    {
            AddWeight(playerid, item, quantity);
	        InventoryData[playerid][itemid][invExists] = true;
	        InventoryData[playerid][itemid][invModel] = model;
	        InventoryData[playerid][itemid][invQuantity] = quantity;

	        strpack(InventoryData[playerid][itemid][invItem], item, 32 char);

            mysql_format(connectionID, queryBuffer, sizeof(queryBuffer),
                "INSERT INTO `inventory` (`ID`, `invItem`, `invModel`, `invQuantity`) VALUES (%d, '%s', %d, %d)",
                PlayerInfo[playerid][pID], item, model, quantity);
            mysql_tquery(connectionID, queryBuffer, "OnInventoryAdd", "dd", playerid, itemid);

	        return itemid;
		}
		return -1;
	}
	else
	{
        //if(GetTotalWeightFloat(playerid) > 50) return SendClientMessage(playerid, COLOR_WHITE, "Your Inventory is Full!"), Inventory_Close(playerid);
        
        if(!strcmp(item, "Money"))
        {
            PlayerInfo[playerid][pBeratItem] += quantity*0.01;
        }
        else if(!strcmp(item, "Currency"))
        {
            PlayerInfo[playerid][pBeratItem] += quantity*0.01;
        }
        else if(!strcmp(item, "Phone"))
        {
            PlayerInfo[playerid][pBeratItem] += quantity*0.030;
        }
        else if(!strcmp(item, "Bandage"))
        {
            PlayerInfo[playerid][pBeratItem] += quantity*0.01;
        }
        else if(!strcmp(item, "Radio"))
        {
            PlayerInfo[playerid][pBeratItem] += quantity*0.01;
        }
        else if(!strcmp(item, "Mask"))
        {
            PlayerInfo[playerid][pBeratItem] += quantity*0.030;
        }
        else if(!strcmp(item, "Mineral Water"))
        {
            PlayerInfo[playerid][pBeratItem] += quantity*0.01;
        }
        else if(!strcmp(item, "Gascan"))
        {
            PlayerInfo[playerid][pBeratItem] += quantity*0.01;
        }
        else if(!strcmp(item, "Biriyani"))
        {
            PlayerInfo[playerid][pBeratItem] += quantity*0.01;
        }
        else if(!strcmp(item, "Rolling Paper"))
        {
            PlayerInfo[playerid][pBeratItem] += quantity*0.25;
        }
        else if(!strcmp(item, "Joint"))
        {
            PlayerInfo[playerid][pBeratItem] += quantity*0.10;
        }
        else if(!strcmp(item, "Meth"))
        {
            PlayerInfo[playerid][pBeratItem] += quantity*0.25;
        }
        else if(!strcmp(item, "Crack"))
        {
            PlayerInfo[playerid][pBeratItem] += quantity*0.15;
        }
        else if(!strcmp(item, "Materials"))
        {
            PlayerInfo[playerid][pBeratItem] += quantity*0.06;
        }
        else if(!strcmp(item, "Seeds"))
        {
            PlayerInfo[playerid][pBeratItem] += quantity*0.05;
        }
        else if(!strcmp(item, "Ephedrine"))
        {
            PlayerInfo[playerid][pBeratItem] += quantity*0.08;
        }
        else if(!strcmp(item, "Painkiller"))
        {
            PlayerInfo[playerid][pBeratItem] += quantity*0.02;
        }
        else if(!strcmp(item, "Aspirin"))
        {
            PlayerInfo[playerid][pBeratItem] += quantity*0.01;
        }
        else if(!strcmp(item, "Dirty Cash"))
        {
            PlayerInfo[playerid][pBeratItem] += quantity*0.04;
        }
        else if(!strcmp(item, "Medkit"))
        {
            PlayerInfo[playerid][pBeratItem] += quantity*0.04;
        }
        else if(!strcmp(item, "Baking Soda"))
        {
            PlayerInfo[playerid][pBeratItem] += quantity*0.02;
        }
        else if(!strcmp(item, "Spraycan"))
        {
            PlayerInfo[playerid][pBeratItem] += quantity*0.05;
        }
        else if(!strcmp(item, "Muriatic Acid"))
        {
            PlayerInfo[playerid][pBeratItem] += quantity*0.01;
        }
        else if(!strcmp(item, "Repairkit"))
        {
            PlayerInfo[playerid][pBeratItem] += quantity*0.15;
        }
        else if(!strcmp(item, "Toolkit"))
        {
            PlayerInfo[playerid][pBeratItem] += quantity*0.10;
        }
        else if(!strcmp(item, "Weed"))
        {
            PlayerInfo[playerid][pBeratItem] += quantity*0.05;
        }
        else if(!strcmp(item, "GPS"))
        {
            PlayerInfo[playerid][pBeratItem] += quantity*0.005;
        }
        else if(!strcmp(item, "Milk"))
        {
            PlayerInfo[playerid][pBeratItem] += quantity*0.01;
        }
	    InventoryData[playerid][itemid][invQuantity] += quantity;
	    new query[256];
        mysql_format(connectionID, query, sizeof(query),
            "UPDATE `inventory` SET `invQuantity` = `invQuantity` + %d WHERE `ID` = %d AND `invID` = %d",
            quantity,
            PlayerInfo[playerid][pID],
            InventoryData[playerid][itemid][invID]
        );
        mysql_tquery(connectionID, query);
    }
	return itemid;
}

forward OpenInventory(playerid);
public OpenInventory(playerid)
{
    new
        itemname[24],
        shstr[255],
        count = 0;
    
    strcat(shstr, "Item Name\tQuantity\tWeight (-)\n");
    for (new i = 0; i < MAX_INVENTORY; i ++) if (InventoryData[playerid][i][invExists])
    {
        strunpack(itemname, InventoryData[playerid][i][invItem]);
        strcat(shstr, sprintf("%s\t%d\t-\n", itemname, InventoryData[playerid][i][invQuantity]));
        ListedInventory[playerid][count ++] = i;
    }
    if(count)
    {
        PlayerInfo[playerid][pStorageSelect] = 0;
        ShowPlayerDialog(playerid, DIALOG_INVENTORY, DIALOG_STYLE_TABLIST_HEADERS, ""BLUE"Nexonic Roleplay "WHITE"- Inventory", shstr, "Select", "Cancel");
        return 1;
    }
    SendClientMessage(playerid, COLOR_WHITE, "You don't have any items in your inventory!");
    return 1;
}

ItemCantUse(const item[])
{
    if(!strcmp(item, "Money", true)) return 1;
    if(!strcmp(item, "Dirty Cash", true)) return 1;
    if(!strcmp(item, "Currency", true)) return 1;
    if(!strcmp(item, "Milk", true)) return 1;
    return 0;
}

forward OnPlayerUseItem(playerid, itemid, itemname[]);
public OnPlayerUseItem(playerid, itemid, itemname[])
{
    if(PlayerInfo[playerid][pInjured]) return SendClientMessage(playerid, COLOR_WHITE, "You are unconscious!");
    if(ItemCantUse(itemname)) return SendClientMessage(playerid, COLOR_WHITE, "That item cannot be used!");
    if(!strcmp(itemname, "Materials", true))
    {
        SendClientMessage(playerid, COLOR_WHITE, "Use /buygun to use materials");
    }
    else if(!strcmp(itemname, "Boombox", true))
    {
        SendClientMessage(playerid, COLOR_WHITE, "Use /boombox to use boombox");
    }
    else if(!strcmp(itemname, "Gascan"))
	{
	    SendClientMessage(playerid, COLOR_WHITE, "Use /gascan to use gascan");
	}
	else if(!strcmp(itemname, "Rolling Paper"))
	{
	    SendClientMessage(playerid, COLOR_WHITE, "Use /craft to use paper");
	}
	else if(!strcmp(itemname, "Joint"))
	{
	    callcmd::usedrug(playerid, "joint");
		Inventory_Close(playerid);
	}
	else if(!strcmp(itemname, "Meth"))
	{
	    callcmd::usedrug(playerid, "meth");
		Inventory_Close(playerid);
	}
	else if(!strcmp(itemname, "Crack"))
	{
	    callcmd::usedrug(playerid, "crack");
		Inventory_Close(playerid);
	}
	else if(!strcmp(itemname, "Painkiller"))
	{
	    callcmd::usedrug(playerid, "painkillers");
		Inventory_Close(playerid);
	}
	else if(!strcmp(itemname, "Aspirin"))
	{
	    callcmd::usedrug(playerid, "aspirin");
		Inventory_Close(playerid);
	}
	else if(!strcmp(itemname, "Repairkit"))
	{
	    callcmd::userepairkit(playerid, "");
		Inventory_Close(playerid);
	}
	else if(!strcmp(itemname, "Toolkit"))
	{
	    callcmd::hotwire(playerid, "");
		Inventory_Close(playerid);
	}
	else if(!strcmp(itemname, "Ephedrine"))
	{
	    SendClientMessage(playerid, COLOR_WHITE, "Use /cookmeth to use ephedrine");
	}
	else if(!strcmp(itemname, "Baking Soda"))
	{
	    SendClientMessage(playerid, COLOR_WHITE, "Use /cookmeth to use baking soda");
	}
	else if(!strcmp(itemname, "Muriatic Acid"))
	{
	    SendClientMessage(playerid, COLOR_WHITE, "Use /cookmeth to use muriatic acid");
	}
	else if(!strcmp(itemname, "Biriyani"))
	{
	    callcmd::eat(playerid,"");
	    Inventory_Close(playerid);
	}
	else if(!strcmp(itemname, "GPS"))
	{
	    callcmd::locate(playerid,"");
	    Inventory_Close(playerid);
	}
	else if(!strcmp(itemname, "Mineral Water"))
	{
	    callcmd::drink(playerid,"");
	    Inventory_Close(playerid);
	}
	else if(!strcmp(itemname, "Phone"))
	{
    	callcmd::phone(playerid,"");
	    Inventory_Close(playerid);
	}
	else if(!strcmp(itemname, "Radio"))
	{
	    SendClientMessage(playerid, COLOR_WHITE, "Use /connect or /pvr to use radio");
	}
	else if(!strcmp(itemname, "Bandage"))
	{
	    SendClientMessage(playerid, COLOR_WHITE, "Use /use [bandage] to use bandage");
	}
	else if(!strcmp(itemname, "Medkit"))
	{
	    SendClientMessage(playerid, COLOR_WHITE, "Use /use [medkit] to use medkit");
	}
	else if(!strcmp(itemname, "Mask"))
	{
	    callcmd::mask(playerid, "");
		Inventory_Close(playerid);
	}
	else if(!strcmp(itemname, "Seeds"))
	{
	    SendClientMessage(playerid, COLOR_WHITE, "Use /weed to use seeds");
	}
    return true;
}

CMD:asetitem(playerid, params[])
{
    if(PlayerInfo[playerid][pAdmin] < 6) return 0;

	new
		item[32],
		amount;
	if (sscanf(params, "ds[32]", amount, item))
	    return SendClientMessage(playerid, COLOR_WHITE, "/setitem [quantity] [item name]");
	for (new i = 0; i < sizeof(g_aInventoryItems); i ++) if (!strcmp(g_aInventoryItems[i][e_InventoryItem], item, true))
	{
        new tempItem[128];
        strcpy(tempItem, g_aInventoryItems[i][e_InventoryItem], sizeof(tempItem));
        Inventory_Add(playerid, tempItem, g_aInventoryItems[i][e_InventoryModel], amount);
        return SendStaffMessage(X11_ARWIN, ""RED"%s"ARWIN1" set the item %s in the amount of %d for themselves", PlayerInfo[playerid][pAdminName], item, amount);
	}
	SendClientMessage(playerid, COLOR_WHITE, "Invalid item name, Check /itemlist");
    PlayerPlaySound(playerid, 5205, 0, 0, 0);
	return 1;
}

CMD:aremoveinv(playerid, params[])
{
    if(PlayerInfo[playerid][pAdmin] < 6) return 0;

    new otherid, itemname[32];
    if(sscanf(params, "us[32]", otherid, itemname)) return SendClientMessage(playerid, COLOR_WHITE, "/aremoveinv [name/playerid] [item name]");
    if(!IsPlayerConnected(otherid)) return SendClientMessage(playerid, COLOR_WHITE, "That player is not connected to the server!");
    if(!PlayerHasItem(otherid, itemname)) return SendClientMessage(playerid, COLOR_WHITE, "That player does not have that item!");

    Inventory_Remove(otherid, itemname, Inventory_Count(otherid, itemname));
    SendStaffMessage(X11_ARWIN, ""RED"%s"ARWIN1" removed the item %s from the inventory of "YELLOW"%s(%d)", PlayerInfo[playerid][pAdminName], itemname, PlayerInfo[otherid][pUsername], otherid);
    SendClientMessageEx(otherid, X11_ARWIN, "[AdmCmd] "RED"%s"ARWIN1" removed the item %s from your inventory", PlayerInfo[playerid][pAdminName], itemname);
    return 1;
}

CMD:giveitem(playerid, params[])
{
    if(PlayerInfo[playerid][pAdmin] < 6) return 0;

    new otherid, itemname[32], amount;
    if(sscanf(params, "uds[32]", otherid, amount, itemname)) return SendClientMessage(playerid, COLOR_WHITE, "/giveitem [name/playerid] [amount] [item name]");
    if(!IsPlayerConnected(otherid)) return SendClientMessage(playerid, COLOR_WHITE, "That player is not connected to the server!");
    for(new i = 0; i < sizeof(g_aInventoryItems); i++) if (!strcmp(g_aInventoryItems[i][e_InventoryItem], itemname, true))
    {
        new tempItem[128];
        strcpy(tempItem, g_aInventoryItems[i][e_InventoryItem], sizeof(tempItem));
        Inventory_Add(otherid, tempItem, g_aInventoryItems[i][e_InventoryModel], amount);
        SendClientMessageEx(otherid, X11_ARWIN, "[AdmCmd]"RED" %s"ARWIN1" has given you "YELLOW"%s"ARWIN1" in the amount of "YELLOW"%d", PlayerInfo[playerid][pAdminName], itemname, amount);
        return SendStaffMessage(X11_ARWIN, ""RED"%s"ARWIN1" gave "YELLOW"%s(%d)"ARWIN1" %s in the amount of %d", PlayerInfo[playerid][pAdminName], PlayerInfo[otherid][pUsername], otherid, itemname, amount);
    }
    SendClientMessage(playerid, COLOR_WHITE, "Invalid Item Name, check /itemlist");

    static shstr[125];
    format(shstr, sizeof(shstr), "Used command /giveitem %s (%d amount) to player %s.", itemname, amount, PlayerInfo[otherid][pUsername]);
	return 1;
}

CMD:giveitemall(playerid, params[])
{
    if(PlayerInfo[playerid][pAdmin] < 6) return 0;

    new itemname[32], amounts, bool: found = false;
    if(sscanf(params, "ds[32]", amounts, itemname)) return SendClientMessage(playerid, COLOR_WHITE, "/giveitemall [amount] [item name]");
    for (new i = 0; i < sizeof(g_aInventoryItems); i++)
    {
        if(!strcmp(g_aInventoryItems[i][e_InventoryItem], itemname, true))
        {
            foreach(new player : Player) if (IsPlayerConnected(player) && SQL_IsCharacterLogged(player))
            {
                new tempItem[128];
                strcpy(tempItem, g_aInventoryItems[i][e_InventoryItem], sizeof(tempItem));

                Inventory_Add(player, tempItem, g_aInventoryItems[i][e_InventoryModel], amounts);

                new msg[32];
                format(msg, sizeof(msg), "Received %dx", amounts);

                ShowItemBox(player, tempItem, msg, g_aInventoryItems[i][e_InventoryModel], 5);
            }
            SendClientMessageToAll(X11_ARWIN, "[AdmCmd]"RED" %s"ARWIN1" has given "YELLOW"%s"ARWIN1" in the amount of "YELLOW"%d"ARWIN1" to all online players", PlayerInfo[playerid][pAdminName], g_aInventoryItems[i][e_InventoryItem], amounts);
            found = true;
        }
    }
    if(!found) SendClientMessage(playerid, COLOR_WHITE, "Item not found, use '/itemlist'");

    static shstr[125];
    format(shstr, sizeof(shstr), "Used command /giveitemall %s (%d) to all online players.", itemname, amounts);
    return 1;
}

CMD:setitem(playerid, params[])
{
    new 
        userid,
        item[32],
        amount;
    
    if(PlayerInfo[playerid][pAdmin] < 6)
        return 0;
    
    if(sscanf(params,"uds[32]", userid, amount, item))
        return SendClientMessage(playerid, COLOR_WHITE, "/setitem [playerid/Name] [amount] [item name]");

    for(new i = 0; i < sizeof(g_aInventoryItems); i ++) if (!strcmp(g_aInventoryItems[i][e_InventoryItem], item, true))
    {
        new tempItem[128];
        strcpy(tempItem, g_aInventoryItems[i][e_InventoryItem], sizeof(tempItem));
        Inventory_Set(userid, tempItem, g_aInventoryItems[i][e_InventoryModel], amount);

        SendClientMessageEx(userid, X11_ARWIN, "[AdmCmd]"RED" %s"ARWIN1" has set your %s to %d", PlayerInfo[playerid][pAdminName], item, amount);
        return SendStaffMessage(X11_ARWIN, ""RED"%s"ARWIN1" set "YELLOW"%s(%d)"ARWIN1" %s to %d", PlayerInfo[playerid][pAdminName], PlayerInfo[userid][pUsername], userid, item, amount);
    }
    SendClientMessage(playerid, COLOR_WHITE, "Invalid item name~n~use ~y~'/itemlist'~w~ to view the list");

    static shstr[125];
    format(shstr, sizeof(shstr), "Used command /setitem %s (%d amount) for player %s.", item, amount, PlayerInfo[userid][pUsername]);
	return 1;
}

CMD:clearitems(playerid, params[])
{
    if(!SQL_IsCharacterLogged(playerid))
        return 0;
    
    if(PlayerInfo[playerid][pAdmin] < 6) return 0;

    new otherid;
    if(sscanf(params, "u", otherid)) return SendClientMessage(playerid, COLOR_WHITE, "/clearitems [name/playerid]");
    if(!IsPlayerConnected(otherid)) return SendClientMessage(playerid, COLOR_WHITE, "That player is not connected to the server!");

    Inventory_Clear(otherid);
    SendClientMessageEx(otherid, X11_ARWIN, "[AdmCmd] Admin "RED"%s "ARWIN1" has cleared all items from your inventory.", GetRPName(playerid));
    SendStaffMessage(X11_ARWIN, ""RED"%s"ARWIN1" has cleared the inventory items of "YELLOW"%s(%d).", GetRPName(playerid), GetRPName(otherid), otherid);
    return 1;
}

CMD:itemlist(playerid, params[])
{
    if(PlayerInfo[playerid][pAdmin] < 1) return 0;

    new
        string[1024];

    if (!strlen(string)) {
        for (new i = 0; i < sizeof(g_aInventoryItems); i ++) {
            format(string, sizeof(string), "%s%s\n", string, g_aInventoryItems[i][e_InventoryItem]);
        }
    }
    return ShowPlayerDialog(playerid, DIALOG_NONE, DIALOG_STYLE_LIST, ""BLUE"Nexonic Roleplay "WHITE"- Item Name", string, "Select", "Cancel");
}

/*
// in login process
mysql_format(connectionID, queryBuffer, sizeof(queryBuffer), "SELECT * FROM `inventory` WHERE `ID`=%d", PlayerInfo[extraid][pID]);
				mysql_tquery(connectionID, queryBuffer, "LoadPlayerInventory", "d", extraid);

*/

forward LoadPlayerInventory(playerid);
public LoadPlayerInventory(playerid)
{
    new rows = cache_num_rows();
    new itemname[128];

    if (rows)
    {
        for (new i = 0; i < rows; i++)
        {
            InventoryData[playerid][i][invExists] = true;
            InventoryData[playerid][i][invID] = cache_get_field_content_int(i, "invID");
            InventoryData[playerid][i][invModel] = cache_get_field_content_int(i, "invModel");
            InventoryData[playerid][i][invQuantity] = cache_get_field_content_int(i, "invQuantity");

            strpack(InventoryData[playerid][i][invItem], (cache_get_field_content(i, "invItem", itemname, sizeof(itemname)), itemname), 32);
        }
    }
    return 1;
}

FUNC::OnInventoryAdd(playerid, itemid)
{
	InventoryData[playerid][itemid][invID] = cache_insert_id();
	return 1;
}