class CfgExileCustomCode 
{
	// Trader Plus
	ExileClient_gui_traderDialog_show 									= "Client\TraderPlus\CustomCode\ExileClient_gui_traderDialog_show.sqf";
	ExileClient_gui_traderDialog_updateItemStats 						= "Client\TraderPlus\CustomCode\ExileClient_gui_traderDialog_updateItemStats.sqf";
	ExileClient_gui_vehicleTraderDialog_show 							= "Client\TraderPlus\CustomCode\ExileClient_gui_vehicleTraderDialog_show.sqf";
	ExileClient_gui_traderDialog_event_onStoreDropDownSelectionChanged 	= "Client\TraderPlus\CustomCode\ExileClient_gui_traderDialog_event_onStoreDropDownSelectionChanged.sqf";
	ExileClient_gui_vehicleTraderDialog_updateVehicleListBox 			= "Client\TraderPlus\CustomCode\ExileClient_gui_vehicleTraderDialog_updateVehicleListBox.sqf";
	ExileClient_gui_traderDialog_updateStoreListBox 					= "Client\TraderPlus\CustomCode\ExileClient_gui_traderDialog_updateStoreListBox.sqf";
	ExileClient_gui_traderDialog_event_onStoreListBoxSelectionChanged 	= "Client\TraderPlus\CustomCode\ExileClient_gui_traderDialog_event_onStoreListBoxSelectionChanged.sqf";
	ExileClient_gui_traderDialog_event_onPurchaseButtonClick 			= "Client\TraderPlus\CustomCode\ExileClient_gui_traderDialog_event_onPurchaseButtonClick.sqf";
	ExileClient_gui_traderDialog_event_onUnload 						= "Client\TraderPlus\CustomCode\ExileClient_gui_traderDialog_event_onUnload.sqf";
	ExileClient_gui_traderDialog_event_onFilterCheckboxStateChanged 	= "Client\TraderPlus\CustomCode\ExileClient_gui_traderDialog_event_onFilterCheckboxStateChanged.sqf";
	ExileClient_system_trading_network_purchaseItemResponse 			= "Client\TraderPlus\CustomCode\ExileClient_system_trading_network_purchaseItemResponse.sqf";
	ExileClient_gui_traderDialog_updateInventoryListBox					= "Client\TraderPlus\CustomCode\ExileClient_gui_traderDialog_updateInventoryListBox.sqf";
	
	// Spawn Select	
	ExileClient_gui_selectSpawnLocation_event_onSpawnButtonClick 		= "Client\SpawnSelect\CustomCode\ExileClient_gui_selectSpawnLocation_event_onSpawnButtonClick.sqf";
	ExileClient_gui_selectSpawnLocation_show 							= "Client\SpawnSelect\CustomCode\ExileClient_gui_selectSpawnLocation_show.sqf";
	ExileServer_object_player_createBambi								= "Client\SpawnSelect\CustomCode\ExileServer_object_player_createBambi.sqf";
	ExileServer_object_player_network_createPlayerRequest 				= "Client\SpawnSelect\CustomCode\ExileServer_object_player_network_createPlayerRequest.sqf";
	ExileClient_object_player_network_createPlayerResponse				= "Client\SpawnSelect\CustomCode\ExileClient_object_player_network_createPlayerResponse.sqf";
	
	// Enigma
	ExileClient_object_player_death_startBleedingOut 					= "Client\Enigma\CustomCode\ExileClient_object_player_death_startBleedingOut.sqf";
	
	// Gui Changes
	ExileClient_gui_hud_toggleStatsBar 									= "Client\Gui\CustomCode\ExileClient_gui_hud_toggleStatsBar.sqf";
	ExileClient_gui_hud_renderStatsPanel 								= "Client\Gui\CustomCode\ExileClient_gui_hud_renderStatsPanel.sqf";
	ExileClient_gui_hud_renderWaypoints 								= "Client\Gui\CustomCode\ExileClient_gui_hud_renderWaypoints.sqf";
	ExileClient_gui_hud_toggleHungerIcon								= "Client\Gui\CustomCode\ExileClient_gui_hud_toggleHungerIcon.sqf";
	ExileClient_gui_hud_toggleThirstIcon								= "Client\Gui\CustomCode\ExileClient_gui_hud_toggleThirstIcon.sqf";

	// Radio
	ExileServer_system_network_send_broadcast 							= "Client\System\CustomCode\ExileServer_system_network_send_broadcast.sqf";
	ExileClient_system_radiation_thread_update 							= "Client\System\CustomCode\ExileClient_system_radiation_thread_update.sqf";
	
