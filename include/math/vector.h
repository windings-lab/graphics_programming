#pragma once

namespace GP
{
    struct Vector3 {
        float x, y, z;

        [[nodiscard]] float Length() const;

        void Normalize();
        [[nodiscard]] Vector3 Normalized() const;

        Vector3 operator/(float scalar) const;
        void operator/=(float scalar);

        Vector3 operator*(float scalar) const;
        void operator*=(float scalar);
    };

    // operator<< inside GP
    inline std::ostream& operator<<(std::ostream& os, const Vector3& v) {
        os << "(" << v.x << ", " << v.y << ", " << v.z << ")";
        return os;
    }
}
