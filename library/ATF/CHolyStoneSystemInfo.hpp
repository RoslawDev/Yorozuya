// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CHolyStoneSystem.hpp>


START_ATF_NAMESPACE
    namespace Info
    {
        using CHolyStoneSystemAlterSchedule2_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, char, char);
        using CHolyStoneSystemAlterSchedule2_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, char, char, CHolyStoneSystemAlterSchedule2_ptr);
        using CHolyStoneSystemAuthMiningTicket4_ptr = bool (WINAPIV*)(struct CHolyStoneSystem*, unsigned int);
        using CHolyStoneSystemAuthMiningTicket4_clbk = bool (WINAPIV*)(struct CHolyStoneSystem*, unsigned int, CHolyStoneSystemAuthMiningTicket4_ptr);
        
        using CHolyStoneSystemctor_CHolyStoneSystem6_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemctor_CHolyStoneSystem6_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemctor_CHolyStoneSystem6_ptr);
        using CHolyStoneSystemCheckDestroyerIsArriveMine8_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemCheckDestroyerIsArriveMine8_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemCheckDestroyerIsArriveMine8_ptr);
        using CHolyStoneSystemCheckHolyMaster10_ptr = bool (WINAPIV*)(struct CHolyStoneSystem*, struct CPlayer*, char);
        using CHolyStoneSystemCheckHolyMaster10_clbk = bool (WINAPIV*)(struct CHolyStoneSystem*, struct CPlayer*, char, CHolyStoneSystemCheckHolyMaster10_ptr);
        using CHolyStoneSystemCheckKeeperPlusTime12_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemCheckKeeperPlusTime12_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemCheckKeeperPlusTime12_ptr);
        using CHolyStoneSystemContinueStartSystem14_ptr = bool (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemContinueStartSystem14_clbk = bool (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemContinueStartSystem14_ptr);
        using CHolyStoneSystemCreateHolyKeeper16_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, int);
        using CHolyStoneSystemCreateHolyKeeper16_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, int, CHolyStoneSystemCreateHolyKeeper16_ptr);
        using CHolyStoneSystemCreateHolyStone18_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemCreateHolyStone18_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemCreateHolyStone18_ptr);
        using CHolyStoneSystemDestroyHolyKeeper20_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemDestroyHolyKeeper20_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemDestroyHolyKeeper20_ptr);
        using CHolyStoneSystemDestroyHolyStone22_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemDestroyHolyStone22_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemDestroyHolyStone22_ptr);
        using CHolyStoneSystemFindStoragedQuestCash24_ptr = struct _QUEST_CASH* (WINAPIV*)(struct CHolyStoneSystem*, unsigned int);
        using CHolyStoneSystemFindStoragedQuestCash24_clbk = struct _QUEST_CASH* (WINAPIV*)(struct CHolyStoneSystem*, unsigned int, CHolyStoneSystemFindStoragedQuestCash24_ptr);
        using CHolyStoneSystemGetControlLeftTime26_ptr = int (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemGetControlLeftTime26_clbk = int (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemGetControlLeftTime26_ptr);
        using CHolyStoneSystemGetDestroyStoneRace28_ptr = int (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemGetDestroyStoneRace28_clbk = int (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemGetDestroyStoneRace28_ptr);
        using CHolyStoneSystemGetDestroyerGuildSerial30_ptr = unsigned int (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemGetDestroyerGuildSerial30_clbk = unsigned int (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemGetDestroyerGuildSerial30_ptr);
        using CHolyStoneSystemGetDestroyerSerial32_ptr = unsigned int (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemGetDestroyerSerial32_clbk = unsigned int (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemGetDestroyerSerial32_ptr);
        using CHolyStoneSystemGetDestroyerState34_ptr = int (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemGetDestroyerState34_clbk = int (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemGetDestroyerState34_ptr);
        using CHolyStoneSystemGetGoldBoxConsumable36_ptr = bool (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemGetGoldBoxConsumable36_clbk = bool (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemGetGoldBoxConsumable36_ptr);
        using CHolyStoneSystemGetHolyMasterRace38_ptr = int (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemGetHolyMasterRace38_clbk = int (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemGetHolyMasterRace38_ptr);
        using CHolyStoneSystemGetHolyMentalString40_ptr = char* (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemGetHolyMentalString40_clbk = char* (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemGetHolyMentalString40_ptr);
        using CHolyStoneSystemGetKeeperDestroyRace42_ptr = char (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemGetKeeperDestroyRace42_clbk = char (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemGetKeeperDestroyRace42_ptr);
        using CHolyStoneSystemGetMapData44_ptr = struct CMapData* (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemGetMapData44_clbk = struct CMapData* (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemGetMapData44_ptr);
        using CHolyStoneSystemGetNumOfTime46_ptr = char (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemGetNumOfTime46_clbk = char (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemGetNumOfTime46_ptr);
        using CHolyStoneSystemGetPortalDummy48_ptr = struct _portal_dummy* (WINAPIV*)(struct CHolyStoneSystem*, char);
        using CHolyStoneSystemGetPortalDummy48_clbk = struct _portal_dummy* (WINAPIV*)(struct CHolyStoneSystem*, char, CHolyStoneSystemGetPortalDummy48_ptr);
        using CHolyStoneSystemGetSceneCode50_ptr = int (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemGetSceneCode50_clbk = int (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemGetSceneCode50_ptr);
        using CHolyStoneSystemGetStartBattleTickTime52_ptr = unsigned int (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemGetStartBattleTickTime52_clbk = unsigned int (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemGetStartBattleTickTime52_ptr);
        using CHolyStoneSystemGetStartDay54_ptr = char (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemGetStartDay54_clbk = char (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemGetStartDay54_ptr);
        using CHolyStoneSystemGetStartHour56_ptr = char (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemGetStartHour56_clbk = char (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemGetStartHour56_ptr);
        using CHolyStoneSystemGetStartMin58_ptr = char (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemGetStartMin58_clbk = char (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemGetStartMin58_ptr);
        using CHolyStoneSystemGetStartMonth60_ptr = char (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemGetStartMonth60_clbk = char (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemGetStartMonth60_ptr);
        using CHolyStoneSystemGetStartYear62_ptr = uint16_t (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemGetStartYear62_clbk = uint16_t (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemGetStartYear62_ptr);
        using CHolyStoneSystemGiveHSKQuest64_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemGiveHSKQuest64_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemGiveHSKQuest64_ptr);
        using CHolyStoneSystemHSKRespawnSystem66_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemHSKRespawnSystem66_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemHSKRespawnSystem66_ptr);
        using CHolyStoneSystemInitHolySystem68_ptr = bool (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemInitHolySystem68_clbk = bool (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemInitHolySystem68_ptr);
        using CHolyStoneSystemInitQuestCash70_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemInitQuestCash70_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemInitQuestCash70_ptr);
        using CHolyStoneSystemInitQuestCash_Other72_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemInitQuestCash_Other72_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemInitQuestCash_Other72_ptr);
        using CHolyStoneSystemIsControlScene74_ptr = bool (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemIsControlScene74_clbk = bool (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemIsControlScene74_ptr);
        using CHolyStoneSystemIsItemLootAuthority76_ptr = bool (WINAPIV*)(struct CHolyStoneSystem*, struct CPlayer*, char);
        using CHolyStoneSystemIsItemLootAuthority76_clbk = bool (WINAPIV*)(struct CHolyStoneSystem*, struct CPlayer*, char, CHolyStoneSystemIsItemLootAuthority76_ptr);
        using CHolyStoneSystemIsMentalPass78_ptr = bool (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemIsMentalPass78_clbk = bool (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemIsMentalPass78_ptr);
        using CHolyStoneSystemIsMinigeTicketCheck80_ptr = bool (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemIsMinigeTicketCheck80_clbk = bool (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemIsMinigeTicketCheck80_ptr);
        using CHolyStoneSystemIsUseReturnItem82_ptr = bool (WINAPIV*)(struct CHolyStoneSystem*, unsigned int);
        using CHolyStoneSystemIsUseReturnItem82_clbk = bool (WINAPIV*)(struct CHolyStoneSystem*, unsigned int, CHolyStoneSystemIsUseReturnItem82_ptr);
        using CHolyStoneSystemOnLoop84_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemOnLoop84_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemOnLoop84_ptr);
        using CHolyStoneSystemOn_HS_SCENE_BATTLE_END_WAIT_TIME86_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemOn_HS_SCENE_BATTLE_END_WAIT_TIME86_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemOn_HS_SCENE_BATTLE_END_WAIT_TIME86_ptr);
        using CHolyStoneSystemOn_HS_SCENE_BATTLE_TIME88_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemOn_HS_SCENE_BATTLE_TIME88_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemOn_HS_SCENE_BATTLE_TIME88_ptr);
        using CHolyStoneSystemOn_HS_SCENE_INIT90_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemOn_HS_SCENE_INIT90_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemOn_HS_SCENE_INIT90_ptr);
        using CHolyStoneSystemOn_HS_SCENE_KEEPER_ATTACKABLE_TIME92_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemOn_HS_SCENE_KEEPER_ATTACKABLE_TIME92_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemOn_HS_SCENE_KEEPER_ATTACKABLE_TIME92_ptr);
        using CHolyStoneSystemOn_HS_SCENE_KEEPER_CHAOS_TIME94_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemOn_HS_SCENE_KEEPER_CHAOS_TIME94_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemOn_HS_SCENE_KEEPER_CHAOS_TIME94_ptr);
        using CHolyStoneSystemOn_HS_SCENE_KEEPER_DEATTACKABLE_TIME96_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemOn_HS_SCENE_KEEPER_DEATTACKABLE_TIME96_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemOn_HS_SCENE_KEEPER_DEATTACKABLE_TIME96_ptr);
        using CHolyStoneSystemOn_HS_SCENE_KEEPER_DIE_TIME98_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemOn_HS_SCENE_KEEPER_DIE_TIME98_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemOn_HS_SCENE_KEEPER_DIE_TIME98_ptr);
        using CHolyStoneSystemPeneltyFailRace100_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, char);
        using CHolyStoneSystemPeneltyFailRace100_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, char, CHolyStoneSystemPeneltyFailRace100_ptr);
        using CHolyStoneSystemPeneltyLoseRace102_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, char);
        using CHolyStoneSystemPeneltyLoseRace102_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, char, CHolyStoneSystemPeneltyLoseRace102_ptr);
        using CHolyStoneSystemPopStoredQuestCash_Other104_ptr = struct _QUEST_CASH_OTHER* (WINAPIV*)(struct CHolyStoneSystem*, unsigned int);
        using CHolyStoneSystemPopStoredQuestCash_Other104_clbk = struct _QUEST_CASH_OTHER* (WINAPIV*)(struct CHolyStoneSystem*, unsigned int, CHolyStoneSystemPopStoredQuestCash_Other104_ptr);
        using CHolyStoneSystemPushQuestCash_Other106_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, unsigned int, char);
        using CHolyStoneSystemPushQuestCash_Other106_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, unsigned int, char, CHolyStoneSystemPushQuestCash_Other106_ptr);
        using CHolyStoneSystemPushStoreQuestCash108_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, unsigned int, char, int, uint16_t, uint16_t, char, char);
        using CHolyStoneSystemPushStoreQuestCash108_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, unsigned int, char, int, uint16_t, uint16_t, char, char, CHolyStoneSystemPushStoreQuestCash108_ptr);
        using CHolyStoneSystemReceiveDestroyKeeper110_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, struct CCharacter*);
        using CHolyStoneSystemReceiveDestroyKeeper110_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, struct CCharacter*, CHolyStoneSystemReceiveDestroyKeeper110_ptr);
        using CHolyStoneSystemRecoverPvpCash112_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemRecoverPvpCash112_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemRecoverPvpCash112_ptr);
        using CHolyStoneSystemReleaseLastAttBuff114_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemReleaseLastAttBuff114_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemReleaseLastAttBuff114_ptr);
        using CHolyStoneSystemSendHolyStoneHP116_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, struct CPlayer*);
        using CHolyStoneSystemSendHolyStoneHP116_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, struct CPlayer*, CHolyStoneSystemSendHolyStoneHP116_ptr);
        using CHolyStoneSystemSendHolyStoneHPToRaceBoss118_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemSendHolyStoneHPToRaceBoss118_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemSendHolyStoneHPToRaceBoss118_ptr);
        using CHolyStoneSystemSendIsArriveDestroyer120_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, char);
        using CHolyStoneSystemSendIsArriveDestroyer120_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, char, CHolyStoneSystemSendIsArriveDestroyer120_ptr);
        using CHolyStoneSystemSendMsg_CreateHolyMaster122_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, struct CPlayer*, int);
        using CHolyStoneSystemSendMsg_CreateHolyMaster122_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, struct CPlayer*, int, CHolyStoneSystemSendMsg_CreateHolyMaster122_ptr);
        using CHolyStoneSystemSendMsg_EndBattle124_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, char);
        using CHolyStoneSystemSendMsg_EndBattle124_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, char, CHolyStoneSystemSendMsg_EndBattle124_ptr);
        using CHolyStoneSystemSendMsg_EnterKeeper126_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, int);
        using CHolyStoneSystemSendMsg_EnterKeeper126_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, int, CHolyStoneSystemSendMsg_EnterKeeper126_ptr);
        using CHolyStoneSystemSendMsg_EnterStone128_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, int);
        using CHolyStoneSystemSendMsg_EnterStone128_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, int, CHolyStoneSystemSendMsg_EnterStone128_ptr);
        using CHolyStoneSystemSendMsg_ExitStone130_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemSendMsg_ExitStone130_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemSendMsg_ExitStone130_ptr);
        using CHolyStoneSystemSendMsg_HolyKeeperAttackAbleState132_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, bool);
        using CHolyStoneSystemSendMsg_HolyKeeperAttackAbleState132_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, bool, CHolyStoneSystemSendMsg_HolyKeeperAttackAbleState132_ptr);
        using CHolyStoneSystemSendMsg_HolyKeeperStateChaos134_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemSendMsg_HolyKeeperStateChaos134_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemSendMsg_HolyKeeperStateChaos134_ptr);
        using CHolyStoneSystemSendMsg_HolyStoneSystemState136_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, int);
        using CHolyStoneSystemSendMsg_HolyStoneSystemState136_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, int, CHolyStoneSystemSendMsg_HolyStoneSystemState136_ptr);
        using CHolyStoneSystemSendMsg_NoticeNextQuest138_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, int, char);
        using CHolyStoneSystemSendMsg_NoticeNextQuest138_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, int, char, CHolyStoneSystemSendMsg_NoticeNextQuest138_ptr);
        using CHolyStoneSystemSendMsg_NotifyHolyKeeperAttackTimeBeKeepKeeper140_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, bool);
        using CHolyStoneSystemSendMsg_NotifyHolyKeeperAttackTimeBeKeepKeeper140_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, bool, CHolyStoneSystemSendMsg_NotifyHolyKeeperAttackTimeBeKeepKeeper140_ptr);
        using CHolyStoneSystemSendMsg_StartBattle142_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemSendMsg_StartBattle142_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemSendMsg_StartBattle142_ptr);
        using CHolyStoneSystemSendMsg_WaitKeeper144_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, int, char);
        using CHolyStoneSystemSendMsg_WaitKeeper144_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, int, char, CHolyStoneSystemSendMsg_WaitKeeper144_ptr);
        using CHolyStoneSystemSendMsg_WaitStone146_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, int);
        using CHolyStoneSystemSendMsg_WaitStone146_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, int, CHolyStoneSystemSendMsg_WaitStone146_ptr);
        using CHolyStoneSystemSendMsg_to_webagent_about_last_attacker_for_keeper148_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, struct CPlayer*, int);
        using CHolyStoneSystemSendMsg_to_webagent_about_last_attacker_for_keeper148_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, struct CPlayer*, int, CHolyStoneSystemSendMsg_to_webagent_about_last_attacker_for_keeper148_ptr);
        using CHolyStoneSystemSendNotifyHolyStoneDestroyedToRaceBoss150_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemSendNotifyHolyStoneDestroyedToRaceBoss150_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemSendNotifyHolyStoneDestroyedToRaceBoss150_ptr);
        using CHolyStoneSystemSendSMS_CompleteQuest152_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, char, char*, int, char*, char);
        using CHolyStoneSystemSendSMS_CompleteQuest152_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, char, char*, int, char*, char, CHolyStoneSystemSendSMS_CompleteQuest152_ptr);
        using CHolyStoneSystemSendSMS_MineTimeExtend154_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, int);
        using CHolyStoneSystemSendSMS_MineTimeExtend154_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, int, CHolyStoneSystemSendSMS_MineTimeExtend154_ptr);
        using CHolyStoneSystemSetDestroyStoneRace156_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, int);
        using CHolyStoneSystemSetDestroyStoneRace156_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, int, CHolyStoneSystemSetDestroyStoneRace156_ptr);
        using CHolyStoneSystemSetEffectToDestroyerGuildMember158_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemSetEffectToDestroyerGuildMember158_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemSetEffectToDestroyerGuildMember158_ptr);
        using CHolyStoneSystemSetGoldBoxConsumable160_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, bool);
        using CHolyStoneSystemSetGoldBoxConsumable160_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, bool, CHolyStoneSystemSetGoldBoxConsumable160_ptr);
        using CHolyStoneSystemSetHolyMasterRace162_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, int);
        using CHolyStoneSystemSetHolyMasterRace162_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, int, CHolyStoneSystemSetHolyMasterRace162_ptr);
        using CHolyStoneSystemSetKeeperDestroyRace164_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, char);
        using CHolyStoneSystemSetKeeperDestroyRace164_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, char, CHolyStoneSystemSetKeeperDestroyRace164_ptr);
        using CHolyStoneSystemSetScene166_ptr = bool (WINAPIV*)(struct CHolyStoneSystem*, char, int, unsigned int, int);
        using CHolyStoneSystemSetScene166_clbk = bool (WINAPIV*)(struct CHolyStoneSystem*, char, int, unsigned int, int, CHolyStoneSystemSetScene166_ptr);
        using CHolyStoneSystemSetTermTimeDefault168_ptr = void (WINAPIV*)(struct CHolyStoneSystem*, char);
        using CHolyStoneSystemSetTermTimeDefault168_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, char, CHolyStoneSystemSetTermTimeDefault168_ptr);
        using CHolyStoneSystemUnAllRegisterPerAutoMine170_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemUnAllRegisterPerAutoMine170_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemUnAllRegisterPerAutoMine170_ptr);
        using CHolyStoneSystemUpdateNotifyHolyStoneHPToRaceBoss172_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemUpdateNotifyHolyStoneHPToRaceBoss172_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemUpdateNotifyHolyStoneHPToRaceBoss172_ptr);
        using CHolyStoneSystemWriteLogPer10Min_Combat174_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemWriteLogPer10Min_Combat174_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemWriteLogPer10Min_Combat174_ptr);
        using CHolyStoneSystemct_KeeperStart176_ptr = bool (WINAPIV*)(struct CHolyStoneSystem*, int, int, int);
        using CHolyStoneSystemct_KeeperStart176_clbk = bool (WINAPIV*)(struct CHolyStoneSystem*, int, int, int, CHolyStoneSystemct_KeeperStart176_ptr);
        using CHolyStoneSystemct_State178_ptr = bool (WINAPIV*)(struct CHolyStoneSystem*, struct CPlayer*);
        using CHolyStoneSystemct_State178_clbk = bool (WINAPIV*)(struct CHolyStoneSystem*, struct CPlayer*, CHolyStoneSystemct_State178_ptr);
        using CHolyStoneSystemct_StopBattle180_ptr = bool (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemct_StopBattle180_clbk = bool (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemct_StopBattle180_ptr);
        
        using CHolyStoneSystemdtor_CHolyStoneSystem182_ptr = void (WINAPIV*)(struct CHolyStoneSystem*);
        using CHolyStoneSystemdtor_CHolyStoneSystem182_clbk = void (WINAPIV*)(struct CHolyStoneSystem*, CHolyStoneSystemdtor_CHolyStoneSystem182_ptr);
    }; // end namespace Info
END_ATF_NAMESPACE