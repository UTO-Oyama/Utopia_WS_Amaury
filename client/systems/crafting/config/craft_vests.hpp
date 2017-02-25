/**
_string = ""; 
_cnter = 0; 
{ 
 _string = _string + format[" 
 class build%1 { 
  name = ""%2""; 
  allowedClasses[] = {{""Assault"",2},{""Medic"",2},{""Engineer"",2},{""Sniper"",2}}; 
  craftingTime = 60;     
 
  required[] = {{""sand"",4},{""stone"",2}};  
  result = ""%3"";    
 
  craft_description = """"; 
 }; 
 ",_cnter,getText (_x >> "displayName"),configName _x]; 
 _cnter = _cnter + 1; 
}foreach ("configName _x select [0,5] == 'Land_' && (configName _x) isKindOf 'NonStrategic' && (configName _x) isKindOf 'Building'" configClasses (configFile >> "CfgVehicles")); 
copyToClipboard _string; 
**/

  
 class vest0 {  
  name = "Rangemaster Belt";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",2}};   
  result = "V_Rangemaster_belt";     
  
  craft_description = "auto";  
 };  
   
 class vest1 {  
  name = "Slash Bandolier (Khaki)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",2}};   
  result = "V_BandollierB_khk";     
  
  craft_description = "auto";  
 };  
   
 class vest2 {  
  name = "Slash Bandolier (Coyote)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",2}};   
  result = "V_BandollierB_cbr";     
  
  craft_description = "auto";  
 };  
   
 class vest3 {  
  name = "Slash Bandolier (Green)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",2}};   
  result = "V_BandollierB_rgr";     
  
  craft_description = "auto";  
 };  
   
 class vest4 {  
  name = "Slash Bandolier (Black)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",2}};   
  result = "V_BandollierB_blk";     
  
  craft_description = "auto";  
 };  
   
 class vest5 {  
  name = "Slash Bandolier (Olive)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",2}};   
  result = "V_BandollierB_oli";     
  
  craft_description = "auto";  
 };  
   
 class vest6 {  
  name = "Carrier Lite (Green)";  
  allowedClasses[] = {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",3},{"metal_plate",1}};   
  result = "V_PlateCarrier1_rgr";     
  
  craft_description = "auto";  
 };  
   
 class vest7 {  
  name = "Carrier Rig (Green)";  
  allowedClasses[] = {{"Assault",4},{"Medic",4},{"Engineer",4},{"Sniper",4}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",3},{"metal_plate",2}};   
  result = "V_PlateCarrier2_rgr";     
  
  craft_description = "auto";  
 };  
   
 class vest8 {  
  name = "Carrier Rig (Black)";  
  allowedClasses[] = {{"Assault",4},{"Medic",4},{"Engineer",4},{"Sniper",4}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",3},{"metal_plate",2}};   
  result = "V_PlateCarrier2_blk";     
  
  craft_description = "auto";  
 };  
   
 class vest9 {  
  name = "Carrier Rig (Green)";  
  allowedClasses[] = {{"Assault",4},{"Medic",4},{"Engineer",4},{"Sniper",4}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",3},{"metal_plate",2}};   
  result = "V_PlateCarrier3_rgr";     
  
  craft_description = "auto";  
 };  
   
 class vest10 {  
  name = "Carrier GL Rig (Green)";  
  allowedClasses[] = {{"Assault",5},{"Medic",5},{"Engineer",5},{"Sniper",5}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",4},{"metal_plate",3}};   
  result = "V_PlateCarrierGL_rgr";     
  
  craft_description = "auto";  
 };  
   
 class vest11 {  
  name = "Carrier GL Rig (Black)";  
  allowedClasses[] = {{"Assault",5},{"Medic",5},{"Engineer",5},{"Sniper",5}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",4},{"metal_plate",3}};   
  result = "V_PlateCarrierGL_blk";     
  
  craft_description = "auto";  
 };  
   
 class vest12 {  
  name = "Carrier GL Rig (MTP)";  
  allowedClasses[] = {{"Assault",5},{"Medic",5},{"Engineer",5},{"Sniper",5}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",4},{"metal_plate",3}};   
  result = "V_PlateCarrierGL_mtp";     
  
  craft_description = "auto";  
 };  
   
 class vest13 {  
  name = "Carrier Lite (Black)";  
  allowedClasses[] = {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",3},{"metal_plate",1}};   
  result = "V_PlateCarrier1_blk";     
  
  craft_description = "auto";  
 };  
   
 class vest14 {  
  name = "Carrier Special Rig (Green)";  
  allowedClasses[] = {{"Assault",5},{"Medic",5},{"Engineer",5},{"Sniper",5}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",4},{"metal_plate",3}};  
  result = "V_PlateCarrierSpec_rgr";     
  
  craft_description = "auto";  
 };  
   
 class vest15 {  
  name = "Carrier Special Rig (Black)";  
  allowedClasses[] = {{"Assault",5},{"Medic",5},{"Engineer",5},{"Sniper",5}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",4},{"metal_plate",3}};   
  result = "V_PlateCarrierSpec_blk";     
  
  craft_description = "auto";  
 };  
   
 class vest16 {  
  name = "Carrier Special Rig (MTP)";  
  allowedClasses[] = {{"Assault",5},{"Medic",5},{"Engineer",5},{"Sniper",5}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",4},{"metal_plate",3}};   
  result = "V_PlateCarrierSpec_mtp";     
  
  craft_description = "auto";  
 };  
   
 class vest17 {  
  name = "Chest Rig (Khaki)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",2}};   
  result = "V_Chestrig_khk";     
  
  craft_description = "auto";  
 };  
   
 class vest18 {  
  name = "Chest Rig (Green)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",2}};   
  result = "V_Chestrig_rgr";     
  
  craft_description = "auto";  
 };  
   
 class vest19 {  
  name = "Chest Rig (Black)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",2}};   
  result = "V_Chestrig_blk";     
  
  craft_description = "auto";  
 };  
   
 class vest20 {  
  name = "Chest Rig (Olive)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",2}};   
  result = "V_Chestrig_oli";     
  
  craft_description = "auto";  
 };  
   
 class vest21 {  
  name = "Tactical Vest (Khaki)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",2}};   
  result = "V_TacVest_khk";     
  
  craft_description = "auto";  
 };  
   
 class vest22 {  
  name = "Tactical Vest (Brown)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",2}};   
  result = "V_TacVest_brn";     
  
  craft_description = "auto";  
 };  
   
 class vest23 {  
  name = "Tactical Vest (Olive)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",2}};   
  result = "V_TacVest_oli";     
  
  craft_description = "auto";  
 };  
   
 class vest24 {  
  name = "Tactical Vest (Black)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",2}};   
  result = "V_TacVest_blk";     
  
  craft_description = "auto";  
 };  
   
 class vest25 {  
  name = "Tactical Vest (Camo)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",2}};   
  result = "V_TacVest_camo";     
  
  craft_description = "auto";  
 };  
   
 class vest26 {  
  name = "Tactical Vest (Police)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",2}};   
  result = "V_TacVest_blk_POLICE";     
  
  craft_description = "auto";  
 };  
   
 class vest27 {  
  name = "Raven Vest";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",2}};   
  result = "V_TacVestIR_blk";     
  
  craft_description = "auto";  
 };  
   
 class vest28 {  
  name = "Camouflaged Vest";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",2}};   
  result = "V_TacVestCamo_khk";     
  
  craft_description = "auto";  
 };  
   
 class vest29 {  
  name = "LBV Harness";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",2}};   
  result = "V_HarnessO_brn";     
  
  craft_description = "auto";  
 };  
   
 class vest30 {  
  name = "LBV Grenadier Harness";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",2}};   
  result = "V_HarnessOGL_brn";     
  
  craft_description = "auto";  
 };  
   
 class vest31 {  
  name = "LBV Harness (Grey)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",2}};   
  result = "V_HarnessO_gry";     
  
  craft_description = "auto";  
 };  
   
 class vest32 {  
  name = "LBV Grenadier Harness (Grey)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",2}};   
  result = "V_HarnessOGL_gry";     
  
  craft_description = "auto";  
 };  
   
 class vest33 {  
  name = "ELBV Harness";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",2}};   
  result = "V_HarnessOSpec_brn";     
  
  craft_description = "auto";  
 };  
   
 class vest34 {  
  name = "ELBV Harness (Grey)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",2}};   
  result = "V_HarnessOSpec_gry";     
  
  craft_description = "auto";  
 };  
   
 class vest35 {  
  name = "GA Carrier Lite (Digi)";  
  allowedClasses[] = {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",3},{"metal_plate",1}};   
  result = "V_PlateCarrierIA1_dgtl";     
  
  craft_description = "auto";  
 };  
   
 class vest36 {  
  name = "GA Carrier Rig (Digi)";  
  allowedClasses[] = {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",3},{"metal_plate",1}};   
  result = "V_PlateCarrierIA2_dgtl";     
  
  craft_description = "auto";  
 };  
   
 class vest37 {  
  name = "GA Carrier GL Rig (Digi)";  
  allowedClasses[] = {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",3},{"metal_plate",1}};   
  result = "V_PlateCarrierIAGL_dgtl";     
  
  craft_description = "auto";  
 };  
   
 class vest38 {  
  name = "GA Carrier GL Rig (Olive)";  
  allowedClasses[] = {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",3},{"metal_plate",1}};   
  result = "V_PlateCarrierIAGL_oli";     
  
  craft_description = "auto";  
 };  
   
 class vest39 {  
  name = "Rebreather [NATO]";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",2}};   
  result = "V_RebreatherB";     
  
  craft_description = "auto";  
 };  
   
 class vest40 {  
  name = "Rebreather [CSAT]";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",2}};   
  result = "V_RebreatherIR";     
  
  craft_description = "auto";  
 };  
   
 class vest41 {  
  name = "Rebreather [AAF]";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",2}};   
  result = "V_RebreatherIA";     
  
  craft_description = "auto";  
 };  
   
 class vest42 {  
  name = "US Plate Carrier Rig (Kerry)";  
  allowedClasses[] = {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",3},{"metal_plate",1}};   
  result = "V_PlateCarrier_Kerry";     
  
  craft_description = "auto";  
 };  
   
 class vest43 {  
  name = "CTRG Plate Carrier Rig Mk.1 (Light)";  
  allowedClasses[] = {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",3},{"metal_plate",1}};   
  result = "V_PlateCarrierL_CTRG";     
  
  craft_description = "auto";  
 };  
   
 class vest44 {  
  name = "CTRG Plate Carrier Rig Mk.2 (Heavy)";  
  allowedClasses[] = {{"Assault",4},{"Medic",4},{"Engineer",4},{"Sniper",4}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",3},{"metal_plate",2}};   
  result = "V_PlateCarrierH_CTRG";     
  
  craft_description = "auto";  
 };  
   
 class vest45 {  
  name = "Tactical Vest (Stavrou)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",2}};   
  result = "V_I_G_resistanceLeader_F";     
  
  craft_description = "auto";  
 };  
   
 class vest46 {  
  name = "Vest (Press)";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",2}};   
  result = "V_Press_F";     
  
  craft_description = "auto";  
 };  
   
 class vest47 {  
  name = "Tactical Chest Rig (Green)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",2}};   
  result = "V_TacChestrig_grn_F";     
  
  craft_description = "auto";  
 };  
   
 class vest48 {  
  name = "Tactical Chest Rig (Olive)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",2}};   
  result = "V_TacChestrig_oli_F";     
  
  craft_description = "auto";  
 };  
   
 class vest49 {  
  name = "Tactical Chest Rig (Coyote)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",2}};   
  result = "V_TacChestrig_cbr_F";     
  
  craft_description = "auto";  
 };  
   
 class vest50 {  
  name = "Carrier Lite (Tropic)";  
  allowedClasses[] = {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",3},{"metal_plate",1}};   
  result = "V_PlateCarrier1_tna_F";     
  
  craft_description = "auto";  
 };  
   
 class vest51 {  
  name = "Carrier Rig (Tropic)";  
  allowedClasses[] = {{"Assault",4},{"Medic",4},{"Engineer",4},{"Sniper",4}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",3},{"metal_plate",2}};   
  result = "V_PlateCarrier2_tna_F";     
  
  craft_description = "auto";  
 };  
   
 class vest52 {  
  name = "Carrier Special Rig (Tropic)";  
  allowedClasses[] = {{"Assault",5},{"Medic",5},{"Engineer",5},{"Sniper",5}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",4},{"metal_plate",3}};   
  result = "V_PlateCarrierSpec_tna_F";     
  
  craft_description = "auto";  
 };  
   
 class vest53 {  
  name = "Carrier GL Rig (Tropic)";  
  allowedClasses[] = {{"Assault",5},{"Medic",5},{"Engineer",5},{"Sniper",5}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",4},{"metal_plate",3}};   
  result = "V_PlateCarrierGL_tna_F";     
  
  craft_description = "auto";  
 };  
   
 class vest54 {  
  name = "LBV Harness (Green Hex)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",2}};   
  result = "V_HarnessO_ghex_F";     
  
  craft_description = "auto";  
 };  
   
 class vest55 {  
  name = "LBV Grenadier Harness (Green Hex)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",2}};   
  result = "V_HarnessOGL_ghex_F";     
  
  craft_description = "auto";  
 };  
   
 class vest56 {  
  name = "Slash Bandolier (Green Hex)";  
  allowedClasses[] = {{"Assault",1},{"Medic",1},{"Engineer",1},{"Sniper",1}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",2}};   
  result = "V_BandollierB_ghex_F";     
  
  craft_description = "auto";  
 };  
   
 class vest57 {  
  name = "Gendarmerie Vest";  
  allowedClasses[] = {{"Assault",2},{"Medic",2},{"Engineer",2},{"Sniper",2}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",2}};   
  result = "V_TacVest_gen_F";     
  
  craft_description = "auto";  
 };  
   
 class vest58 {  
  name = "Carrier Lite (Green, No Flag)";  
  allowedClasses[] = {{"Assault",3},{"Medic",3},{"Engineer",3},{"Sniper",3}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",3},{"metal_plate",1}};   
  result = "V_PlateCarrier1_rgr_noflag_F";     
  
  craft_description = "auto";  
 };  
   
 class vest59 {  
  name = "Carrier Rig (Green, No Flag)";  
  allowedClasses[] = {{"Assault",4},{"Medic",4},{"Engineer",4},{"Sniper",4}};  
  craftingTime = 60;      
  
  required[] = {{"wearings",3},{"metal_plate",2}};   
  result = "V_PlateCarrier2_rgr_noflag_F";     
  
  craft_description = "auto";  
 };  
 