	// Player
	ExileServer_object_player_database_load 							= "Client\Player\CustomCode\ExileServer_object_player_database_load.sqf";
	ExileServer_object_player_database_update 							= "Client\Player\CustomCode\ExileServer_object_player_database_update.sqf";
	ExileServer_object_player_event_onMpKilled 							= "Client\Player\CustomCode\ExileServer_object_player_event_onMpKilled.sqf";
	ExileClient_object_player_stats_reset 								= "Client\Player\CustomCode\ExileClient_object_player_stats_reset.sqf";
	ExileClient_object_player_stats_update 								= "Client\Player\CustomCode\ExileClient_object_player_stats_update.sqf";
	ExileServer_system_network_event_onPlayerConnected					= "Client\Player\CustomCode\ExileServer_system_network_event_onPlayerConnected.sqf";
	ExileClient_object_player_initialize								= "Client\Player\CustomCode\ExileClient_object_player_initialize.sqf";
	
	
	// Safezone Plus
	ExileClient_object_player_event_onInventoryOpened 					= "Client\SafezonePlus\CustomCode\ExileClient_object_player_event_onInventoryOpened.sqf";
	ExileClient_object_player_event_onEnterSafezone 					= "Client\SafezonePlus\CustomCode\ExileClient_object_player_event_onEnterSafezone.sqf";
	ExileClient_object_player_event_onLeaveSafezone 					= "Client\SafezonePlus\CustomCode\ExileClient_object_player_event_onLeaveSafezone.sqf";
	ExileClient_object_player_event_hook 								= "Client\SafezonePlus\CustomCode\ExileClient_object_player_event_hook.sqf";
	ExileClient_object_player_event_unhook 								= "Client\SafezonePlus\CustomCode\ExileClient_object_player_event_unhook.sqf";
	ExileClient_system_trading_network_purchaseVehicleResponse 			= "Client\SafezonePlus\CustomCode\ExileClient_system_trading_network_purchaseVehicleResponse.sqf";
	ExileClient_object_player_thread_safeZone 							= "Client\SafezonePlus\CustomCode\ExileClient_object_player_thread_safeZone.sqf";
	
	// Vector Building
	ExileClient_gui_constructionMode_update 							= "Client\VectorBuilding\CustomCode\SM_gui_constructionMode_update.sqf";
	ExileClient_gui_hud_event_onKeyUp 									= "Client\VectorBuilding\CustomCode\SM_gui_hud_event_onKeyUp.sqf";
	ExileClient_construction_thread 									= "Client\VectorBuilding\CustomCode\SM_construction_thread.sqf";	
	
	// World
	ExileClient_util_world_findCoastPosition							= "Client\World\CustomCode\ExileClient_util_world_findCoastPosition.sqf";
	ExileServer_world_spawnVehicles										= "Client\World\CustomCode\ExileServer_world_spawnVehicles.sqf";
	ExileServer_world_spawnSpawnZoneVehicles							= "Client\World\CustomCode\ExileServer_world_spawnSpawnZoneVehicles.sqf";
	
	// CDAH
	ExileClient_gui_crafting_show 										= "Client\CDAH\CustomCode\ExileClient_gui_crafting_show.sqf";
	ExileClient_object_item_craft 										= "Client\CDAH\CustomCode\ExileClient_object_item_craft.sqf";
	ExileServer_object_vehicle_carefulCreateVehicle 					= "Client\CDAH\CustomCode\ExileServer_object_vehicle_carefulCreateVehicle.sqf";
	ExileClient_action_execute 											= "Client\CDAH\CustomCode\ExileClient_action_execute.sqf";
	
	// Weather
	ExileServer_system_weather_thread_weatherSimulation 				= "Client\Weather\CustomCode\ExileServer_system_weather_thread_weatherSimulation.sqf";
	ExileServer_system_weather_initialize 								= "Client\Weather\CustomCode\ExileServer_system_weather_initialize.sqf";
	
