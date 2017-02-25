/**
_string = ""; 
_cnter = 0; 
{ 
 _string = _string + format[" 
 class att%1 { 
  name = "%2"; 
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}}; 
  craftingTime = 10;     
 
  required[] = {{"metal",2}};  
  result = "%3";    
 
  craft_description = "auto"; 
 }; 
 ",_cnter,getText (_x >> "displayName"),configName _x]; 
 _cnter = _cnter + 1; 
}foreach ("(configName _x) select [0,6] == "optic_"" configClasses (configFile >> "CfgWeapons")); 
copyToClipboard _string; 
**/


class att0 { 
name = "ARCO"; 
allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}}; 
craftingTime = 10;     

required[] = {{"metal",2}};  
result = "optic_Arco";    

craft_description = "auto"; 
}; 

class att1 { 
name = "RCO"; 
allowedClasses[] = {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}}; 
craftingTime = 10;     

required[] = {{"metal",2}};  
result = "optic_Hamr";    

craft_description = "auto"; 
}; 

class att2 { 
name = "ACO (Red)"; 
allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}}; 
craftingTime = 10;     

required[] = {{"metal",2}};  
result = "optic_Aco";    

craft_description = "auto"; 
}; 

class att3 { 
name = "ACO (Green)"; 
allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}}; 
craftingTime = 10;     

required[] = {{"metal",2}};  
result = "optic_ACO_grn";    

craft_description = "auto"; 
}; 

class att4 { 
name = "ACO SMG (Red)"; 
allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}}; 
craftingTime = 10;     

required[] = {{"metal",2}};  
result = "optic_Aco_smg";    

craft_description = "auto"; 
}; 

class att5 { 
name = "ACO SMG (Green)"; 
allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}}; 
craftingTime = 10;     

required[] = {{"metal",2}};  
result = "optic_ACO_grn_smg";    

craft_description = "auto"; 
}; 

class att6 { 
name = "Mk17 Holosight"; 
allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}}; 
craftingTime = 10;     

required[] = {{"metal",2}};  
result = "optic_Holosight";    

craft_description = "auto"; 
}; 

class att7 { 
name = "Mk17 Holosight SMG"; 
allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}}; 
craftingTime = 10;     

required[] = {{"metal",2}};  
result = "optic_Holosight_smg";    

craft_description = "auto"; 
}; 

class att8 { 
name = "MOS"; 
allowedClasses[] = {{"Assault",4},{"Medic",4},{"Engineer",4},{"Sniper",3}}; 
craftingTime = 10;     

required[] = {{"metal",2}};  
result = "optic_SOS";    

craft_description = "auto"; 
}; 

class att9 { 
name = "MRCO"; 
allowedClasses[] = {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}}; 
craftingTime = 10;     

required[] = {{"metal",2}};  
result = "optic_MRCO";    

craft_description = "auto"; 
}; 

class att10 { 
name = "NVS"; 
allowedClasses[] = {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}}; 
craftingTime = 10;     

required[] = {{"metal",2}};  
result = "optic_NVS";    

craft_description = "auto"; 
}; 

class att14 { 
name = "DMS"; 
allowedClasses[] = {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}}; 
craftingTime = 10;     

required[] = {{"metal",2}};  
result = "optic_DMS";    

craft_description = "auto"; 
}; 

class att15 { 
name = "Yorris J2"; 
allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}}; 
craftingTime = 10;     

required[] = {{"metal",2}};  
result = "optic_Yorris";    

craft_description = "auto"; 
}; 

class att16 { 
name = "MRD"; 
allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}}; 
craftingTime = 10;     

required[] = {{"metal",2}};  
result = "optic_MRD";    

craft_description = "auto"; 
}; 

class att17 { 
name = "LRPS"; 
allowedClasses[] = {{"Assault",5},{"Medic",5},{"Engineer",5},{"Sniper",4}}; 
craftingTime = 10;     

required[] = {{"metal",2}};  
result = "optic_LRPS";    

craft_description = "auto"; 
}; 

class att18 { 
name = "AMS"; 
allowedClasses[] = {{"Assault",5},{"Medic",5},{"Engineer",5},{"Sniper",4}}; 
craftingTime = 10;     

required[] = {{"metal",2}};  
result = "optic_AMS_base";    

craft_description = "auto"; 
}; 

class att19 { 
name = "AMS (Black)"; 
allowedClasses[] = {{"Assault",5},{"Medic",5},{"Engineer",5},{"Sniper",4}}; 
craftingTime = 10;     

required[] = {{"metal",2}};  
result = "optic_AMS";    

craft_description = "auto"; 
}; 

class att20 { 
name = "AMS (Khaki)"; 
allowedClasses[] = {{"Assault",5},{"Medic",5},{"Engineer",5},{"Sniper",4}}; 
craftingTime = 10;     

required[] = {{"metal",2}};  
result = "optic_AMS_khk";    

craft_description = "auto"; 
}; 

class att21 { 
name = "AMS (Sand)"; 
allowedClasses[] = {{"Assault",5},{"Medic",5},{"Engineer",5},{"Sniper",4}}; 
craftingTime = 10;     

required[] = {{"metal",2}};  
result = "optic_AMS_snd";    

craft_description = "auto"; 
}; 

