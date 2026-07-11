new DCC_Channel:loginlogs;
new DCC_Channel:logoutlogs;
new DCC_Channel:coords;
new DCC_Channel:unknowncmdlogs;
new DCC_Channel:cmdlogs;
new DCC_Channel:chatlogs;
new DCC_Channel:adminlogs;
new DCC_Channel:pvtvehlogs;
new DCC_Channel:factionmoneylogs;
new DCC_Channel:deathlogs;
new DCC_Channel:impoundlogs;

stock OnDiscordInit()
{
    loginlogs = DCC_FindChannelById("1447655860250611875");
    logoutlogs = DCC_FindChannelById("1491511948993364031");
	coords = DCC_FindChannelById("1447664366865486026");
	unknowncmdlogs = DCC_FindChannelById("1491519117767999609");
	cmdlogs = DCC_FindChannelById("1447656094682841128");
	chatlogs = DCC_FindChannelById("1447656075997220875");
	adminlogs = DCC_FindChannelById("1447655928282353829");
	pvtvehlogs = DCC_FindChannelById("1491531528524664912");
	factionmoneylogs = DCC_FindChannelById("1491767021317259417");
	deathlogs = DCC_FindChannelById("1491769781156843591");
	impoundlogs = DCC_FindChannelById("1447656335792406610");

    return 1;
}