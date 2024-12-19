#include <stddef.h>

size_t task1(int A[], size_t n) {
    if (n == 0) {
        return (size_t)-1; 
    }

    size_t minIndex = 0;
    for (size_t i = 1; i < n; ++i) {
        if (A[i] <= A[minIndex]) {
            minIndex = i;
        }
    }
    return minIndex;
}
