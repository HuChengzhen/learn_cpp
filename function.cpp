#include <iostream>

struct Matrix
{
    int rows;
    int cols;
    float *pData;
};

float matrix_max(Matrix & mat);

int main()
{
    Matrix matA = {3, 4};
    matA.pData = new float[matA.rows * matA.cols]{1.f, 2.f, 3.f};
    std::cout << matrix_max(matA);
}

float matrix_max(Matrix & mat)
{
    float max = -__FLT_MAX__;
    for (int r = 0; r < mat.rows; r++)
    {
        for (int c = 0; c < mat.cols; c++)
        {
            float val = mat.pData[r * mat.cols + c];
            if (val > max)
            {
                max = val;
            }
        }
    }
    return max;
}