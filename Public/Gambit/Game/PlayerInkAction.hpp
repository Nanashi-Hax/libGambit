#pragma once

#include <Hook.hpp>
#include "Gambit/Game/Player.hpp"
#include "Gambit/sead/def.hpp"
#include "Gambit/Cmn/KDUtl/def.hpp"
#include "Hook/Assert.hpp"

#include <cstdint>

namespace Library::Gambit
{
    namespace Game
    {
        class PlayerInkAction
        {
        public:
            Player* player;

            enum class WeaponTypeAddMove : uint32_t
            {
                Unknown = 0
            };

            METHOD(0x0E68E15C, void, calcShotPosVelBase, PlayerInkAction,
                float pitchDownScale, float pitchOffset, float pitchUpScale,
                sead::Vector3<float> * outPosition, sead::Vector3<float> * outDirection,
                Cmn::KDUtl::AttT * outBasis, sead::Vector3<float> * baseDirection,
                int unk0,int unk1,int unk2
            );
            
            METHOD(0x0E694038, void, calcShotPosVel, PlayerInkAction,
                float pitchDownScale, float pitchOffset, float pitchUpScale,
                sead::Vector3<float> * outPosition, sead::Vector3<float> * outDirection,
                Cmn::KDUtl::AttT * outBasis, sead::Vector3<float> * baseDirection,
                WeaponTypeAddMove * type, int unk1, int unk2, int unk3
            );

            METHOD(0x0E6944B4, void, shotBombInstant, PlayerInkAction);
            METHOD(0x0E6998A8, void, shotBullet_C, PlayerInkAction, float charge);
        };

        CHECK_OFFSET(PlayerInkAction, player, 0x0);
    }
}

