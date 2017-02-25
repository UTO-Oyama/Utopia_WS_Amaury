/**
_string = ""; 
_cnter = 0; 
{ 
 _string = _string + format[" 
 class muzz%1 { 
  name = ""%2""; 
  allowedClasses[] = {{""Assault"",1},{""Medic"",1},{""Engineer"",1},{""Sniper"",1}}; 
  craftingTime = 10;     
 
  required[] = {{""metal"",2}};  
  result = ""%3"";    
 
  craft_description = ""auto""; 
 }; 
 ",_cnter,getText (_x >> "displayName"),configName _x]; 
 _cnter = _cnter + 1; 
}foreach ("(configName _x) select [0,7] == ""muzzle_""" configClasses (configFile >> "CfgWeapons")); 
copyToClipboard _string; 
**/

  
 class muzz0 {  
  name = "Sound Suppr. (6.5  mm)";  
  allowedClasses[] =  {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"metal",2}};   
  result = "muzzle_snds_H";     
  
  craft_description = "auto";  
 };  
   
 class muzz1 {  
  name = "Sound Suppr. (9  mm)";  
  allowedClasses[] =  {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"metal",2}};   
  result = "muzzle_snds_L";     
  
  craft_description = "auto";  
 };  
   
 class muzz2 {  
  name = "Sound Suppr. (5.56 mm)";  
  allowedClasses[] =  {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"metal",2}};   
  result = "muzzle_snds_M";     
  
  craft_description = "auto";  
 };  
   
 class muzz3 {  
  name = "Sound Suppr. (7.62  mm)";  
  allowedClasses[] =  {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"metal",2}};   
  result = "muzzle_snds_B";     
  
  craft_description = "auto";  
 };  
   
 class muzz4 {  
  name = "Sound Suppr. LMG (6.5  mm)";  
  allowedClasses[] = {{"Medic",3}};  
  craftingTime = 10;      
  
  required[] = {{"metal",2}};   
  result = "muzzle_snds_H_MG";     
  
  craft_description = "auto";  
 };  
   
 class muzz5 {  
  name = "Sound Suppr. LMG (6.5  mm)";  
  allowedClasses[] = {{"Medic",3}};  
  craftingTime = 10;      
  
  required[] = {{"metal",2}};   
  result = "muzzle_snds_H_SW";     
  
  craft_description = "auto";  
 };  
   
 class muzz6 {  
  name = "Sound Suppr. (.45 ACP)";  
  allowedClasses[] =  {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"metal",2}};   
  result = "muzzle_snds_acp";     
  
  craft_description = "auto";  
 };  
   
 class muzz7 {  
  name = "Sound Suppr. (.338, Black)";  
  allowedClasses[] =  {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"metal",2}};   
  result = "muzzle_snds_338_black";     
  
  craft_description = "auto";  
 };  
   
 class muzz8 {  
  name = "Sound Suppr. (.338, Green)";  
  allowedClasses[] =  {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"metal",2}};   
  result = "muzzle_snds_338_green";     
  
  craft_description = "auto";  
 };  
   
 class muzz9 {  
  name = "Sound Suppr. (.338, Sand)";  
  allowedClasses[] =  {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"metal",2}};   
  result = "muzzle_snds_338_sand";     
  
  craft_description = "auto";  
 };  
   
 class muzz10 {  
  name = "Sound Suppr. (9.3mm, Black)";  
  allowedClasses[] =  {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"metal",2}};   
  result = "muzzle_snds_93mmg";     
  
  craft_description = "auto";  
 };  
   
 class muzz11 {  
  name = "Sound Suppr. (9.3mm, Tan)";  
  allowedClasses[] =  {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"metal",2}};   
  result = "muzzle_snds_93mmg_tan";     
  
  craft_description = "auto";  
 };  
   
 class muzz12 {  
  name = "Sound Suppr. (6.5 mm, Khaki)";  
  allowedClasses[] =  {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"metal",2}};   
  result = "muzzle_snds_H_khk_F";     
  
  craft_description = "auto";  
 };  
   
 class muzz13 {  
  name = "Sound Suppr. (6.5 mm, Sand)";  
  allowedClasses[] =  {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"metal",2}};   
  result = "muzzle_snds_H_snd_F";     
  
  craft_description = "auto";  
 };  
   
 class muzz14 {  
  name = "Sound Suppr. (5.56 mm, Khaki)";  
  allowedClasses[] =  {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"metal",2}};   
  result = "muzzle_snds_m_khk_F";     
  
  craft_description = "auto";  
 };  
   
 class muzz15 {  
  name = "Sound Suppr. (5.56 mm, Sand)";  
  allowedClasses[] =  {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"metal",2}};   
  result = "muzzle_snds_m_snd_F";     
  
  craft_description = "auto";  
 };  
   
 class muzz16 {  
  name = "Stealth Sound Suppr. (5.8 mm, Black)";  
  allowedClasses[] =  {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"metal",2}};   
  result = "muzzle_snds_58_blk_F";     
  
  craft_description = "auto";  
 };  
   
 class muzz17 {  
  name = "Stealth Sound Suppr. (5.8 mm, Green Hex)";  
  allowedClasses[] =  {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"metal",2}};   
  result = "muzzle_snds_58_wdm_F";     
  
  craft_description = "auto";  
 };  
   
 class muzz18 {  
  name = "Stealth Sound Suppr. (5.8 mm, Green Hex)";  
  allowedClasses[] =  {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"metal",2}};   
  result = "muzzle_snds_58_ghex_F";     
  
  craft_description = "auto";  
 };  
   
 class muzz19 {  
  name = "Stealth Sound Suppr. (5.8 mm, Hex)";  
  allowedClasses[] =  {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"metal",2}};   
  result = "muzzle_snds_58_hex_F";     
  
  craft_description = "auto";  
 };  
   
 class muzz20 {  
  name = "Sound Suppr. (7.62 mm, Khaki)";  
  allowedClasses[] =  {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"metal",2}};   
  result = "muzzle_snds_B_khk_F";     
  
  craft_description = "auto";  
 };  
   
 class muzz21 {  
  name = "Sound Suppr. (7.62 mm, Sand)";  
  allowedClasses[] =  {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"metal",2}};   
  result = "muzzle_snds_B_snd_F";     
  
  craft_description = "auto";  
 };  
   
 class muzz22 {  
  name = "Stealth Sound Suppr. (6.5 mm, Black)";  
  allowedClasses[] =  {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"metal",2}};   
  result = "muzzle_snds_65_TI_blk_F";     
  
  craft_description = "auto";  
 };  
   
 class muzz23 {  
  name = "Stealth Sound Suppr. (6.5 mm, Hex)";  
  allowedClasses[] =  {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"metal",2}};   
  result = "muzzle_snds_65_TI_hex_F";     
  
  craft_description = "auto";  
 };  
   
 class muzz24 {  
  name = "Stealth Sound Suppr. (6.5 mm, Green Hex)";  
  allowedClasses[] =  {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 10;      
  
  required[] = {{"metal",2}};   
  result = "muzzle_snds_65_TI_ghex_F";     
  
  craft_description = "auto";  
 };  
   
 class muzz25 {  
  name = "Sound Suppr. LMG (6.5 mm, Black)";  
  allowedClasses[] = {{"Medic",4}}; 
  craftingTime = 10;      
  
  required[] = {{"metal",2}};   
  result = "muzzle_snds_H_MG_blk_F";     
  
  craft_description = "auto";  
 };  
   
 class muzz26 {  
  name = "Sound Suppr. LMG (6.5 mm, Khaki)";  
  allowedClasses[] = {{"Medic",4}}; 
  craftingTime = 10;      
  
  required[] = {{"metal",2}};   
  result = "muzzle_snds_H_MG_khk_F";     
  
  craft_description = "auto";  
 };  
