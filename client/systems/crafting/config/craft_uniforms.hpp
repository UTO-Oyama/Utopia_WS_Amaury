/**
_string = ""; 
_cnter = 0; 
{ 
 _string = _string + format[" 
 class uni%1 { 
  name = ""%2""; 
  allowedClasses[] = {{""Assault"",1},{""Medic"",1},{""Engineer"",1},{""Sniper"",1}}; 
  craftingTime = 10;     
 
  required[] = {{""wearings"",2}};  
  result = ""%3"";    
 
  craft_description = ""auto""; 
 }; 
 ",_cnter,getText (_x >> "displayName"),configName _x]; 
 _cnter = _cnter + 1; 
}foreach ("configName _x select [0,2] == 'U_'" configClasses (configFile >> "CfgWeapons")); 
copyToClipboard _string; 
**/

  
 class uni0 {  
  name = "Underwear";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",1}};   
  result = "U_BasicBody";     
  
  craft_description = "auto";  
 };  
   
 class uni1 {  
  name = "Combat Fatigues (MTP)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_B_CombatUniform_mcam";     
  
  craft_description = "auto";  
 };  
   
 class uni2 {  
  name = "Combat Fatigues (MTP) (Tee)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_B_CombatUniform_mcam_tshirt";     
  
  craft_description = "auto";  
 };  
   
 class uni3 {  
  name = "Recon Fatigues (MTP)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_B_CombatUniform_mcam_vest";     
  
  craft_description = "auto";  
 };  
   
 class uni4 {  
  name = "Ghillie Suit [NATO]";  
  allowedClasses[] = {{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_B_GhillieSuit";     
  
  craft_description = "auto";  
 };  
   
 class uni5 {  
  name = "Heli Pilot Coveralls [NATO]";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_B_HeliPilotCoveralls";     
  
  craft_description = "auto";  
 };  
   
 class uni6 {  
  name = "Wetsuit [NATO]";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_B_Wetsuit";     
  
  craft_description = "auto";  
 };  
   
 class uni7 {  
  name = "Fatigues (Hex) [CSAT]";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_O_CombatUniform_ocamo";     
  
  craft_description = "auto";  
 };  
   
 class uni8 {  
  name = "Ghillie Suit [CSAT]";  
  allowedClasses[] = {{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_O_GhillieSuit";     
  
  craft_description = "auto";  
 };  
   
 class uni9 {  
  name = "Pilot Coveralls [CSAT]";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_O_PilotCoveralls";     
  
  craft_description = "auto";  
 };  
   
 class uni10 {  
  name = "Wetsuit [CSAT]";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_O_Wetsuit";     
  
  craft_description = "auto";  
 };  
   
 class uni11 {  
  name = "Commoner Clothes (Blue)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Poloshirt_blue";     
  
  craft_description = "auto";  
 };  
   
 class uni12 {  
  name = "Commoner Clothes (Burgundy)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Poloshirt_burgundy";     
  
  craft_description = "auto";  
 };  
   
 class uni13 {  
  name = "Commoner Clothes (Striped)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Poloshirt_stripped";     
  
  craft_description = "auto";  
 };  
   
 class uni14 {  
  name = "Commoner Clothes (Tricolor)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Poloshirt_tricolour";     
  
  craft_description = "auto";  
 };  
   
 class uni15 {  
  name = "Commoner Clothes (Salmon)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Poloshirt_salmon";     
  
  craft_description = "auto";  
 };  
   
 class uni16 {  
  name = "Commoner Clothes (Red-White)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Poloshirt_redwhite";     
  
  craft_description = "auto";  
 };  
   
 class uni17 {  
  name = "Commoner Clothes 2";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Commoner1_1";     
  
  craft_description = "auto";  
 };  
   
 class uni18 {  
  name = "Commoner Clothes 2";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Commoner1_2";     
  
  craft_description = "auto";  
 };  
   
 class uni19 {  
  name = "Commoner Clothes 3";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Commoner1_3";     
  
  craft_description = "auto";  
 };  
   
 class uni20 {  
  name = "Rangemaster Suit";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_Rangemaster";     
  
  craft_description = "auto";  
 };  
   
 class uni21 {  
  name = "Nikos Clothes";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_NikosBody";     
  
  craft_description = "auto";  
 };  
   
 class uni22 {  
  name = "Jacket and Shorts";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_OrestesBody";     
  
  craft_description = "auto";  
 };  
   
 class uni23 {  
  name = "Worn Combat Fatigues (MTP)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_B_CombatUniform_mcam_worn";     
  
  craft_description = "auto";  
 };  
   
 class uni24 {  
  name = "Combat Fatigues (MTP)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_B_CombatUniform_wdl";     
  
  craft_description = "auto";  
 };  
   
 class uni25 {  
  name = "Combat Fatigues (MTP) (Tee)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_B_CombatUniform_wdl_tshirt";     
  
  craft_description = "auto";  
 };  
   
 class uni26 {  
  name = "Recon Fatigues (MTP)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_B_CombatUniform_wdl_vest";     
  
  craft_description = "auto";  
 };  
   
 class uni27 {  
  name = "Combat Fatigues (MTP)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_B_CombatUniform_sgg";     
  
  craft_description = "auto";  
 };  
   
 class uni28 {  
  name = "Combat Fatigues (MTP) (Tee)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_B_CombatUniform_sgg_tshirt";     
  
  craft_description = "auto";  
 };  
   
 class uni29 {  
  name = "Recon Fatigues (MTP)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_B_CombatUniform_sgg_vest";     
  
  craft_description = "auto";  
 };  
   
 class uni30 {  
  name = "Specop Fatigues (Sage)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_B_SpecopsUniform_sgg";     
  
  craft_description = "auto";  
 };  
   
 class uni31 {  
  name = "Pilot Coveralls [NATO]";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_B_PilotCoveralls";     
  
  craft_description = "auto";  
 };  
   
 class uni32 {  
  name = "Fatigues (Urban) [CSAT]";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_O_CombatUniform_oucamo";     
  
  craft_description = "auto";  
 };  
   
 class uni33 {  
  name = "Recon Fatigues (Hex)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_O_SpecopsUniform_ocamo";     
  
  craft_description = "auto";  
 };  
   
 class uni34 {  
  name = "Recon Fatigues (Black)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_O_SpecopsUniform_blk";     
  
  craft_description = "auto";  
 };  
   
 class uni35 {  
  name = "Officer Fatigues (Hex)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_O_OfficerUniform_ocamo";     
  
  craft_description = "auto";  
 };  
   
 class uni36 {  
  name = "Combat Fatigues [AAF]";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_I_CombatUniform";     
  
  craft_description = "auto";  
 };  
   
 class uni37 {  
  name = "Combat Fatigues [AAF] (Officer)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_I_CombatUniform_tshirt";     
  
  craft_description = "auto";  
 };  
   
 class uni38 {  
  name = "Combat Fatigues [AAF] (Rolled-up)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_I_CombatUniform_shortsleeve";     
  
  craft_description = "auto";  
 };  
   
 class uni39 {  
  name = "Pilot Coveralls [AAF]";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_I_pilotCoveralls";     
  
  craft_description = "auto";  
 };  
   
 class uni40 {  
  name = "Heli Pilot Coveralls [AAF]";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_I_HeliPilotCoveralls";     
  
  craft_description = "auto";  
 };  
   
 class uni41 {  
  name = "Ghillie Suit [AAF]";  
  allowedClasses[] = {{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_I_GhillieSuit";     
  
  craft_description = "auto";  
 };  
   
 class uni42 {  
  name = "Combat Fatigues [AAF] (Officer)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_I_OfficerUniform";     
  
  craft_description = "auto";  
 };  
   
 class uni43 {  
  name = "Wetsuit [AAF]";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_I_Wetsuit";     
  
  craft_description = "auto";  
 };  
   
 class uni44 {  
  name = "Competitor Suit";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_Competitor";     
  
  craft_description = "auto";  
 };  
   
 class uni45 {  
  name = "Combat Fatigues (Miller)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_MillerBody";     
  
  craft_description = "auto";  
 };  
   
 class uni46 {  
  name = "Combat Fatigues (Kerry)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_KerryBody";     
  
  craft_description = "auto";  
 };  
   
 class uni47 {  
  name = "Underwear 4";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_AttisBody";     
  
  craft_description = "auto";  
 };  
   
 class uni48 {  
  name = "Underwear 5";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_AntigonaBody";     
  
  craft_description = "auto";  
 };  
   
 class uni49 {  
  name = "Kabeiroi Leader's Outfit";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_IG_Menelaos";     
  
  craft_description = "auto";  
 };  
   
 class uni50 {  
  name = "Novak's Leisure Suit";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Novak";     
  
  craft_description = "auto";  
 };  
   
 class uni51 {  
  name = "Scientist Suit";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_OI_Scientist";     
  
  craft_description = "auto";  
 };  
   
 class uni52 {  
  name = "Guerilla Garment";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_IG_Guerilla1_1";     
  
  craft_description = "auto";  
 };  
   
 class uni53 {  
  name = "Guerilla Outfit (Plain, Dark)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_IG_Guerilla2_1";     
  
  craft_description = "auto";  
 };  
   
 class uni54 {  
  name = "Guerilla Outfit (Pattern)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_IG_Guerilla2_2";     
  
  craft_description = "auto";  
 };  
   
 class uni55 {  
  name = "Guerilla Outfit (Plain, Light)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_IG_Guerilla2_3";     
  
  craft_description = "auto";  
 };  
   
 class uni56 {  
  name = "Guerilla Smocks";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_IG_Guerilla3_1";     
  
  craft_description = "auto";  
 };  
   
 class uni57 {  
  name = "Guerilla Smocks 1";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_IG_Guerilla3_2";     
  
  craft_description = "auto";  
 };  
   
 class uni58 {  
  name = "Guerilla Uniform";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_IG_leader";     
  
  craft_description = "auto";  
 };  
   
 class uni59 {  
  name = "Guerilla Garment";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_BG_Guerilla1_1";     
  
  craft_description = "auto";  
 };  
   
 class uni60 {  
  name = "Guerilla Outfit (Plain, Dark)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_BG_Guerilla2_1";     
  
  craft_description = "auto";  
 };  
   
 class uni61 {  
  name = "Guerilla Outfit (Pattern)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_BG_Guerilla2_2";     
  
  craft_description = "auto";  
 };  
   
 class uni62 {  
  name = "Guerilla Outfit (Plain, Light)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_BG_Guerilla2_3";     
  
  craft_description = "auto";  
 };  
   
 class uni63 {  
  name = "Guerilla Smocks";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_BG_Guerilla3_1";     
  
  craft_description = "auto";  
 };  
   
 class uni64 {  
  name = "Guerilla Smocks 1";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_BG_Guerilla3_2";     
  
  craft_description = "auto";  
 };  
   
 class uni65 {  
  name = "Guerilla Uniform";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_BG_leader";     
  
  craft_description = "auto";  
 };  
   
 class uni66 {  
  name = "Guerilla Garment";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_OG_Guerilla1_1";     
  
  craft_description = "auto";  
 };  
   
 class uni67 {  
  name = "Guerilla Outfit (Plain, Dark)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_OG_Guerilla2_1";     
  
  craft_description = "auto";  
 };  
   
 class uni68 {  
  name = "Guerilla Outfit (Pattern)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_OG_Guerilla2_2";     
  
  craft_description = "auto";  
 };  
   
 class uni69 {  
  name = "Guerilla Outfit (Plain, Light)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_OG_Guerilla2_3";     
  
  craft_description = "auto";  
 };  
   
 class uni70 {  
  name = "Guerilla Smocks";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_OG_Guerilla3_1";     
  
  craft_description = "auto";  
 };  
   
 class uni71 {  
  name = "Guerilla Smocks 1";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_OG_Guerilla3_2";     
  
  craft_description = "auto";  
 };  
   
 class uni72 {  
  name = "Guerilla Uniform";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_OG_leader";     
  
  craft_description = "auto";  
 };  
   
 class uni73 {  
  name = "Worn Clothes";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Poor_1";     
  
  craft_description = "auto";  
 };  
   
 class uni74 {  
  name = "Worn Clothes";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Poor_2";     
  
  craft_description = "auto";  
 };  
   
 class uni75 {  
  name = "Scavenger Clothes (Light)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Scavenger_1";     
  
  craft_description = "auto";  
 };  
   
 class uni76 {  
  name = "Scavenger Clothes (Dark)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Scavenger_2";     
  
  craft_description = "auto";  
 };  
   
 class uni77 {  
  name = "Farmer Clothes";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Farmer";     
  
  craft_description = "auto";  
 };  
   
 class uni78 {  
  name = "Fishing Clothes";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Fisherman";     
  
  craft_description = "auto";  
 };  
   
 class uni79 {  
  name = "Worker Clothes";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_WorkerOveralls";     
  
  craft_description = "auto";  
 };  
   
 class uni80 {  
  name = "Fishing Overalls";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_FishermanOveralls";     
  
  craft_description = "auto";  
 };  
   
 class uni81 {  
  name = "Worker Coveralls";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_WorkerCoveralls";     
  
  craft_description = "auto";  
 };  
   
 class uni82 {  
  name = "Hunting Clothes";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_HunterBody_grn";     
  
  craft_description = "auto";  
 };  
   
 class uni83 {  
  name = "Hunting Clothes (Brown)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_HunterBody_brn";     
  
  craft_description = "auto";  
 };  
   
 class uni84 {  
  name = "Commoner Clothes 4";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Commoner2_1";     
  
  craft_description = "auto";  
 };  
   
 class uni85 {  
  name = "Commoner Clothes 5";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Commoner2_2";     
  
  craft_description = "auto";  
 };  
   
 class uni86 {  
  name = "Commoner Clothes 6";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Commoner2_3";     
  
  craft_description = "auto";  
 };  
   
 class uni87 {  
  name = "Clerical Robes";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_PriestBody";     
  
  craft_description = "auto";  
 };  
   
 class uni88 {  
  name = "Worn Shorts 1";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Poor_shorts_1";     
  
  craft_description = "auto";  
 };  
   
 class uni89 {  
  name = "Worn Shorts 2";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Poor_shorts_2";     
  
  craft_description = "auto";  
 };  
   
 class uni90 {  
  name = "Commoner Shorts";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Commoner_shorts";     
  
  craft_description = "auto";  
 };  
   
 class uni91 {  
  name = "Surfer Outfit 1";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_ShirtSurfer_shorts";     
  
  craft_description = "auto";  
 };  
   
 class uni92 {  
  name = "Surfer Outfit 2";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_TeeSurfer_shorts_1";     
  
  craft_description = "auto";  
 };  
   
 class uni93 {  
  name = "Surfer Outfit 3";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_TeeSurfer_shorts_2";     
  
  craft_description = "auto";  
 };  
   
 class uni94 {  
  name = "CTRG Combat Uniform";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_B_CTRG_1";     
  
  craft_description = "auto";  
 };  
   
 class uni95 {  
  name = "CTRG Combat Uniform (Tee)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_B_CTRG_2";     
  
  craft_description = "auto";  
 };  
   
 class uni96 {  
  name = "CTRG Combat Uniform (Rolled-up)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_B_CTRG_3";     
  
  craft_description = "auto";  
 };  
   
 class uni97 {  
  name = "Survival Fatigues";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_B_survival_uniform";     
  
  craft_description = "auto";  
 };  
   
 class uni98 {  
  name = "Worn Combat Fatigues (Kerry)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_I_G_Story_Protagonist_F";     
  
  craft_description = "auto";  
 };  
   
 class uni99 {  
  name = "Combat Fatigues (Stavrou)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_I_G_resistanceLeader_F";     
  
  craft_description = "auto";  
 };  
   
 class uni100 {  
  name = "Journalist Clothes";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Journalist";     
  
  craft_description = "auto";  
 };  
   
 class uni101 {  
  name = "Scientist Clothes";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Scientist";     
  
  craft_description = "auto";  
 };  
   
 class uni102 {  
  name = "Underwear 1";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_NikosAgedBody";     
  
  craft_description = "auto";  
 };  
   
 class uni103 {  
  name = "VR Suit [NATO]";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_B_Protagonist_VR";     
  
  craft_description = "auto";  
 };  
   
 class uni104 {  
  name = "VR Suit [CSAT]";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_O_Protagonist_VR";     
  
  craft_description = "auto";  
 };  
   
 class uni105 {  
  name = "VR Suit [AAF]";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_I_Protagonist_VR";     
  
  craft_description = "auto";  
 };  
   
 class uni106 {  
  name = "Guerilla Apparel";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_IG_Guerrilla_6_1";     
  
  craft_description = "auto";  
 };  
   
 class uni107 {  
  name = "Guerilla Apparel";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_BG_Guerrilla_6_1";     
  
  craft_description = "auto";  
 };  
   
 class uni108 {  
  name = "Guerilla Apparel";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_OG_Guerrilla_6_1";     
  
  craft_description = "auto";  
 };  
   
 class uni109 {  
  name = "VR Entity Suit";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_B_Soldier_VR";     
  
  craft_description = "auto";  
 };  
   
 class uni110 {  
  name = "VR Entity Suit";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_O_Soldier_VR";     
  
  craft_description = "auto";  
 };  
   
 class uni111 {  
  name = "VR Entity Suit";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_I_Soldier_VR";     
  
  craft_description = "auto";  
 };  
   
 class uni112 {  
  name = "VR Entity Suit";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Soldier_VR";     
  
  craft_description = "auto";  
 };  
   
 class uni113 {  
  name = "Driver Coverall (Fuel)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Driver_1";     
  
  craft_description = "auto";  
 };  
   
 class uni114 {  
  name = "Driver Coverall (Bluking)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Driver_2";     
  
  craft_description = "auto";  
 };  
   
 class uni115 {  
  name = "Driver Coverall (Redstone)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Driver_3";     
  
  craft_description = "auto";  
 };  
   
 class uni116 {  
  name = "Driver Coverall (Vrana)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Driver_4";     
  
  craft_description = "auto";  
 };  
   
 class uni117 {  
  name = "Marshal Clothes";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_Marshal";     
  
  craft_description = "auto";  
 };  
   
 class uni118 {  
  name = "Driver Coverall (Black)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Driver_1_black";     
  
  craft_description = "auto";  
 };  
   
 class uni119 {  
  name = "Driver Coverall (Blue)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Driver_1_blue";     
  
  craft_description = "auto";  
 };  
   
 class uni120 {  
  name = "Driver Coverall (Green)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Driver_1_green";     
  
  craft_description = "auto";  
 };  
   
 class uni121 {  
  name = "Driver Coverall (Red)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Driver_1_red";     
  
  craft_description = "auto";  
 };  
   
 class uni122 {  
  name = "Driver Coverall (White)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Driver_1_white";     
  
  craft_description = "auto";  
 };  
   
 class uni123 {  
  name = "Driver Coverall (Yellow)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Driver_1_yellow";     
  
  craft_description = "auto";  
 };  
   
 class uni124 {  
  name = "Driver Coverall (Orange)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Driver_1_orange";     
  
  craft_description = "auto";  
 };  
   
 class uni125 {  
  name = "Full Ghillie (Lush) [NATO]";  
  allowedClasses[] = {{"Sniper",5}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_B_FullGhillie_lsh";     
  
  craft_description = "auto";  
 };  
   
 class uni126 {  
  name = "Full Ghillie (Semi-Arid) [NATO]";  
  allowedClasses[] = {{"Sniper",5}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_B_FullGhillie_sard";     
  
  craft_description = "auto";  
 };  
   
 class uni127 {  
  name = "Full Ghillie (Arid) [NATO]";  
  allowedClasses[] = {{"Sniper",5}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_B_FullGhillie_ard";     
  
  craft_description = "auto";  
 };  
   
 class uni128 {  
  name = "Full Ghillie (Lush) [CSAT]";  
  allowedClasses[] = {{"Sniper",5}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_O_FullGhillie_lsh";     
  
  craft_description = "auto";  
 };  
   
 class uni129 {  
  name = "Full Ghillie (Semi-Arid) [CSAT]";  
  allowedClasses[] = {{"Sniper",5}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_O_FullGhillie_sard";     
  
  craft_description = "auto";  
 };  
   
 class uni130 {  
  name = "Full Ghillie (Arid) [CSAT]";  
  allowedClasses[] = {{"Sniper",5}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_O_FullGhillie_ard";     
  
  craft_description = "auto";  
 };  
   
 class uni131 {  
  name = "Full Ghillie (Lush) [AAF]";  
  allowedClasses[] = {{"Sniper",5}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_I_FullGhillie_lsh";     
  
  craft_description = "auto";  
 };  
   
 class uni132 {  
  name = "Full Ghillie (Semi-Arid) [AAF]";  
  allowedClasses[] = {{"Sniper",5}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_I_FullGhillie_sard";     
  
  craft_description = "auto";  
 };  
   
 class uni133 {  
  name = "Full Ghillie (Arid) [AAF]";  
  allowedClasses[] = {{"Sniper",5}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_I_FullGhillie_ard";     
  
  craft_description = "auto";  
 };  
   
 class uni134 {  
  name = "Invisible Uniform";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_VirtualMan_F";     
  
  craft_description = "auto";  
 };  
   
 class uni135 {  
  name = "Combat Fatigues (Tropic)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_B_T_Soldier_F";     
  
  craft_description = "auto";  
 };  
   
 class uni136 {  
  name = "Combat Fatigues (Tropic, Tee)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_B_T_Soldier_AR_F";     
  
  craft_description = "auto";  
 };  
   
 class uni137 {  
  name = "Recon Fatigues (Tropic)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_B_T_Soldier_SL_F";     
  
  craft_description = "auto";  
 };  
   
 class uni138 {  
  name = "Ghillie Suit (Tropic) [NATO]";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_B_T_Sniper_F";     
  
  craft_description = "auto";  
 };  
   
 class uni139 {  
  name = "Full Ghillie (Jungle) [NATO]";  
  allowedClasses[] = {{"Sniper",5}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_B_T_FullGhillie_tna_F";     
  
  craft_description = "auto";  
 };  
   
 class uni140 {  
  name = "CTRG Stealth Uniform";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_B_CTRG_Soldier_F";     
  
  craft_description = "auto";  
 };  
   
 class uni141 {  
  name = "CTRG Stealth Uniform (Tee)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_B_CTRG_Soldier_2_F";     
  
  craft_description = "auto";  
 };  
   
 class uni142 {  
  name = "CTRG Stealth Uniform (Rolled-up)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_B_CTRG_Soldier_3_F";     
  
  craft_description = "auto";  
 };  
   
 class uni143 {  
  name = "Gendarmerie Uniform";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_B_GEN_Soldier_F";     
  
  craft_description = "auto";  
 };  
   
 class uni144 {  
  name = "Gendarmerie Commander Uniform";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_B_GEN_Commander_F";     
  
  craft_description = "auto";  
 };  
   
 class uni145 {  
  name = "Fatigues (Green Hex) [CSAT]";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_O_T_Soldier_F";     
  
  craft_description = "auto";  
 };  
   
 class uni146 {  
  name = "Officer Fatigues (Green Hex) [CSAT]";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_O_T_Officer_F";     
  
  craft_description = "auto";  
 };  
   
 class uni147 {  
  name = "Ghillie Suit (Green Hex) [CSAT]";  
  allowedClasses[] = {{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_O_T_Sniper_F";     
  
  craft_description = "auto";  
 };  
   
 class uni148 {  
  name = "Full Ghillie (Jungle) [CSAT]";  
  allowedClasses[] = {{"Sniper",5}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_O_T_FullGhillie_tna_F";     
  
  craft_description = "auto";  
 };  
   
 class uni149 {  
  name = "Special Purpose Suit (Green Hex)";  
  allowedClasses[] = {{"Assault",4},{"Medic",4},{"Engineer",4},{"Sniper",4}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_O_V_Soldier_Viper_F";     
  
  craft_description = "auto";  
 };  
   
 class uni150 {  
  name = "Special Purpose Suit (Hex)";  
  allowedClasses[] = {{"Assault",4},{"Medic",4},{"Engineer",4},{"Sniper",4}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_O_V_Soldier_Viper_hex_F";     
  
  craft_description = "auto";  
 };  
   
 class uni151 {  
  name = "Paramilitary Garb (Tee)";  
  allowedClasses[] = {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};    
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_I_C_Soldier_Para_1_F";     
  
  craft_description = "auto";  
 };  
   
 class uni152 {  
  name = "Paramilitary Garb (Jacket)";  
  allowedClasses[] = {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_I_C_Soldier_Para_2_F";     
  
  craft_description = "auto";  
 };  
   
 class uni153 {  
  name = "Paramilitary Garb (Shirt)";  
  allowedClasses[] = {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_I_C_Soldier_Para_3_F";     
  
  craft_description = "auto";  
 };  
   
 class uni154 {  
  name = "Paramilitary Garb (Tank Top)";  
  allowedClasses[] = {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_I_C_Soldier_Para_4_F";     
  
  craft_description = "auto";  
 };  
   
 class uni155 {  
  name = "Paramilitary Garb (Shorts)";  
  allowedClasses[] = {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_I_C_Soldier_Para_5_F";     
  
  craft_description = "auto";  
 };  
   
 class uni156 {  
  name = "Bandit Clothes (Polo Shirt)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_I_C_Soldier_Bandit_1_F";     
  
  craft_description = "auto";  
 };  
   
 class uni157 {  
  name = "Bandit Clothes (Skull)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_I_C_Soldier_Bandit_2_F";     
  
  craft_description = "auto";  
 };  
   
 class uni158 {  
  name = "Bandit Clothes (Tee)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_I_C_Soldier_Bandit_3_F";     
  
  craft_description = "auto";  
 };  
   
 class uni159 {  
  name = "Bandit Clothes (Checkered)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_I_C_Soldier_Bandit_4_F";     
  
  craft_description = "auto";  
 };  
   
 class uni160 {  
  name = "Bandit Clothes (Tank Top)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_I_C_Soldier_Bandit_5_F";     
  
  craft_description = "auto";  
 };  
   
 class uni161 {  
  name = "Syndikat Uniform";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_I_C_Soldier_Camo_F";     
  
  craft_description = "auto";  
 };  
   
 class uni162 {  
  name = "Sport Clothes (Beach)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_man_sport_1_F";     
  
  craft_description = "auto";  
 };  
   
 class uni163 {  
  name = "Sport Clothes (Orange)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_man_sport_2_F";     
  
  craft_description = "auto";  
 };  
   
 class uni164 {  
  name = "Sport Clothes (Blue)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_man_sport_3_F";     
  
  craft_description = "auto";  
 };  
   
 class uni165 {  
  name = "Casual Clothes (Navy)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Man_casual_1_F";     
  
  craft_description = "auto";  
 };  
   
 class uni166 {  
  name = "Casual Clothes (Blue)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Man_casual_2_F";     
  
  craft_description = "auto";  
 };  
   
 class uni167 {  
  name = "Casual Clothes (Green)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Man_casual_3_F";     
  
  craft_description = "auto";  
 };  
   
 class uni168 {  
  name = "Summer Clothes (Sky)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Man_casual_4_F";     
  
  craft_description = "auto";  
 };  
   
 class uni169 {  
  name = "Summer Clothes (Yellow)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Man_casual_5_F";     
  
  craft_description = "auto";  
 };  
   
 class uni170 {  
  name = "Summer Clothes (Red)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_C_Man_casual_6_F";     
  
  craft_description = "auto";  
 };  
   
 class uni171 {  
  name = "CTRG Urban Uniform";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_B_CTRG_Soldier_urb_1_F";     
  
  craft_description = "auto";  
 };  
   
 class uni172 {  
  name = "CTRG Urban Uniform (Tee)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_B_CTRG_Soldier_urb_2_F";     
  
  craft_description = "auto";  
 };  
   
 class uni173 {  
  name = "CTRG Urban Uniform (Rolled-up)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "U_B_CTRG_Soldier_urb_3_F";     
  
  craft_description = "auto";  
 };  
 