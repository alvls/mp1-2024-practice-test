// Задача 2. Дан непустой массив A, содержащий n вещественных чисел.
// Найти индексы k1 и k2 двух элементов массива, 
// расстояние |A[k1] – A[k2]| между которыми минимально.
// Если таких пар в массиве несколько, вернуть пару с наименьшими индексами.
// При невозможности найти пару, вернуть {-1,-1}.
#include <stdio.h>
#include <float.h>
#include <math.h>

struct Indices {
    int first_index;
    int second_index;
};

struct Indices task2(double A[], size_t n) {
    struct Indices indices = {-1, -1};

    if (n < 2) {
        return indices;
    }

    double min_distance = fabs(A[0] - A[1]);
    indices.first_index = 0;
    indices.second_index = 1;

    for (size_t i = 0; i < n - 1; i++) {
        for (size_t j = i + 1; j < n; j++) {
            double distance = fabs(A[i] - A[j]);

            if (distance < min_distance || (distance == min_distance && (i + j) < (indices.first_index + indices.second_index))) {
                min_distance = distance;
                indices.first_index = (int)i;
                indices.second_index = (int)j;
            }
        }
    }

    return indices;
}
