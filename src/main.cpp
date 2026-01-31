#include "math/matrix.h"

int main()
{
    using namespace GP;

    Matrix<4, 4> matrix;
    Matrix<4, 2> matrix2;

    std::cout << matrix * matrix2 << std::endl;

    return 0;
}