	//ExtDB3
	ExileServer_system_database_connect 								= "Client\ExtDB3\ExileServer_system_database_connect.sqf";
	ExileServer_system_simulationMonitor_initialize 					= "Client\ExtDB3\ExileServer_system_simulationMonitor_initialize.sqf";
	ExileServer_system_process_noobFilter 								= "Client\ExtDB3\ExileServer_system_process_noobFilter.sqf";
	ExileServer_world_initialize 										= "Client\ExtDB3\ExileServer_world_initialize.sqf";
	ExileServer_util_time_uptime 										= "Client\ExtDB3\ExileServer_util_time_uptime.sqf";
	ExileServer_util_time_currentTime 									= "Client\ExtDB3\ExileServer_util_time_currentTime.sqf";
	ExileServer_util_time_addTime 										= "Client\ExtDB3\ExileServer_util_time_addTime.sqf";
	ExileServer_system_trading_network_wasteDumpRequest 				= "Client\ExtDB3\ExileServer_system_trading_network_wasteDumpRequest.sqf";
	ExileServer_system_trading_network_sellItemRequest 					= "Client\ExtDB3\ExileServer_system_trading_network_sellItemRequest.sqf";
	ExileServer_system_trading_network_purchaseVehicleSkinRequest 		= "Client\ExtDB3\ExileServer_system_trading_network_purchaseVehicleSkinRequest.sqf";
	ExileServer_system_trading_network_purchaseVehicleRequest 			= "Client\ExtDB3\ExileServer_system_trading_network_purchaseVehicleRequest.sqf";
	ExileServer_system_trading_network_purchaseItemRequest 				= "Client\ExtDB3\ExileServer_system_trading_network_purchaseItemRequest.sqf";
	ExileServer_system_territory_network_territoryUpgradeRequest 		= "Client\ExtDB3\ExileServer_system_territory_network_territoryUpgradeRequest.sqf";
	ExileServer_system_territory_network_restoreFlagRequest 			= "Client\ExtDB3\ExileServer_system_territory_network_restoreFlagRequest.sqf";
	ExileServer_system_territory_network_purchaseTerritory 				= "Client\ExtDB3\ExileServer_system_territory_network_purchaseTerritory.sqf";
ExileServer_system_territory_network_payTerritoryProtectionMoneyRequest = "Client\ExtDB3\ExileServer_system_territory_network_payTerritoryProtectionMoneyRequest.sqf";
	ExileServer_system_territory_network_payFlagRansomRequest 			= "Client\ExtDB3\ExileServer_system_territory_network_payFlagRansomRequest.sqf";
	ExileServer_system_territory_network_flagStolenRequest 				= "Client\ExtDB3\ExileServer_system_territory_network_flagStolenRequest.sqf";
	ExileServer_system_territory_maintenance_recalculateDueDate 		= "Client\ExtDB3\ExileServer_system_territory_maintenance_recalculateDueDate.sqf";
	ExileServer_system_territory_database_insert 						= "Client\ExtDB3\ExileServer_system_territory_database_insert.sqf";
	ExileServer_system_database_query_selectSingleField 				= "Client\ExtDB3\ExileServer_system_database_query_selectSingleField.sqf";
	ExileServer_system_database_query_selectSingle 						= "Client\ExtDB3\ExileServer_system_database_query_selectSingle.sqf";
	ExileServer_system_database_query_selectFull 						= "Client\ExtDB3\ExileServer_system_database_query_selectFull.sqf";
	ExileServer_system_database_query_insertSingle 						= "Client\ExtDB3\ExileServer_system_database_query_insertSingle.sqf";
	ExileServer_system_database_query_fireAndForget						= "Client\ExtDB3\ExileServer_system_database_query_fireAndForget.sqf";
	ExileServer_system_database_handleBig 								= "Client\ExtDB3\ExileServer_system_database_handleBig.sqf";
	ExileServer_object_vehicle_database_load 							= "Client\ExtDB3\ExileServer_object_vehicle_database_load.sqf";
	ExileServer_object_vehicle_createPersistentVehicle 					= "Client\ExtDB3\ExileServer_object_vehicle_createPersistentVehicle.sqf";
	ExileServer_object_vehicle_createNonPersistentVehicle 				= "Client\ExtDB3\ExileServer_object_vehicle_createNonPersistentVehicle.sqf";
	// ExileServer_object_player_event_onMpKilled 							= "Client\ExtDB3\ExileServer_object_player_event_onMpKilled.sqf";
	// ExileServer_object_player_database_load 							= "Client\ExtDB3\ExileServer_object_player_database_load.sqf";
	// ExileServer_object_player_createBambi 								= "Client\ExtDB3\ExileServer_object_player_createBambi.sqf";
	ExileServer_object_container_database_update 						= "Client\ExtDB3\ExileServer_object_container_database_update.sqf";
	ExileServer_object_container_database_load 							= "Client\ExtDB3\ExileServer_object_container_database_load.sqf";
	ExileServer_object_container_database_insert 						= "Client\ExtDB3\ExileServer_object_container_database_insert.sqf";
	ExileServer_object_container_createContainer 						= "Client\ExtDB3\ExileServer_object_container_createContainer.sqf";
	ExileServer_object_construction_database_load 						= "Client\ExtDB3\ExileServer_object_construction_database_load.sqf";
	ExileServer_object_construction_database_insert 					= "Client\ExtDB3\ExileServer_object_construction_database_insert.sqf";
	ExileServer_object_vehicle_network_retrieveVehicleRequest 			= "Client\ExtDB3\ExileServer_object_vehicle_network_retrieveVehicleRequest.sqf";
	
};
