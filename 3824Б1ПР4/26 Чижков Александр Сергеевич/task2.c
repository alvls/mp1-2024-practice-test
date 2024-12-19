#include <limits.h>

long long task2(unsigned A[], size_t n) {
    if (n <= 1) return -1;

    long long max_local_min = LLONG_MIN;
    int found_local_min = 0;

    if (n > 1 && A[0] <= A[1]) {
        max_local_min = A[0];
        found_local_min = 1;
    }

    for (size_t i = 1; i < n - 1; i++) {
        if (A[i] <= A[i - 1] && A[i] <= A[i + 1]) {
            max_local_min = (max_local_min > A[i]) ? max_local_min : A[i];
            found_local_min = 1;
        }
    }

    if (n > 1 && A[n - 1] <= A[n - 2]) {
        max_local_min = (max_local_min > A[n - 1]) ? max_local_min : A[n - 1];
        found_local_min = 1;
    }

    return found_local_min ? max_local_min : -1;
}
