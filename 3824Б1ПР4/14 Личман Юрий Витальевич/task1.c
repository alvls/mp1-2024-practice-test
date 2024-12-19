#include <stdio.h>

int task1(unsigned A[], size_t N) {
    if (N == 0) {
        return -1;
    }

    size_t minIndex = 0;
    size_t maxIndex = 0;

    for (size_t i = 1; i < N; ++i) {
        if (A[i] <= A[minIndex]) {
            minIndex = i;
        }
        if (A[i] >= A[maxIndex]) {
            maxIndex = i;
        }
    }
    
    return (minIndex > maxIndex) ? minIndex : maxIndex;
}
