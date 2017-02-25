#define CURR_VERSION 1.06

if(isNil {profileNamespace getVariable "ug_last_version"}) then {
	profileNamespace setVariable ["ug_last_version",CURR_VERSION];
};

if(profileNamespace getVariable ["ug_last_version",0] < CURR_VERSION) then {
	hintSilent parseText format ["<t size='1.5'>Nouvelle version !</t><br/><t size='1.4'>V%1</t><br/>Des nouveautés ont été ajoutées , n'hésitez pas à lire le changelog !",CURR_VERSION];
	profileNamespace setVariable ["ug_last_version",CURR_VERSION];
};
