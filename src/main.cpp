#include "math/vector.h"

int main()
{
    using namespace GP;

    static_assert(std::is_standard_layout_v<Vector3> == true);
    static_assert(std::is_trivially_copyable_v<Vector3> == true);

    Vector3 vec = {2, 2 ,5};

    std::cout << "Length: " << vec.Length() << "\n";
    std::cout << "Normalized: " << vec.Normalized() << "\n";

    return 0;
}