#include "Gambit/Game/BulletMgr.hpp"
#include <Hook.hpp>

namespace Library::Gambit
{

namespace Game
{
    Lp::Sys::Actor * BulletMgr::activateOneCancelUnnecessary(int id, bool unk0, sead::Vector3<float> * velocity)
    {
        return original_activateOneCancelUnnecessary(this, id, unk0, velocity);
    }
}

}