class att22 { 
name = "Kahlia"; 
allowedClasses[] = {{"Assault",5},{"Medic",5},{"Engineer",5},{"Sniper",4}}; 
craftingTime = 10;     

required[] = {{"metal",2}};  
result = "optic_KHS_base";    

craft_description = "auto"; 
}; 

class att23 { 
name = "Kahlia (Black)"; 
allowedClasses[] = {{"Assault",5},{"Medic",5},{"Engineer",5},{"Sniper",4}}; 
craftingTime = 10;     

required[] = {{"metal",2}};  
result = "optic_KHS_blk";    

craft_description = "auto"; 
}; 

class att24 { 
name = "Kahlia (Hex)"; 
allowedClasses[] = {{"Assault",5},{"Medic",5},{"Engineer",5},{"Sniper",4}}; 
craftingTime = 10;     

required[] = {{"metal",2}};  
result = "optic_KHS_hex";    

craft_description = "auto"; 
}; 

class att25 { 
name = "Kahlia (Old)"; 
allowedClasses[] = {{"Assault",5},{"Medic",5},{"Engineer",5},{"Sniper",4}}; 
craftingTime = 10;     

required[] = {{"metal",2}};  
result = "optic_KHS_old";    

craft_description = "auto"; 
}; 

class att26 { 
name = "Kahlia (Tan)"; 
allowedClasses[] = {{"Assault",5},{"Medic",5},{"Engineer",5},{"Sniper",4}}; 
craftingTime = 10;     

required[] = {{"metal",2}};  
result = "optic_KHS_tan";    

craft_description = "auto"; 
}; 

class att27 { 
name = "ARCO (Black)"; 
allowedClasses[] = {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}}; 
craftingTime = 10;     

required[] = {{"metal",2}};  
result = "optic_Arco_blk_F";    

craft_description = "auto"; 
}; 

class att28 { 
name = "ARCO (Green Hex)"; 
allowedClasses[] = {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}}; 
craftingTime = 10;     

required[] = {{"metal",2}};  
result = "optic_Arco_ghex_F";    

craft_description = "auto"; 
}; 

class att29 { 
name = "DMS (Green Hex)"; 
allowedClasses[] = {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}}; 
craftingTime = 10;     

required[] = {{"metal",2}};  
result = "optic_DMS_ghex_F";    

craft_description = "auto"; 
}; 

class att30 { 
name = "RCO (Khaki)"; 
allowedClasses[] = {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}}; 
craftingTime = 10;     

required[] = {{"metal",2}};  
result = "optic_Hamr_khk_F";    

craft_description = "auto"; 
}; 

class att31 { 
name = "ERCO (Black)"; 
allowedClasses[] = {{"Assault",3},{"Medic",4},{"Engineer",4},{"Sniper",4}}; 
craftingTime = 10;     

required[] = {{"metal",2}};  
result = "optic_ERCO_blk_F";    

craft_description = "auto"; 
}; 

class att32 { 
name = "ERCO (Khaki)"; 
allowedClasses[] = {{"Assault",3},{"Medic",4},{"Engineer",4},{"Sniper",4}}; 
craftingTime = 10;     

required[] = {{"metal",2}};  
result = "optic_ERCO_khk_F";    

craft_description = "auto"; 
}; 

class att33 { 
name = "ERCO (Sand)"; 
allowedClasses[] = {{"Assault",3},{"Medic",4},{"Engineer",4},{"Sniper",4}}; 
craftingTime = 10;     

required[] = {{"metal",2}};  
result = "optic_ERCO_snd_F";    

craft_description = "auto"; 
}; 

class att34 { 
name = "MOS (Khaki)"; 
allowedClasses[] = {{"Assault",4},{"Medic",4},{"Engineer",4},{"Sniper",3}}; 
craftingTime = 10;     

required[] = {{"metal",2}};  
result = "optic_SOS_khk_F";    

craft_description = "auto"; 
}; 

class att35 { 
name = "LRPS (Tropic)"; 
allowedClasses[] = {{"Assault",6},{"Medic",6},{"Engineer",6},{"Sniper",5}}; 
craftingTime = 10;     

required[] = {{"metal",2}};  
result = "optic_LRPS_tna_F";    

craft_description = "auto"; 
}; 

class att36 { 
name = "LRPS (Green Hex)"; 
allowedClasses[] = {{"Assault",6},{"Medic",6},{"Engineer",6},{"Sniper",5}}; 
craftingTime = 10;     

required[] = {{"metal",2}};  
result = "optic_LRPS_ghex_F";    

craft_description = "auto"; 
}; 

class att37 { 
name = "Mk17 Holosight (Black)"; 
allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}}; 
craftingTime = 10;     

required[] = {{"metal",2}};  
result = "optic_Holosight_blk_F";    

craft_description = "auto"; 
}; 

class att38 { 
name = "Mk17 Holosight (Khaki)"; 
allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}}; 
craftingTime = 10;     

required[] = {{"metal",2}};  
result = "optic_Holosight_khk_F";    

craft_description = "auto"; 
}; 

class att39 { 
name = "Mk17 Holosight SMG (Black)"; 
allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}}; 
craftingTime = 10;     

required[] = {{"metal",2}};  
result = "optic_Holosight_smg_blk_F";    

craft_description = "auto"; 
}; 
