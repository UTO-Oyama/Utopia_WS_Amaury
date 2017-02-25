/**
_string = ""; 
_cnter = 0; 
{ 
 _string = _string + format[" 
 class build_2%1 { 
  name = ""%2""; 
  allowedClasses[] = {{""Assault"",2},{""Medic"",2},{""Engineer"",2},{""Sniper"",2}}; 
  craftingTime = 60;     
 
  required[] = {{""sand"",4},{""stone"",2}};  
  result = ""%3"";    
 
  craft_description = """"; 
 }; 
 ",_cnter,getText (_x >> "displayName"),configName _x]; 
 _cnter = _cnter + 1; 
}foreach ("configName _x select [0,5] == 'Land_' && (configName _x) isKindOf 'NonStrategic' && (configName _x) isKindOf ['SportsGrounds_base_F',configFile >> 'CfgVehicles']" configClasses (configFile >> "CfgVehicles")); 
copyToClipboard _string; 
**/


  
 class build0 {  
  name = "H-barrier (Block)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_HBarrier_1_F";     
  
  craft_description = "";  
 };  
   
 class build1 {  
  name = "H-barrier (3 Blocks)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_HBarrier_3_F";     
  
  craft_description = "";  
 };  
   
 class build2 {  
  name = "H-barrier (5 Blocks)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_HBarrier_5_F";     
  
  craft_description = "";  
 };  
   
 class build3 {  
  name = "H-barrier (Big, 4 Blocks)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_HBarrierBig_F";     
  
  craft_description = "";  
 };  
   
 class build4 {  
  name = "H-barrier (Big, 4 Blocks)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_HBarrier_Big_F";     
  
  craft_description = "";  
 };  
   
 class build5 {  
  name = "H-barrier Watchtower";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_HBarrierTower_F";     
  
  craft_description = "";  
 };  
   
 class build6 {  
  name = "H-barrier Wall (Corner)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_HBarrierWall_corner_F";     
  
  craft_description = "";  
 };  
   
 class build7 {  
  name = "H-barrier Corridor";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_HBarrierWall_corridor_F";     
  
  craft_description = "";  
 };  
   
 class build8 {  
  name = "H-barrier Wall (Short)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_HBarrierWall4_F";     
  
  craft_description = "";  
 };  
   
 class build9 {  
  name = "H-barrier Wall (Long)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_HBarrierWall6_F";     
  
  craft_description = "";  
 };  
   
 class build10 {  
  name = "H-barrier (Big, 4 Blocks, Green)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_HBarrier_01_big_4_green_F";     
  
  craft_description = "";  
 };  
   
 class build11 {  
  name = "H-barrier Watchtower (Green)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_HBarrier_01_big_tower_green_F";     
  
  craft_description = "";  
 };  
   
 class build12 {  
  name = "H-barrier (Block, Green)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_HBarrier_01_line_1_green_F";     
  
  craft_description = "";  
 };  
   
 class build13 {  
  name = "H-barrier (3 Blocks, Green)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_HBarrier_01_line_3_green_F";     
  
  craft_description = "";  
 };  
   
 class build14 {  
  name = "H-barrier (5 Blocks, Green)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_HBarrier_01_line_5_green_F";     
  
  craft_description = "";  
 };  
   
 class build15 {  
  name = "H-barrier Wall (Short, Green)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_HBarrier_01_wall_4_green_F";     
  
  craft_description = "";  
 };  
   
 class build16 {  
  name = "H-barrier Wall (Long, Green)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_HBarrier_01_wall_6_green_F";     
  
  craft_description = "";  
 };  
   
 class build17 {  
  name = "H-barrier Wall (Corner, Green)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_HBarrier_01_wall_corner_green_F";     
  
  craft_description = "";  
 };  
   
 class build18 {  
  name = "H-barrier Corridor (Green)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_HBarrier_01_wall_corridor_green_F";     
  
  craft_description = "";  
 };  
 

 class build_20 {  
  name = "Basketball Basket";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_BC_Basket_F";     
  
  craft_description = "";  
 };  
   
 class build_21 {  
  name = "Basketball Court";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_BC_Court_F";     
  
  craft_description = "";  
 };  
   
 class build_22 {  
  name = "Goal";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_Goal_F";     
  
  craft_description = "";  
 };  
   
 class build_23 {  
  name = "Tribune";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_Tribune_F";     
  
  craft_description = "";  
 };  
   
 class build_24 {  
  name = "Finish Gate (Narrow)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_FinishGate_01_narrow_F";     
  
  craft_description = "";  
 };  
   
 class build_25 {  
  name = "Finish Gate (Wide)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_FinishGate_01_wide_F";     
  
  craft_description = "";  
 };  
   
 class build_26 {  
  name = "Plastic Barrier";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_F";     
  
  craft_description = "";  
 };  
   
 class build_27 {  
  name = "Plastic Barrier (Small, 2)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_line_x2_F";     
  
  craft_description = "";  
 };  
   
 class build_28 {  
  name = "Plastic Barrier (Small, 2, Sharp 15, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_sharp15L_x2_F";     
  
  craft_description = "";  
 };  
   
 class build_29 {  
  name = "Plastic Barrier (Small, 2, Sharp 15, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_sharp15R_x2_F";     
  
  craft_description = "";  
 };  
   
 class build_210 {  
  name = "Plastic Barrier (Small, 2, Sharp 22.5, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_sharp22L_x2_F";     
  
  craft_description = "";  
 };  
   
 class build_211 {  
  name = "Plastic Barrier (Small, 2, Sharp 22.5, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_sharp22R_x2_F";     
  
  craft_description = "";  
 };  
   
 class build_212 {  
  name = "Plastic Barrier (Small, 2, Sharp 30, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_sharp30L_x2_F";     
  
  craft_description = "";  
 };  
   
 class build_213 {  
  name = "Plastic Barrier (Small, 2, Sharp 30, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_sharp30R_x2_F";     
  
  craft_description = "";  
 };  
   
 class build_214 {  
  name = "Plastic Barrier (Small, 2, Sharp 45, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_sharp45L_x2_F";     
  
  craft_description = "";  
 };  
   
 class build_215 {  
  name = "Plastic Barrier (Small, 2, Sharp 45, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_sharp45R_x2_F";     
  
  craft_description = "";  
 };  
   
 class build_216 {  
  name = "Plastic Barrier (Small, 2, Sharp 60, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_sharp60L_x2_F";     
  
  craft_description = "";  
 };  
   
 class build_217 {  
  name = "Plastic Barrier (Small, 2, Sharp 60, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_sharp60R_x2_F";     
  
  craft_description = "";  
 };  
   
 class build_218 {  
  name = "Plastic Barrier (Small, 4)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_line_x4_F";     
  
  craft_description = "";  
 };  
   
 class build_219 {  
  name = "Plastic Barrier (Small, 4, Round 15, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_round15L_x4_F";     
  
  craft_description = "";  
 };  
   
 class build_220 {  
  name = "Plastic Barrier (Small, 4, Round 15, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_round15R_x4_F";     
  
  craft_description = "";  
 };  
   
 class build_221 {  
  name = "Plastic Barrier (Small, 4, Round 22.5, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_round22L_x4_F";     
  
  craft_description = "";  
 };  
   
 class build_222 {  
  name = "Plastic Barrier (Small, 4, Round 22.5, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_round22R_x4_F";     
  
  craft_description = "";  
 };  
   
 class build_223 {  
  name = "Plastic Barrier (Small, 4, Round 30, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_round30L_x4_F";     
  
  craft_description = "";  
 };  
   
 class build_224 {  
  name = "Plastic Barrier (Small, 4, Round 30, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_round30R_x4_F";     
  
  craft_description = "";  
 };  
   
 class build_225 {  
  name = "Plastic Barrier (Small, 4, Round 45, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_round45L_x4_F";     
  
  craft_description = "";  
 };  
   
 class build_226 {  
  name = "Plastic Barrier (Small, 4, Round 45, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_round45R_x4_F";     
  
  craft_description = "";  
 };  
   
 class build_227 {  
  name = "Plastic Barrier (Small, 4, Round 60, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_round60L_x4_F";     
  
  craft_description = "";  
 };  
   
 class build_228 {  
  name = "Plastic Barrier (Small, 4, Round 60, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_round60R_x4_F";     
  
  craft_description = "";  
 };  
   
 class build_229 {  
  name = "Plastic Barrier (Small, 4, Round 90, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_round90L_x4_F";     
  
  craft_description = "";  
 };  
   
 class build_230 {  
  name = "Plastic Barrier (Small, 4, Round 90, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_round90R_x4_F";     
  
  craft_description = "";  
 };  
   
 class build_231 {  
  name = "Plastic Barrier (Small, 4, Round 135, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_round135L_x4_F";     
  
  craft_description = "";  
 };  
   
 class build_232 {  
  name = "Plastic Barrier (Small, 4, Round 135, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_round135R_x4_F";     
  
  craft_description = "";  
 };  
   
 class build_233 {  
  name = "Plastic Barrier (Small, 4, Round 180, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_round180L_x4_F";     
  
  craft_description = "";  
 };  
   
 class build_234 {  
  name = "Plastic Barrier (Small, 4, Round 180, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_round180R_x4_F";     
  
  craft_description = "";  
 };  
   
 class build_235 {  
  name = "Plastic Barrier (Small, 4, Sharp 15, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_sharp15L_x4_F";     
  
  craft_description = "";  
 };  
   
 class build_236 {  
  name = "Plastic Barrier (Small, 4, Sharp 15, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_sharp15R_x4_F";     
  
  craft_description = "";  
 };  
   
 class build_237 {  
  name = "Plastic Barrier (Small, 4, Sharp 22.5, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_sharp22L_x4_F";     
  
  craft_description = "";  
 };  
   
 class build_238 {  
  name = "Plastic Barrier (Small, 4, Sharp 22.5, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_sharp22R_x4_F";     
  
  craft_description = "";  
 };  
   
 class build_239 {  
  name = "Plastic Barrier (Small, 4, Sharp 30, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_sharp30L_x4_F";     
  
  craft_description = "";  
 };  
   
 class build_240 {  
  name = "Plastic Barrier (Small, 4, Sharp 30, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_sharp30R_x4_F";     
  
  craft_description = "";  
 };  
   
 class build_241 {  
  name = "Plastic Barrier (Small, 4, Sharp 45, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_sharp45L_x4_F";     
  
  craft_description = "";  
 };  
   
 class build_242 {  
  name = "Plastic Barrier (Small, 4, Sharp 45, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_sharp45R_x4_F";     
  
  craft_description = "";  
 };  
   
 class build_243 {  
  name = "Plastic Barrier (Small, 4, Sharp 60, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_sharp60L_x4_F";     
  
  craft_description = "";  
 };  
   
 class build_244 {  
  name = "Plastic Barrier (Small, 4, Sharp 60, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_sharp60R_x4_F";     
  
  craft_description = "";  
 };  
   
 class build_245 {  
  name = "Plastic Barrier (Small, 4, Snake 15, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_snake15L_x4_F";     
  
  craft_description = "";  
 };  
   
 class build_246 {  
  name = "Plastic Barrier (Small, 4, Snake 15, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_snake15R_x4_F";     
  
  craft_description = "";  
 };  
   
 class build_247 {  
  name = "Plastic Barrier (Small, 4, Snake 22.5, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_snake22L_x4_F";     
  
  craft_description = "";  
 };  
   
 class build_248 {  
  name = "Plastic Barrier (Small, 4, Snake 22.5, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_snake22R_x4_F";     
  
  craft_description = "";  
 };  
   
 class build_249 {  
  name = "Plastic Barrier (Small, 4, Snake 30, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_snake30L_x4_F";     
  
  craft_description = "";  
 };  
   
 class build_250 {  
  name = "Plastic Barrier (Small, 4, Snake 30, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_snake30R_x4_F";     
  
  craft_description = "";  
 };  
   
 class build_251 {  
  name = "Plastic Barrier (Small, 4, Snake 45, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_snake45L_x4_F";     
  
  craft_description = "";  
 };  
   
 class build_252 {  
  name = "Plastic Barrier (Small, 4, Snake 45, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_snake45R_x4_F";     
  
  craft_description = "";  
 };  
   
 class build_253 {  
  name = "Plastic Barrier (Small, 4, Snake 60, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_snake60L_x4_F";     
  
  craft_description = "";  
 };  
   
 class build_254 {  
  name = "Plastic Barrier (Small, 4, Snake 60, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_snake60R_x4_F";     
  
  craft_description = "";  
 };  
   
 class build_255 {  
  name = "Plastic Barrier (Small, 6)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_line_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_256 {  
  name = "Plastic Barrier (Small, 6, Round 15, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_round15L_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_257 {  
  name = "Plastic Barrier (Small, 6, Round 15, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_round15R_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_258 {  
  name = "Plastic Barrier (Small, 6, Round 22.5, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_round22L_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_259 {  
  name = "Plastic Barrier (Small, 6, Round 22.5, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_round22R_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_260 {  
  name = "Plastic Barrier (Small, 6, Round 30, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_round30L_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_261 {  
  name = "Plastic Barrier (Small, 6, Round 30, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_round30R_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_262 {  
  name = "Plastic Barrier (Small, 6, Round 45, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_round45L_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_263 {  
  name = "Plastic Barrier (Small, 6, Round 45, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_round45R_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_264 {  
  name = "Plastic Barrier (Small, 6, Round 60, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_round60L_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_265 {  
  name = "Plastic Barrier (Small, 6, Round 60, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_round60R_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_266 {  
  name = "Plastic Barrier (Small, 6, Round 90, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_round90L_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_267 {  
  name = "Plastic Barrier (Small, 6, Round 90, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_round90R_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_268 {  
  name = "Plastic Barrier (Small, 6, Round 135, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_round135L_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_269 {  
  name = "Plastic Barrier (Small, 6, Round 135, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_round135R_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_270 {  
  name = "Plastic Barrier (Small, 6, Round 180, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_round180L_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_271 {  
  name = "Plastic Barrier (Small, 6, Round 180, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_round180R_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_272 {  
  name = "Plastic Barrier (Small, 6, Round 270, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_round270L_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_273 {  
  name = "Plastic Barrier (Small, 6, Round 270, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_round270R_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_274 {  
  name = "Plastic Barrier (Small, 6, Sharp 15, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_sharp15L_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_275 {  
  name = "Plastic Barrier (Small, 6, Sharp 15, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_sharp15R_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_276 {  
  name = "Plastic Barrier (Small, 6, Sharp 22.5, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_sharp22L_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_277 {  
  name = "Plastic Barrier (Small, 6, Sharp 22.5, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_sharp22R_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_278 {  
  name = "Plastic Barrier (Small, 6, Sharp 30, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_sharp30L_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_279 {  
  name = "Plastic Barrier (Small, 6, Sharp 30, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_sharp30R_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_280 {  
  name = "Plastic Barrier (Small, 6, Sharp 45, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_sharp45L_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_281 {  
  name = "Plastic Barrier (Small, 6, Sharp 45, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_sharp45R_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_282 {  
  name = "Plastic Barrier (Small, 6, Sharp 60, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_sharp60L_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_283 {  
  name = "Plastic Barrier (Small, 6, Sharp 60, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_sharp60R_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_284 {  
  name = "Plastic Barrier (Small, 6, Snake 15, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_snake15L_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_285 {  
  name = "Plastic Barrier (Small, 6, Snake 15, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_snake15R_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_286 {  
  name = "Plastic Barrier (Small, 6, Snake 22.5, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_snake22L_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_287 {  
  name = "Plastic Barrier (Small, 6, Snake 22.5, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_snake22R_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_288 {  
  name = "Plastic Barrier (Small, 6, Snake 30, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_snake30L_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_289 {  
  name = "Plastic Barrier (Small, 6, Snake 30, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_snake30R_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_290 {  
  name = "Plastic Barrier (Small, 6, Snake 45, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_snake45L_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_291 {  
  name = "Plastic Barrier (Small, 6, Snake 45, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_snake45R_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_292 {  
  name = "Plastic Barrier (Small, 6, Snake 60, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_snake60L_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_293 {  
  name = "Plastic Barrier (Small, 6, Snake 60, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_snake60R_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_294 {  
  name = "Plastic Barrier (Small, 6, Snake 90, Left)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_snake90L_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_295 {  
  name = "Plastic Barrier (Small, 6, Snake 90, Right)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_01_snake90R_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_296 {  
  name = "Plastic Barrier";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_PlasticBarrier_02_F";     
  
  craft_description = "";  
 };  
   
 class build_297 {  
  name = "Gym Bench";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_GymBench_01_F";     
  
  craft_description = "";  
 };  
   
 class build_298 {  
  name = "Gym Rack (Big)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_GymRack_01_F";     
  
  craft_description = "";  
 };  
   
 class build_299 {  
  name = "Gym Rack (Small)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_GymRack_02_F";     
  
  craft_description = "";  
 };  
   
 class build_2100 {  
  name = "Gym Rack (Weight plates)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_GymRack_03_F";     
  
  craft_description = "";  
 };  
   
 class build_2101 {  
  name = "Tire Barrier";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_TyreBarrier_01_F";     
  
  craft_description = "";  
 };  
   
 class build_2102 {  
  name = "Tire Barrier (4)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_TyreBarrier_01_line_x4_F";     
  
  craft_description = "";  
 };  
   
 class build_2103 {  
  name = "Tire Barrier (6)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_TyreBarrier_01_line_x6_F";     
  
  craft_description = "";  
 };  
   
 class build_2104 {  
  name = "Winner's podium";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_WinnersPodium_01_F";     
  
  craft_description = "";  
 };  
   
 class build_2105 {  
  name = "Rugby Goal Posts";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"sand",4},{"stone",2}};   
  result = "Land_RugbyGoal_01_F";     
  
  craft_description = "";  
 };  
 