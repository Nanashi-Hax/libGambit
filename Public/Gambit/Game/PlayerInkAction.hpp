#pragma once

#include <Hook.hpp>
#include "Gambit/Game/Player.hpp"

namespace Library::Gambit
{

namespace Game
{
    class PlayerInkAction
    {
    public:
        Player* player;

        METHOD(0x0E6944B4, void, shotBombInstant, PlayerInkAction);
    };
}

}