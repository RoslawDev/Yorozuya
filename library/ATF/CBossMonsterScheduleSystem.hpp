// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <BossSchedule.hpp>
#include <BossSchedule_Map.hpp>
#include <BossSchedule_TBL.hpp>
#include <CBossMonsterScheduleSystem.hpp>
#include <CMapData.hpp>
#include <CMapOperation.hpp>
#include <INI_Section.hpp>
#include <ScheduleMSG.hpp>
#include <US__AbstractThreadPool.hpp>
#include <US__CDynamicTaskPool.hpp>
#include <US__CWinThread.hpp>
#include <US__ThreadParamInterface.hpp>
#include <_mon_active.hpp>
#include <_mon_block.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct  CBossMonsterScheduleSystem : US::CWinThread<US::ThreadParamInterface<CBossMonsterScheduleSystem,US::AbstractThreadPool> >
    {
        CMapOperation *m_pMapOper;
        BossSchedule_TBL *m_pCurTBL;
        US::CDynamicTaskPool<ScheduleMSG,US::CCircularFIFO<unsigned long,US::CriticalSection,0> > m_MSG_POOL;
        bool m_bRespawnMonster;
    public:
        void AnalysisMsg(struct ScheduleMSG* pMSG)
        {
            using org_ptr = void (WINAPIV*)(struct CBossMonsterScheduleSystem*, struct ScheduleMSG*);
            (org_ptr(0x140419cb0L))(this, pMSG);
        };
        CBossMonsterScheduleSystem()
        {
            using org_ptr = void (WINAPIV*)(struct CBossMonsterScheduleSystem*);
            (org_ptr(0x140418610L))(this);
        };
        void ctor_CBossMonsterScheduleSystem()
        {
            using org_ptr = void (WINAPIV*)(struct CBossMonsterScheduleSystem*);
            (org_ptr(0x140418610L))(this);
        };
        bool CreateTaskPool()
        {
            using org_ptr = bool (WINAPIV*)(struct CBossMonsterScheduleSystem*);
            return (org_ptr(0x140419a80L))(this);
        };
        bool CreateWorkerThread()
        {
            using org_ptr = bool (WINAPIV*)(struct CBossMonsterScheduleSystem*);
            return (org_ptr(0x140419ae0L))(this);
        };
        bool Init(struct CMapOperation* pMapOper)
        {
            using org_ptr = bool (WINAPIV*)(struct CBossMonsterScheduleSystem*, struct CMapOperation*);
            return (org_ptr(0x140419b60L))(this, pMapOper);
        };
        static struct CBossMonsterScheduleSystem* Instance()
        {
            using org_ptr = struct CBossMonsterScheduleSystem* (WINAPIV*)();
            return (org_ptr(0x1401991b0L))();
        };
        struct BossSchedule* LoadSchedule(struct BossSchedule_Map* pMapSchedule, struct INI_Section* pSection)
        {
            using org_ptr = struct BossSchedule* (WINAPIV*)(struct CBossMonsterScheduleSystem*, struct BossSchedule_Map*, struct INI_Section*);
            return (org_ptr(0x140418ac0L))(this, pMapSchedule, pSection);
        };
        struct BossSchedule_Map* MakeMap(int nIndex, struct CMapData* pMap)
        {
            using org_ptr = struct BossSchedule_Map* (WINAPIV*)(struct CBossMonsterScheduleSystem*, int, struct CMapData*);
            return (org_ptr(0x140419160L))(this, nIndex, pMap);
        };
        struct BossSchedule* MakeSchedule(struct BossSchedule_Map* pMapSchedule, struct _mon_active* pMonAct, struct _mon_block* pBlock, int nActIndex, int nBlockIndex)
        {
            using org_ptr = struct BossSchedule* (WINAPIV*)(struct CBossMonsterScheduleSystem*, struct BossSchedule_Map*, struct _mon_active*, struct _mon_block*, int, int);
            return (org_ptr(0x1404187f0L))(this, pMapSchedule, pMonAct, pBlock, nActIndex, nBlockIndex);
        };
        struct BossSchedule_TBL* MakeTBL(struct CMapOperation* pMapOper)
        {
            using org_ptr = struct BossSchedule_TBL* (WINAPIV*)(struct CBossMonsterScheduleSystem*, struct CMapOperation*);
            return (org_ptr(0x1404198c0L))(this, pMapOper);
        };
        void RespawnMonster()
        {
            using org_ptr = void (WINAPIV*)(struct CBossMonsterScheduleSystem*);
            (org_ptr(0x140419d90L))(this);
        };
        void Savechedule(struct BossSchedule_Map* pMapSchedule, struct BossSchedule* pSchedule)
        {
            using org_ptr = void (WINAPIV*)(struct CBossMonsterScheduleSystem*, struct BossSchedule_Map*, struct BossSchedule*);
            (org_ptr(0x140419020L))(this, pMapSchedule, pSchedule);
        };
        int WorkProc()
        {
            using org_ptr = int (WINAPIV*)(struct CBossMonsterScheduleSystem*);
            return (org_ptr(0x140419c10L))(this);
        };
        ~CBossMonsterScheduleSystem()
        {
            using org_ptr = void (WINAPIV*)(struct CBossMonsterScheduleSystem*);
            (org_ptr(0x1404186d0L))(this);
        };
        void dtor_CBossMonsterScheduleSystem()
        {
            using org_ptr = void (WINAPIV*)(struct CBossMonsterScheduleSystem*);
            (org_ptr(0x1404186d0L))(this);
        };
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
