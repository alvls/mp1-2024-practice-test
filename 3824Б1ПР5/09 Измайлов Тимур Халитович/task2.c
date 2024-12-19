#include <stddef.h>

long long task2(unsigned A[], size_t n) {
    if (n < 2) {
        
        return -1;
    }

    long long minLocalMax = -1; 

    for (size_t i = 0; i < n; ++i) {
        
        if ((i == 0 || A[i] >= A[i - 1]) && (i == n - 1 || A[i] >= A[i + 1])) {
            if (minLocalMax == -1 || (long long)A[i] < minLocalMax) {
                minLocalMax = A[i];
            }
        }
    }

    return minLocalMax;
}
