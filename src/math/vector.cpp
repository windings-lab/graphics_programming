#include "math/vector.h"


float GP::Vector3::Length() const {
    return std::sqrtf((x * x) + (y * y) + (z * z));
}

void GP::Vector3::Normalize() {
    *this = GP::Normalized(*this);
}

GP::Vector3 GP::Vector3::Normalized() const {
    return GP::Normalized(*this);
}

GP::Vector3 GP::Vector3::Cross(const Vector3 b) const {
    return CrossProduct(*this, b);
}

GP::Vector3 GP::Vector3::operator/(const float scalar) const {
    return Vector3(x / scalar, y / scalar, z / scalar);
}

void GP::Vector3::operator/=(const float scalar) {
    x /= scalar;
    y /= scalar;
    z /= scalar;
}

GP::Vector3 GP::Vector3::operator*(const float scalar) const {
    return Vector3(x * scalar, y * scalar, z * scalar);
}

void GP::Vector3::operator*=(const float scalar) {
    x *= scalar;
    y *= scalar;
    z *= scalar;
}

float GP::Vector3::operator*(const Vector3 other) const {
    return DotProduct(*this, other);
}

GP::Vector3 GP::Vector3::operator+(const Vector3 vector) const {
    return Vector3(x + vector.x, y + vector.y, z + vector.z);
}

void GP::Vector3::operator+=(const Vector3 vector) {
    x += vector.x;
    y += vector.y;
    z += vector.z;
}

GP::Vector3 GP::Vector3::operator-(const Vector3 vector) const {
    return Vector3(x - vector.x, y - vector.y, z - vector.z);
}

void GP::Vector3::operator-=(const Vector3 vector) {
    x -= vector.x;
    y -= vector.y;
    z -= vector.z;
}

GP::Vector3 GP::Normalized(Vector3 vec) {
    const float len = vec.Length();
    const float invLen = 1.f / std::fmax(len, std::numeric_limits<float>::epsilon());
    vec.x *= invLen;
    vec.y *= invLen;
    vec.z *= invLen;
    return vec;
}

float GP::DotProduct(const Vector3 a, const Vector3 b) {
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

GP::Vector3 GP::CrossProduct(const Vector3 a, const Vector3 b) {
    return Vector3(
        a.y * b.z - a.z * b.y,
        a.z * b.x - a.x * b.z,
        a.x * b.y - a.y * b.x
    );
}
