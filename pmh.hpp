#ifndef PMH_HPP_
#define PMH_HPP_

namespace pmh
{
    template <class T>
    class Vector2
    {
    public:
        T x;
        T y;

        Vector2(T x, T y) : x(x), y(y)
        {
        }

        void operator=(Vector2 &vec2)
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

        float dot(const Vector2 &vec2)
        {
            return this->x * vec2.x +
                   this->y * vec2.y;
        }

        static float dot(const Vector2 &vec2A, const Vector2 &vec2B)
        {
            return vec2A.x * vec2B.x +
                   vec2A.y * vec2B.y;
        }
    };
}

#endif // !PMH_HPP_