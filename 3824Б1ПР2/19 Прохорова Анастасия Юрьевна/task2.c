#include <stdio.h>

int task2(unsigned A[], size_t n) {
    if (n < 2) return 0; 
    
    int series_count = 0; 

    for (size_t i = 1; i < n; ++i) {
        if (A[i] == A[i - 1]) {
            if ((i == n - 1) || (A[i] != A[i + 1])) {
                ++series_count; 
            }
            ++i; 
        }
    }

    return series_count;
}
