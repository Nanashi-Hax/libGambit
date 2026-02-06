#pragma once

#include "Gambit/Lp/Sys/Actor.hpp"
#include "Gambit/sead/def.hpp"
#include <Hook.hpp>

namespace Library::Gambit
{

namespace Game
{
    class BulletMgr
    {
    public:
        METHOD(0x0E2302D8, Lp::Sys::Actor *, activateOneCancelUnnecessary, BulletMgr, int id, bool unk0, sead::Vector3<float> * velocity);
    };
}

}