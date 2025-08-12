#ifndef PMH_HPP_
#define PMH_HPP_

#include <cmath>

namespace pmh
{
    constexpr double PI = 3.1415926535;

    template <class Type>
    Type raidans(Type degrees)
    {
        return Type(PI) * (degrees / Type(180));
    }

    template <class Type>
    Type degrees(Type radians)
    {
        return 180 * (radians / Type(PI));
    }

    template <class Type>
    class Vector2
    {
    public:
        Type x;
        Type y;

        Vector2(Type x = Type(0), Type y = Type(0)) : x(x), y(y)
        {
        }

        void operator=(Vector2 vec2)
        {
            this->x = vec2.x;
            this->y = vec2.y;
        }

        void operator+=(Vector2 &vec2)
        {
            this->x += vec2.x;
            this->y += vec2.y;
        }

        void operator-=(Vector2 &vec2)
        {
            this->x -= vec2.x;
            this->y -= vec2.y;
        }

        void operator*=(Vector2 &vec2)
        {
            this->x *= vec2.x;
            this->y *= vec2.y;
        }

        void operator/=(Vector2 &vec2)
        {
            this->x /= vec2.x;
            this->y /= vec2.y;
        }

        void operator+=(float A)
        {
            this->x += A;
            this->y += A;
        }

        void operator-=(float A)
        {
            this->x -= A;
            this->y -= A;
        }

        void operator*=(float A)
        {
            this->x *= A;
            this->y *= A;
        }

        void operator/=(float A)
        {
            this->x /= A;
            this->y /= A;
        }

        Vector2 operator*(Vector2 vec2)
        {
            return (
                vec2.x * this->x,
                vec2.y * this->y);
        }

        Vector2 operator/(Vector2 vec2)
        {
            return (
                vec2.x / this->x,
                vec2.y / this->y);
        }

        Vector2 operator-(Vector2 vec2)
        {
            return (
                vec2.x - this->x,
                vec2.y - this->y);
        }

        Vector2 operator+(Vector2 vec2)
        {
            return (
                vec2.x + this->x,
                vec2.y + this->y);
        }

        Type dot(const Vector2 &vec2)
        {
            return this->x * vec2.x +
                   this->y * vec2.y;
        }

        static Type dot(const Vector2 &vec2A, const Vector2 &vec2B)
        {
            return vec2A.x * vec2B.x +
                   vec2A.y * vec2B.y;
        }

        Type len()
        {
            return static_cast<Type>(
                sqrtl(
                    powl(static_cast<long double>(this->x), 2.0) +
                    powl(static_cast<long double>(this->y), 2.0)));
        }

        static Type len(const Vector2 &vec2)
        {
            return static_cast<Type>(
                sqrtl(
                    powl(static_cast<long double>(vec2.x), 2.0) +
                    powl(static_cast<long double>(vec2.y), 2.0)));
        }
    };

    template <class Type>
    class Vector3
    {
    public:
        Type x;
        Type y;
        Type z;

        Vector3(Type x = 0, Type y = 0, Type z = 0) : x(x), y(y), z(z)
        {
        }

        void operator=(Vector3 vec3)
        {
            this->x = vec3.x;
            this->y = vec3.y;
            this->z = vec3.z;
        }

        void operator+=(Vector3 &vec3)
        {
            this->x += vec3.x;
            this->y += vec3.y;
            this->z += vec3.z;
        }

        void operator-=(Vector3 &vec3)
        {
            this->x -= vec3.x;
            this->y -= vec3.y;
            this->z -= vec3.z;
        }

        void operator*=(Vector3 &vec3)
        {
            this->x *= vec3.x;
            this->y *= vec3.y;
            this->z *= vec3.z;
        }

        void operator/=(Vector3 &vec3)
        {
            this->x /= vec3.x;
            this->y /= vec3.y;
            this->z /= vec3.z;
        }

        void operator+=(float A)
        {
            this->x += A;
            this->y += A;
            this->z += A;
        }

        void operator-=(float A)
        {
            this->x -= A;
            this->y -= A;
            this->z -= A;
        }

        void operator*=(float A)
        {
            this->x *= A;
            this->y *= A;
            this->z *= A;
        }

        void operator/=(float A)
        {
            this->x /= A;
            this->y /= A;
            this->z /= A;
        }

        Vector3 operator*(Vector3 vec3)
        {
            return (
                vec3.x * this->x,
                vec3.y * this->y,
                vec3.z * this->z);
        }

        Vector3 operator/(Vector3 vec3)
        {
            return (
                vec3.x / this->x,
                vec3.y / this->y,
                vec3.z / this->z);
        }

        Vector3 operator-(Vector3 vec3)
        {
            return (
                vec3.x - this->x,
                vec3.y - this->y,
                vec3.z - this->z);
        }

        Vector3 operator+(Vector3 vec3)
        {
            return (
                vec3.x + this->x,
                vec3.y + this->y,
                vec3.z + this->z);
        }
    };
}

#endif // !PMH_HPP_