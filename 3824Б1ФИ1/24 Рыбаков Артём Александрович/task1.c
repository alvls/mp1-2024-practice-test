// Задача 1. Дан непустой массив A, содержащий n вещественных чисел.
// Вернуть 1, если его элементы образуют геометрическую прогрессию,
// иначе вернуть 0.
#include <math.h>
int task1(double A[], size_t n)
{
    int i;
    double ratio;
    if (n < 2)
        return 1;
    ratio = A[1] / A[0];
    for (i = 1; i < n - 1; ++i)
    {
        if (fabs(A[i + 1] / A[i] - ratio) > 1e-6)
            return 0;
    }
    return 1;
}
