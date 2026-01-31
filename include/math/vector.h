#pragma once

namespace GP
{
    struct Vector3 {
        float x, y, z;

        [[nodiscard]] float Length() const;

        void Normalize();
        [[nodiscard]] Vector3 Normalized() const;

        [[nodiscard]] Vector3 Cross(Vector3) const;

        Vector3 operator/(float scalar) const;
        void operator/=(float scalar);

        Vector3 operator*(float scalar) const;
        void operator*=(float scalar);

        float operator*(Vector3) const;

        Vector3 operator+(Vector3 vector) const;
        void operator+=(Vector3 vector);

        Vector3 operator-(Vector3 vector) const;
        void operator-=(Vector3 vector);
    };

    // operator<< inside GP
    inline std::ostream& operator<<(std::ostream& os, const Vector3& v) {
        os << "(" << v.x << ", " << v.y << ", " << v.z << ")";
        return os;
    }

    Vector3 Normalized(Vector3);
    float DotProduct(Vector3, Vector3);
    Vector3 CrossProduct(Vector3, Vector3);
}
