/**
_string = ""; 
_cnter = 0; 
{ 
 _string = _string + format[" 
 class head%1 { 
  name = ""%2""; 
  allowedClasses[] = {{""Assault"",1},{""Medic"",1},{""Engineer"",1},{""Sniper"",1}}; 
  craftingTime = 10;     
 
  required[] = {{""wearings"",2}};  
  result = ""%3"";    
 
  craft_description = ""auto""; 
 }; 
 ",_cnter,getText (_x >> "displayName"),configName _x]; 
 _cnter = _cnter + 1; 
}foreach ("configName _x select [0,2] == 'H_'" configClasses (configFile >> "CfgWeapons")); 
copyToClipboard _string; 
**/
  
 class head0 {  
  name = "Combat Helmet";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_HelmetB";     
  
  craft_description = "auto";  
 };  
   
 class head1 {  
  name = "Combat Helmet (Camo)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_HelmetB_camo";     
  
  craft_description = "auto";  
 };  
   
 class head2 {  
  name = "Combat Helmet (Spraypaint)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_HelmetB_paint";     
  
  craft_description = "auto";  
 };  
   
 class head3 {  
  name = "Light Combat Helmet";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_HelmetB_light";     
  
  craft_description = "auto";  
 };  
   
 class head4 {  
  name = "Booniehat (Khaki)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Booniehat_khk";     
  
  craft_description = "auto";  
 };  
   
 class head5 {  
  name = "Booniehat (Olive)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Booniehat_oli";     
  
  craft_description = "auto";  
 };  
   
 class head6 {  
  name = "Booniehat (Khaki)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Booniehat_indp";     
  
  craft_description = "auto";  
 };  
   
 class head7 {  
  name = "Booniehat (MTP)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Booniehat_mcamo";     
  
  craft_description = "auto";  
 };  
   
 class head8 {  
  name = "Booniehat (Green)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Booniehat_grn";     
  
  craft_description = "auto";  
 };  
   
 class head9 {  
  name = "Booniehat (Sand)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Booniehat_tan";     
  
  craft_description = "auto";  
 };  
   
 class head10 {  
  name = "Booniehat (Dirty)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Booniehat_dirty";     
  
  craft_description = "auto";  
 };  
   
 class head11 {  
  name = "Booniehat [AAF]";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Booniehat_dgtl";     
  
  craft_description = "auto";  
 };  
   
 class head12 {  
  name = "Booniehat (Headset)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Booniehat_khk_hs";     
  
  craft_description = "auto";  
 };  
   
 class head13 {  
  name = "Combat Helmet (Camo)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_HelmetB_plain_mcamo";     
  
  craft_description = "auto";  
 };  
   
 class head14 {  
  name = "Combat Helmet (Black)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_HelmetB_plain_blk";     
  
  craft_description = "auto";  
 };  
   
 class head15 {  
  name = "Enhanced Combat Helmet";  
  allowedClasses[] = {{"Assault",4},{"Medic",4},{"Engineer",4},{"Sniper",4}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",4},{"metal_plate",2}};  
  result = "H_HelmetSpecB";     
  
  craft_description = "auto";  
 };  
   
 class head16 {  
  name = "Enhanced Combat Helmet (Grass)";  
  allowedClasses[] = {{"Assault",4},{"Medic",4},{"Engineer",4},{"Sniper",4}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",4},{"metal_plate",2}};  
  result = "H_HelmetSpecB_paint1";     
  
  craft_description = "auto";  
 };  
   
 class head17 {  
  name = "Enhanced Combat Helmet (Desert)";  
  allowedClasses[] = {{"Assault",4},{"Medic",4},{"Engineer",4},{"Sniper",4}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",4},{"metal_plate",2}};  
  result = "H_HelmetSpecB_paint2";     
  
  craft_description = "auto";  
 };  
   
 class head18 {  
  name = "Enhanced Combat Helmet (Black)";  
  allowedClasses[] = {{"Assault",4},{"Medic",4},{"Engineer",4},{"Sniper",4}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",4},{"metal_plate",2}};  
  result = "H_HelmetSpecB_blk";     
  
  craft_description = "auto";  
 };  
   
 class head19 {  
  name = "Enhanced Combat Helmet (Snakeskin)";  
  allowedClasses[] = {{"Assault",4},{"Medic",4},{"Engineer",4},{"Sniper",4}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",4},{"metal_plate",2}};  
  result = "H_HelmetSpecB_snakeskin";     
  
  craft_description = "auto";  
 };  
   
 class head20 {  
  name = "Enhanced Combat Helmet (Sand)";  
  allowedClasses[] = {{"Assault",4},{"Medic",4},{"Engineer",4},{"Sniper",4}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",4},{"metal_plate",2}};   
  result = "H_HelmetSpecB_sand";     
  
  craft_description = "auto";  
 };  
   
 class head21 {  
  name = "Modular Helmet";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_HelmetIA";     
  
  craft_description = "auto";  
 };  
   
 class head22 {  
  name = "MICH (Camo)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_HelmetIA_net";     
  
  craft_description = "auto";  
 };  
   
 class head23 {  
  name = "MICH2 (Camo)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_HelmetIA_camo";     
  
  craft_description = "auto";  
 };  
   
 class head24 {  
  name = "Combat Helmet (Kerry)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Helmet_Kerry";     
  
  craft_description = "auto";  
 };  
   
 class head25 {  
  name = "Combat Helmet (Grass)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_HelmetB_grass";     
  
  craft_description = "auto";  
 };  
   
 class head26 {  
  name = "Combat Helmet (Snakeskin)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_HelmetB_snakeskin";     
  
  craft_description = "auto";  
 };  
   
 class head27 {  
  name = "Combat Helmet (Desert)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_HelmetB_desert";     
  
  craft_description = "auto";  
 };  
   
 class head28 {  
  name = "Combat Helmet (Black)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_HelmetB_black";     
  
  craft_description = "auto";  
 };  
   
 class head29 {  
  name = "Combat Helmet (Sand)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_HelmetB_sand";     
  
  craft_description = "auto";  
 };  
   
 class head30 {  
  name = "Cap (Red)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Cap_red";     
  
  craft_description = "auto";  
 };  
   
 class head31 {  
  name = "Cap (Blue)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Cap_blu";     
  
  craft_description = "auto";  
 };  
   
 class head32 {  
  name = "Cap (Olive)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Cap_oli";     
  
  craft_description = "auto";  
 };  
   
 class head33 {  
  name = "Rangemaster Cap";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Cap_headphones";     
  
  craft_description = "auto";  
 };  
   
 class head34 {  
  name = "Cap (Tan)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Cap_tan";     
  
  craft_description = "auto";  
 };  
   
 class head35 {  
  name = "Cap (Black)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Cap_blk";     
  
  craft_description = "auto";  
 };  
   
 class head36 {  
  name = "Cap (CMMG)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Cap_blk_CMMG";     
  
  craft_description = "auto";  
 };  
   
 class head37 {  
  name = "Cap [OPFOR]";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Cap_brn_SPECOPS";     
  
  craft_description = "auto";  
 };  
   
 class head38 {  
  name = "Cap (US MTP)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Cap_tan_specops_US";     
  
  craft_description = "auto";  
 };  
   
 class head39 {  
  name = "Cap (UK)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Cap_khaki_specops_UK";     
  
  craft_description = "auto";  
 };  
   
 class head40 {  
  name = "Cap (Green)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Cap_grn";     
  
  craft_description = "auto";  
 };  
   
 class head41 {  
  name = "Cap (BI)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Cap_grn_BI";     
  
  craft_description = "auto";  
 };  
   
 class head42 {  
  name = "Cap [AAF]";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Cap_blk_Raven";     
  
  craft_description = "auto";  
 };  
   
 class head43 {  
  name = "Cap (ION)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Cap_blk_ION";     
  
  craft_description = "auto";  
 };  
   
 class head44 {  
  name = "Cap (Olive, Headset)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Cap_oli_hs";     
  
  craft_description = "auto";  
 };  
   
 class head45 {  
  name = "Cap (Press)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Cap_press";     
  
  craft_description = "auto";  
 };  
   
 class head46 {  
  name = "Cap (US Black)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Cap_usblack";     
  
  craft_description = "auto";  
 };  
   
 class head47 {  
  name = "Cap (Surfer)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Cap_surfer";     
  
  craft_description = "auto";  
 };  
   
 class head48 {  
  name = "Cap (Police)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Cap_police";     
  
  craft_description = "auto";  
 };  
   
 class head49 {  
  name = "Crew Helmet [NATO]";  
  allowedClasses[] = {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2},{"metal_plate",1}};   
  result = "H_HelmetCrew_B";     
  
  craft_description = "auto";  
 };  
   
 class head50 {  
  name = "Crew Helmet [CSAT]";  
  allowedClasses[] = {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2},{"metal_plate",1}};   
  result = "H_HelmetCrew_O";     
  
  craft_description = "auto";  
 };  
   
 class head51 {  
  name = "Crew Helmet [AAF]";  
  allowedClasses[] = {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2},{"metal_plate",1}};   
  result = "H_HelmetCrew_I";     
  
  craft_description = "auto";  
 };  
   
 class head52 {  
  name = "Pilot Helmet [NATO]";  
  allowedClasses[] = {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2},{"metal_plate",1}};   
  result = "H_PilotHelmetFighter_B";     
  
  craft_description = "auto";  
 };  
   
 class head53 {  
  name = "Pilot Helmet [CSAT]";  
  allowedClasses[] = {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2},{"metal_plate",1}};   
  result = "H_PilotHelmetFighter_O";     
  
  craft_description = "auto";  
 };  
   
 class head54 {  
  name = "Pilot Helmet [AAF]";  
  allowedClasses[] = {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2},{"metal_plate",1}};   
  result = "H_PilotHelmetFighter_I";     
  
  craft_description = "auto";  
 };  
   
 class head55 {  
  name = "Heli Pilot Helmet [NATO]";  
  allowedClasses[] = {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2},{"metal_plate",1}};   
  result = "H_PilotHelmetHeli_B";     
  
  craft_description = "auto";  
 };  
   
 class head56 {  
  name = "Heli Pilot Helmet [CSAT]";  
  allowedClasses[] = {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2},{"metal_plate",1}};   
  result = "H_PilotHelmetHeli_O";     
  
  craft_description = "auto";  
 };  
   
 class head57 {  
  name = "Heli Pilot Helmet [AAF]";  
  allowedClasses[] = {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2},{"metal_plate",1}};     
  result = "H_PilotHelmetHeli_I";     
  
  craft_description = "auto";  
 };  
   
 class head58 {  
  name = "Heli Crew Helmet [NATO]";  
  allowedClasses[] = {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2},{"metal_plate",1}};   
  result = "H_CrewHelmetHeli_B";     
  
  craft_description = "auto";  
 };  
   
 class head59 {  
  name = "Heli Crew Helmet [CSAT]";  
  allowedClasses[] = {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2},{"metal_plate",1}};   
  result = "H_CrewHelmetHeli_O";     
  
  craft_description = "auto";  
 };  
   
 class head60 {  
  name = "Heli Crew Helmet [AAF]";  
  allowedClasses[] = {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2},{"metal_plate",1}};   
  result = "H_CrewHelmetHeli_I";     
  
  craft_description = "auto";  
 };  
   
 class head61 {  
  name = "Protector Helmet (Hex)";  
  allowedClasses[] = {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2},{"metal_plate",1}};   
  result = "H_HelmetO_ocamo";     
  
  craft_description = "auto";  
 };  
   
 class head62 {  
  name = "Defender Helmet (Hex)";  
  allowedClasses[] = {{"Assault",5},{"Medic",5},{"Engineer",5},{"Sniper",5}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",4},{"metal_plate",3}};   
  result = "H_HelmetLeaderO_ocamo";     
  
  craft_description = "auto";  
 };  
   
 class head63 {  
  name = "Military Cap (Hex)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_MilCap_ocamo";     
  
  craft_description = "auto";  
 };  
   
 class head64 {  
  name = "Military Cap (MTP)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_MilCap_mcamo";     
  
  craft_description = "auto";  
 };  
   
 class head65 {  
  name = "Military Cap (Urban)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_MilCap_oucamo";     
  
  craft_description = "auto";  
 };  
   
 class head66 {  
  name = "Military Cap (Russia)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_MilCap_rucamo";     
  
  craft_description = "auto";  
 };  
   
 class head67 {  
  name = "Military Cap (Grey)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_MilCap_gry";     
  
  craft_description = "auto";  
 };  
   
 class head68 {  
  name = "Military Cap [AAF]";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_MilCap_dgtl";     
  
  craft_description = "auto";  
 };  
   
 class head69 {  
  name = "Military Cap (Blue)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_MilCap_blue";     
  
  craft_description = "auto";  
 };  
   
 class head70 {  
  name = "Light Combat Helmet (Grass)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_HelmetB_light_grass";     
  
  craft_description = "auto";  
 };  
   
 class head71 {  
  name = "Light Combat Helmet (Snakeskin)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_HelmetB_light_snakeskin";     
  
  craft_description = "auto";  
 };  
   
 class head72 {  
  name = "Light Combat Helmet (Desert)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_HelmetB_light_desert";     
  
  craft_description = "auto";  
 };  
   
 class head73 {  
  name = "Light Combat Helmet (Black)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_HelmetB_light_black";     
  
  craft_description = "auto";  
 };  
   
 class head74 {  
  name = "Light Combat Helmet (Sand)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_HelmetB_light_sand";     
  
  craft_description = "auto";  
 };  
   
 class head75 {  
  name = "Bandana Mask (Black)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_BandMask_blk";     
  
  craft_description = "auto";  
 };  
   
 class head76 {  
  name = "Bandana Mask (Khaki)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_BandMask_khk";     
  
  craft_description = "auto";  
 };  
   
 class head77 {  
  name = "Bandana Mask (Reaper)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_BandMask_reaper";     
  
  craft_description = "auto";  
 };  
   
 class head78 {  
  name = "Bandana Mask (Demon)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_BandMask_demon";     
  
  craft_description = "auto";  
 };  
   
 class head79 {  
  name = "Protector Helmet (Urban)";  
  allowedClasses[] = {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2},{"metal_plate",1}};   
  result = "H_HelmetO_oucamo";     
  
  craft_description = "auto";  
 };  
   
 class head80 {  
  name = "Defender Helmet (Urban)";  
  allowedClasses[] = {{"Assault",5},{"Medic",5},{"Engineer",5},{"Sniper",5}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",4},{"metal_plate",3}};   
  result = "H_HelmetLeaderO_oucamo";     
  
  craft_description = "auto";  
 };  
   
 class head81 {  
  name = "Assassin Helmet (Hex)";  
  allowedClasses[] = {{"Assault",4},{"Medic",4},{"Engineer",4},{"Sniper",4}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",4},{"metal_plate",2}};    
  result = "H_HelmetSpecO_ocamo";     
  
  craft_description = "auto";  
 };  
   
 class head82 {  
  name = "Assassin Helmet (Black)";  
  allowedClasses[] = {{"Assault",4},{"Medic",4},{"Engineer",4},{"Sniper",4}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",4},{"metal_plate",2}};    
  result = "H_HelmetSpecO_blk";     
  
  craft_description = "auto";  
 };  
   
 class head83 {  
  name = "Bandana (Surfer)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Bandanna_surfer";     
  
  craft_description = "auto";  
 };  
   
 class head84 {  
  name = "Bandana (Khaki)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Bandanna_khk";     
  
  craft_description = "auto";  
 };  
   
 class head85 {  
  name = "Bandana (Headset)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Bandanna_khk_hs";     
  
  craft_description = "auto";  
 };  
   
 class head86 {  
  name = "Bandana (Coyote)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Bandanna_cbr";     
  
  craft_description = "auto";  
 };  
   
 class head87 {  
  name = "Bandana (Sage)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Bandanna_sgg";     
  
  craft_description = "auto";  
 };  
   
 class head88 {  
  name = "Bandana (Sand)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Bandanna_sand";     
  
  craft_description = "auto";  
 };  
   
 class head89 {  
  name = "Bandana (Surfer, Black)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Bandanna_surfer_blk";     
  
  craft_description = "auto";  
 };  
   
 class head90 {  
  name = "Bandana (Surfer, Green)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Bandanna_surfer_grn";     
  
  craft_description = "auto";  
 };  
   
 class head91 {  
  name = "Bandana (Black)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Bandanna_gry";     
  
  craft_description = "auto";  
 };  
   
 class head92 {  
  name = "Bandana (Blue)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Bandanna_blu";     
  
  craft_description = "auto";  
 };  
   
 class head93 {  
  name = "Bandana (Woodland)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Bandanna_camo";     
  
  craft_description = "auto";  
 };  
   
 class head94 {  
  name = "Bandana (MTP)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Bandanna_mcamo";     
  
  craft_description = "auto";  
 };  
   
 class head95 {  
  name = "Shemag mask (Khaki)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Shemag_khk";     
  
  craft_description = "auto";  
 };  
   
 class head96 {  
  name = "Shemag mask (Tan)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Shemag_tan";     
  
  craft_description = "auto";  
 };  
   
 class head97 {  
  name = "Shemag (Olive)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Shemag_olive";     
  
  craft_description = "auto";  
 };  
   
 class head98 {  
  name = "Shemag (Olive, Headset)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Shemag_olive_hs";     
  
  craft_description = "auto";  
 };  
   
 class head99 {  
  name = "Shemag (White)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_ShemagOpen_khk";     
  
  craft_description = "auto";  
 };  
   
 class head100 {  
  name = "Shemag (Tan)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_ShemagOpen_tan";     
  
  craft_description = "auto";  
 };  
   
 class head101 {  
  name = "Beret (Black)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Beret_blk";     
  
  craft_description = "auto";  
 };  
   
 class head102 {  
  name = "Beret (Police)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Beret_blk_POLICE";     
  
  craft_description = "auto";  
 };  
   
 class head103 {  
  name = "Beret (Red)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Beret_red";     
  
  craft_description = "auto";  
 };  
   
 class head104 {  
  name = "Beret (Green)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Beret_grn";     
  
  craft_description = "auto";  
 };  
   
 class head105 {  
  name = "Beret (SF)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Beret_grn_SF";     
  
  craft_description = "auto";  
 };  
   
 class head106 {  
  name = "Beret (SAS)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Beret_brn_SF";     
  
  craft_description = "auto";  
 };  
   
 class head107 {  
  name = "Beret [CSAT]";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Beret_ocamo";     
  
  craft_description = "auto";  
 };  
   
 class head108 {  
  name = "Beret [NATO]";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Beret_02";     
  
  craft_description = "auto";  
 };  
   
 class head109 {  
  name = "Beret [NATO] (Colonel)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Beret_Colonel";     
  
  craft_description = "auto";  
 };  
   
 class head110 {  
  name = "Beanie";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Watchcap_blk";     
  
  craft_description = "auto";  
 };  
   
 class head111 {  
  name = "Beanie (Coyote)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Watchcap_cbr";     
  
  craft_description = "auto";  
 };  
   
 class head112 {  
  name = "Beanie (Khaki)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Watchcap_khk";     
  
  craft_description = "auto";  
 };  
   
 class head113 {  
  name = "Beanie (Green)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Watchcap_camo";     
  
  craft_description = "auto";  
 };  
   
 class head114 {  
  name = "Beanie (Sage)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Watchcap_sgg";     
  
  craft_description = "auto";  
 };  
   
 class head115 {  
  name = "Black Turban";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_TurbanO_blk";     
  
  craft_description = "auto";  
 };  
   
 class head116 {  
  name = "Straw Hat";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_StrawHat";     
  
  craft_description = "auto";  
 };  
   
 class head117 {  
  name = "Straw Hat (Dark)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_StrawHat_dark";     
  
  craft_description = "auto";  
 };  
   
 class head118 {  
  name = "Hat (Blue)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Hat_blue";     
  
  craft_description = "auto";  
 };  
   
 class head119 {  
  name = "Hat (Brown)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Hat_brown";     
  
  craft_description = "auto";  
 };  
   
 class head120 {  
  name = "Hat (Camo)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Hat_camo";     
  
  craft_description = "auto";  
 };  
   
 class head121 {  
  name = "Hat (Grey)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Hat_grey";     
  
  craft_description = "auto";  
 };  
   
 class head122 {  
  name = "Hat (Checker)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Hat_checker";     
  
  craft_description = "auto";  
 };  
   
 class head123 {  
  name = "Hat (Tan)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Hat_tan";     
  
  craft_description = "auto";  
 };  
   
 class head124 {  
  name = "Racing Helmet (Fuel)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_RacingHelmet_1_F";     
  
  craft_description = "auto";  
 };  
   
 class head125 {  
  name = "Racing Helmet (Bluking)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_RacingHelmet_2_F";     
  
  craft_description = "auto";  
 };  
   
 class head126 {  
  name = "Racing Helmet (Redstone)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_RacingHelmet_3_F";     
  
  craft_description = "auto";  
 };  
   
 class head127 {  
  name = "Racing Helmet (Vrana)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_RacingHelmet_4_F";     
  
  craft_description = "auto";  
 };  
   
 class head128 {  
  name = "Racing Helmet (Black)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_RacingHelmet_1_black_F";     
  
  craft_description = "auto";  
 };  
   
 class head129 {  
  name = "Racing Helmet (Blue)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_RacingHelmet_1_blue_F";     
  
  craft_description = "auto";  
 };  
   
 class head130 {  
  name = "Racing Helmet (Green)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_RacingHelmet_1_green_F";     
  
  craft_description = "auto";  
 };  
   
 class head131 {  
  name = "Racing Helmet (Red)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_RacingHelmet_1_red_F";     
  
  craft_description = "auto";  
 };  
   
 class head132 {  
  name = "Racing Helmet (White)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_RacingHelmet_1_white_F";     
  
  craft_description = "auto";  
 };  
   
 class head133 {  
  name = "Racing Helmet (Yellow)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_RacingHelmet_1_yellow_F";     
  
  craft_description = "auto";  
 };  
   
 class head134 {  
  name = "Racing Helmet (Orange)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_RacingHelmet_1_orange_F";     
  
  craft_description = "auto";  
 };  
   
 class head135 {  
  name = "Marshal Cap";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Cap_marshal";     
  
  craft_description = "auto";  
 };   
   
 class head137 {  
  name = "Skate Helmet";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Helmet_Skate";     
  
  craft_description = "auto";  
 };  
   
 class head138 {  
  name = "Stealth Combat Helmet";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_HelmetB_TI_tna_F";     
  
  craft_description = "auto";  
 };  
   
 class head139 {  
  name = "Special Purpose Helmet (Hex)";  
  allowedClasses[] = {{"Assault",6},{"Medic",6},{"Engineer",6},{"Sniper",6}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",6},{"metal_plate",4}};   
  result = "H_HelmetO_ViperSP_hex_F";     
  
  craft_description = "auto";  
 };  
   
 class head140 {  
  name = "Special Purpose Helmet (Green Hex)";  
  allowedClasses[] = {{"Assault",6},{"Medic",6},{"Engineer",6},{"Sniper",6}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",6},{"metal_plate",4}};   
  result = "H_HelmetO_ViperSP_ghex_F";     
  
  craft_description = "auto";  
 };  
   
 class head141 {  
  name = "Combat Helmet (Tropic)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_HelmetB_tna_F";     
  
  craft_description = "auto";  
 };  
   
 class head142 {  
  name = "Enhanced Combat Helmet (Tropic)";  
  allowedClasses[] = {{"Assault",4},{"Medic",4},{"Engineer",4},{"Sniper",4}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",4},{"metal_plate",2}};  
  result = "H_HelmetB_Enh_tna_F";     
  
  craft_description = "auto";  
 };  
   
 class head143 {  
  name = "Light Combat Helmet (Tropic)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_HelmetB_Light_tna_F";     
  
  craft_description = "auto";  
 };  
   
 class head144 {  
  name = "Assassin Helmet (Green Hex)";  
  allowedClasses[] = {{"Assault",4},{"Medic",4},{"Engineer",4},{"Sniper",4}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",4},{"metal_plate",2}};  
  result = "H_HelmetSpecO_ghex_F";     
  
  craft_description = "auto";  
 };  
   
 class head145 {  
  name = "Defender Helmet (Green Hex)";  
  allowedClasses[] = {{"Assault",5},{"Medic",5},{"Engineer",5},{"Sniper",5}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",4},{"metal_plate",3}};   
  result = "H_HelmetLeaderO_ghex_F";     
  
  craft_description = "auto";  
 };  
   
 class head146 {  
  name = "Protector Helmet (Green Hex)";  
  allowedClasses[] = {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2},{"metal_plate",1}};  
  result = "H_HelmetO_ghex_F";     
  
  craft_description = "auto";  
 };  
   
 class head147 {  
  name = "Crew Helmet (Green Hex) [CSAT]";  
  allowedClasses[] = {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2},{"metal_plate",1}};  
  result = "H_HelmetCrew_O_ghex_F";     
  
  craft_description = "auto";  
 };  
   
 class head148 {  
  name = "Military Cap (Tropic)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_MilCap_tna_F";     
  
  craft_description = "auto";  
 };  
   
 class head149 {  
  name = "Military Cap (Green Hex)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_MilCap_ghex_F";     
  
  craft_description = "auto";  
 };  
   
 class head150 {  
  name = "Booniehat (Tropic)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Booniehat_tna_F";     
  
  craft_description = "auto";  
 };  
   
 class head151 {  
  name = "Beret (Gendarmerie)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Beret_gen_F";     
  
  craft_description = "auto";  
 };  
   
 class head152 {  
  name = "Military Cap (Gendarmerie)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_MilCap_gen_F";     
  
  craft_description = "auto";  
 };  
   
 class head153 {  
  name = "Cap (Olive)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Cap_oli_Syndikat_F";     
  
  craft_description = "auto";  
 };  
   
 class head154 {  
  name = "Cap (Tan)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Cap_tan_Syndikat_F";     
  
  craft_description = "auto";  
 };  
   
 class head155 {  
  name = "Cap (Black)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Cap_blk_Syndikat_F";     
  
  craft_description = "auto";  
 };  
   
 class head156 {  
  name = "Cap (Green)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 10;      
  
  required[] = {{"wearings",2}};   
  result = "H_Cap_grn_Syndikat_F";     
  
  craft_description = "auto";  
 };  