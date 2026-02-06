#pragma once

#include <Hook.hpp>
#include <cstdint>

namespace Library::Gambit
{
    namespace Game
    {
        class Player
        {
        public:
            uint8_t padding0[0x24];
            int index;

            METHOD(0x0E658BD0, void, startMotion_BombThrow, Player, int unk0, int unk1);
        };

        CHECK_OFFSET(Player, index, 0x24);
    }
}