#include <math.h>

struct Indices {
    int first_index;
    int second_index;
};

struct Indices task2(int A[], size_t n, double R) {
    struct Indices indices = { -1, -1 };
    if (n < 2) return indices;
    double razn = fabs((A[0] + A[1]) - R);
    indices.first_index = 0; 
    indices.second_index = 1;
    for (size_t i = 0; i < n; i++)
    {
        for (size_t j = i + 1; j < n; j++)
        {
            double tek_sum = A[i] + A[j];
            double razn_r = fabs(tek_sum - R);

            if (razn_r < razn) {
                razn = razn_r;
                indices.first_index = i;
                indices.second_index = j;
            }
        }
    }
    return indices;
}
