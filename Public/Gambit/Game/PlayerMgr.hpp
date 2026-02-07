#pragma once

#include <Hook.hpp>
#include "Gambit/Game/Player.hpp"

namespace Library::Gambit
{

namespace Game
{
    class PlayerMgr
    {
    public:
        METHOD(0x0E6BA4D8, Player*, getPerformerAt, PlayerMgr, int index);
        METHOD(0x0E6BA754, int, getControlledPerformerIdx, PlayerMgr);
    };
}

}