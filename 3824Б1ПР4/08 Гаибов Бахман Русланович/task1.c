#include <stdio.h>
#include <limits.h>

int task1(int A[], size_t n) {
    if (n == 0) {
        return INT_MIN;
    }

    int lastZeroIndex = -1;
    int secondLastZeroIndex = -1;
    int zeroCount = 0;

    for (size_t i = 0; i < n; ++i) {
        if (A[i] == 0) {
            secondLastZeroIndex = lastZeroIndex;
            lastZeroIndex = i;
            zeroCount++;
        }
    }

    if (zeroCount < 2) {
        return INT_MIN;
    }

    int sum = 0;
    for (int i = secondLastZeroIndex + 1; i < lastZeroIndex; ++i) {
        sum += A[i];
    }

    return sum;
}
