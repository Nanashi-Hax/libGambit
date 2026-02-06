#pragma once

namespace Library::Gambit::Cmn::KDUtl
{   
    struct AttT
    {
        float m00, m01, m02;
        float m10, m11, m12;
        float m20, m21, m22;

        AttT() : m00(0.0f), m01(0.0f), m02(0.0f), m10(0.0f), m11(0.0f), m12(0.0f), m20(0.0f), m21(0.0f), m22(0.0f) {}
    };
}