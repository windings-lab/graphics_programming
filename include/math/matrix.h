#pragma once

namespace GP {
    template<std::size_t Rows, std::size_t Cols>
    class Matrix {
    public:
        const std::array<float, Cols>& operator [](size_t i) const {
            return m[i];
        }
        std::array<float, Cols>& operator [](size_t i) {
            return m[i];
        }

        template<size_t OtherCols>
        Matrix<Rows, OtherCols> operator*(const Matrix<Cols, OtherCols>& rhs) {
            Matrix<Rows, OtherCols> result{};
            for (std::size_t i = 0; i < Rows; ++i)
                for (std::size_t j = 0; j < OtherCols; ++j)
                    for (std::size_t k = 0; k < Cols; ++k)
                        result[i][j] += m[i][k] * rhs[k][j];

            return result;
        }

    private:
        std::array<std::array<float, Cols>, Rows> m{};
    };

    template<std::size_t Rows, std::size_t Cols>
    inline std::ostream& operator<<(std::ostream& os, const Matrix<Rows, Cols>& v) {
        for (std::size_t i = 0; i < Rows; ++i)
        {
            os << "|";
            for (std::size_t j = 0; j < Cols; ++j)
            {
                os << v[i][j];
                if (j + 1 < Cols)
                    os << "\t";
            }
            os << "|\n";
        }
        return os;
    }
}
