#include <limits.h>

long long task2(unsigned A[], size_t n) {
    if (n < 3) return -1;

    unsigned minLocalMax = UINT_MAX;
    int found = 0; 
    for (size_t i = 1; i < n - 1; ++i) {
        if (A[i] >= A[i - 1] && A[i] >= A[i + 1]) {
          
            found = 1;
            if (A[i] < minLocalMax) {
                minLocalMax = A[i];
            }
        }
    }

    if (!found) return -1;

    return minLocalMax;
}
