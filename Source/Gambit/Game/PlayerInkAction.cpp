#include <Gambit/Game/PlayerInkAction.hpp>

namespace Library::Gambit
{
    namespace Game
    {
        void PlayerInkAction::calcShotPosVelBase
        (
            float pitchDownScale, float pitchOffset, float pitchUpScale,
            sead::Vector3<float> *outPosition, sead::Vector3<float> *outDirection,
            Cmn::KDUtl::AttT *outBasis, sead::Vector3<float> *baseDirection,
            int unk0,int unk1,int unk2
        )
        {
            original_calcShotPosVelBase
            (
                this,
                pitchDownScale, pitchOffset, pitchUpScale,
                outPosition, outDirection, outBasis, baseDirection,
                unk0, unk1, unk2
            );
        }
    
        void PlayerInkAction::calcShotPosVel
        (
            float pitchDownScale, float pitchOffset, float pitchUpScale,
            sead::Vector3<float> * outPosition, sead::Vector3<float> * outDirection,
            Cmn::KDUtl::AttT * outBasis, sead::Vector3<float> * baseDirection,
            WeaponTypeAddMove * type, int unk0, int unk1, int unk2
        )
        {
            original_calcShotPosVel
            (
                this,
                pitchDownScale, pitchOffset, pitchUpScale,
                outPosition, outDirection, outBasis, baseDirection,
                type, unk0, unk1, unk2
            );
        }
    
        void PlayerInkAction::shotBombInstant()
        {
            original_shotBombInstant(this);
        }
    
        void PlayerInkAction::shotBullet_C(float charge)
        {
            original_shotBullet_C(this, charge);
        }
    }
}