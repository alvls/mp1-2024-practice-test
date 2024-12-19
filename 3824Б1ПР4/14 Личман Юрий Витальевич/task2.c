#include <stdio.h>
#include <limits.h>
int task2(unsigned A[], size_t n) {
    if (n == 0) {
        return -1;
    }

    int minSeriesLength = INT_MAX; 
    int currentSeriesLength = 1;

    
    for (size_t i = 1; i < n; ++i) {
        if (A[i] == A[i - 1]) {
            currentSeriesLength++; 
        } else {
            if (currentSeriesLength < minSeriesLength) {
                minSeriesLength = currentSeriesLength;
            }
            currentSeriesLength = 1;
        }
    }

    if (currentSeriesLength < minSeriesLength) {
        minSeriesLength = currentSeriesLength;
    }

    return minSeriesLength;
}
