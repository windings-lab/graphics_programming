#include "math/matrix.h"

int main()
{
    using namespace GP;

    Matrix<1, 3> matrix;
    Matrix<3, 3> matrix2;

    std::cout << matrix * matrix2 << std::endl;

    return 0;
}