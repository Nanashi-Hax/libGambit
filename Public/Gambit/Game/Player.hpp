#pragma once

#include "Gambit/sead/def.hpp"
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
            uint8_t padding1[0x220];
            sead::Vector3<float> position;

            METHOD(0x0E658BD0, void, startMotion_BombThrow, Player, int unk0, int unk1);
        };

        CHECK_OFFSET(Player, index, 0x24);
        CHECK_OFFSET(Player, position, 0x248);
    }
}