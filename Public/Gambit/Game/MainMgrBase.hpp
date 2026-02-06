#pragma once

#include "Gambit/Game/BulletMgr.hpp"
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
        uint8_t padding0[0x274];
        BulletMgr * bulletMgr;

        static MainMgrBase *const sInstance;

        METHOD(0x0E2302D8, Lp::Sys::Actor *, activateOneCancelUnnecessary, BulletMgr, int id, bool unk0, sead::Vector3<float> * position, sead::Vector3<float> * velocity);
    };

    CHECK_OFFSET(MainMgrBase, bulletMgr, 0x274);
}

}