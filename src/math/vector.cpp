#include "math/vector.h"


float GP::Vector3::Length() const {
    return std::sqrtf((x * x) + (y * y) + (z * z));
}

void GP::Vector3::Normalize() {
    const float len = Length();
    const float invLen = 1.f / std::fmax(len, std::numeric_limits<float>::epsilon());
    x *= invLen;
    y *= invLen;
    z *= invLen;
}

GP::Vector3 GP::Vector3::Normalized() const {
    const float len = Length();
    const float invLen = 1.f / std::fmax(len, std::numeric_limits<float>::epsilon());
    return *this * invLen;
}

GP::Vector3 GP::Vector3::operator/(const float scalar) const {
    return Vector3(x / scalar, y / scalar, z / scalar);
}

void GP::Vector3::operator/=(const float scalar) {
    x /= scalar;
    y /= scalar;
    z /= scalar;
}

GP::Vector3 GP::Vector3::operator*(float scalar) const {
    return Vector3(x * scalar, y * scalar, z * scalar);
}

void GP::Vector3::operator*=(float scalar) {
    x *= scalar;
    y *= scalar;
    z *= scalar;
}
