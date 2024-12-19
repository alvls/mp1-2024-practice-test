// Задача 2. Даны: 1) непустой массив A, содержащий n целых чисел, 
// 2) вещественное число R.
// Найти индексы двух элементов массива, сумма которых наиболее близка к числу R.
// Если таких пар в массиве несколько, вернуть пару с наименьшими индексами.
// При невозможности найти пару, вернуть {-1,-1}.
#include <math.h>
#include <float.h>
struct Indices {
    int first_index;
    int second_index;
};

struct Indices task2(int A[], size_t n, double R) {
    struct Indices indices = { -1, -1 };
    if (n < 2) {
        return indices;
    }

    double closest_diff = DBL_MAX;

    for (size_t i = 0; i < n - 1; ++i) {
        for (size_t j = i + 1; j < n; ++j) {
            double sum = A[i] + A[j];
            double diff = fabs(sum - R);

            if (diff < closest_diff || (diff == closest_diff && indices.first_index == -1)) {
                closest_diff = diff;
                indices.first_index = i;
                indices.second_index = j;
            }
        }
    }

    return indices;
}
