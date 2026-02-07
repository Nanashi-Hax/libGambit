#pragma once

#include "Gambit/Game/BulletMgr.hpp"
#include "Gambit/Game/PlayerMgr.hpp"
#include "Hook/Assert.hpp"
#include <Hook.hpp>
#include <cstdint>

namespace Library::Gambit
{

namespace Game
{
    class MainMgrBase
    {
    public:
        
        uint8_t padding0[0x268];
        PlayerMgr * playerMgr;
        uint8_t padding1[0x8];
        BulletMgr * bulletMgr;

        static MainMgrBase *const & sInstance;

        METHOD(0x0E2302D8, Lp::Sys::Actor *, activateOneCancelUnnecessary, BulletMgr, int id, bool unk0, sead::Vector3<float> * position, sead::Vector3<float> * velocity);
    };

    CHECK_OFFSET(MainMgrBase, playerMgr, 0x268);
    CHECK_OFFSET(MainMgrBase, bulletMgr, 0x274);
}

}