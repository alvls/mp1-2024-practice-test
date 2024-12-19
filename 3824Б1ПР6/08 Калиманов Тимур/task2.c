#include <stddef.h> 
long long task2(unsigned A[], size_t n) {
    if (n < 3) { 
        return -1;
    }
    long long max = -1;
    for (size_t i = 1; i < n - 1; i++) {
        if (A[i] >= A[i - 1] && A[i] >= A[i + 1]) { 
            if (A[i] > max) {
                max = A[i]; 
            }
        }
    }
    return max;
}
