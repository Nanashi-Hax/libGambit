#pragma once

namespace Library::Gambit::sead
{   
    template <typename T>
    struct Vector2
    {
        T x, y;

        Vector2() : x(0), y(0) {}
        Vector2(T x, T y) : x(x), y(y) {}
    };

    template <typename T>
    struct Vector3
    {
        T x, y, z;

        Vector3& operator*=(T s)
        {
            x *= s;
            y *= s;
            z *= s;
            return *this;
        }
        
        Vector3() : x(0), y(0), z(0) {}
        Vector3(T x, T y, T z) : x(x), y(y), z(z) {}
    };

    struct Color4f
    {
        Color4f() : r(0), g(0), b(0), a(0) {}
        Color4f(float r, float g, float b, float a) : r(r), g(g), b(b), a(a) {}

        float r, g, b, a;

        static const Color4f black;
        static const Color4f white;
        static const Color4f red;
        static const Color4f green;
        static const Color4f blue;
    };

    inline const Color4f black{ 0.0f, 0.0f, 0.0f, 1.0f };
    inline const Color4f white{ 1.0f, 1.0f, 1.0f, 1.0f };
    inline const Color4f red{ 1.0f, 0.0f, 0.0f, 1.0f };
    inline const Color4f green{ 0.0f, 1.0f, 0.0f, 1.0f };
    inline const Color4f blue{ 0.0f, 0.0f, 1.0f, 1.0f };

    template <typename T>
    struct Matrix34
    {
        T m00, m01, m02, m10, m11, m12, m20, m21, m22, m30, m31, m32;

        Matrix34() : m00(0), m01(0), m02(0), m10(0), m11(0), m12(0), m20(0), m21(0), m22(0), m30(0), m31(0), m32(0) {}
    };

    template <typename T>
    struct Matrix44
    {
        T m00, m01, m02, m03, m10, m11, m12, m13, m20, m21, m22, m23, m30, m31, m32, m33;

        Matrix44() : m00(0), m01(0), m02(0), m03(0), m10(0), m11(0), m12(0), m13(0), m20(0), m21(0), m22(0), m23(0), m30(0), m31(0), m32(0), m33(0) {}
    };

    template <typename T>
    struct BoundBox3
    {
        T minX, minY, minZ, maxX, maxY, maxZ;

        BoundBox3() : minX(0), minY(0), minZ(0), maxX(0), maxY(0), maxZ(0) {}
    };
}