#include <stdio.h>
#include <limits.h>

int task1(int A[], size_t n) {
    int min_znach = INT_MAX;
    int index = -1;
    for (size_t i = 0; i < n; i++) {
        if (A[i] < min_value) {
            min_znach = A[i];
            index = i; 
        } else if (A[i] == min_znach) {
            index = i; 
        }
    }

    return index; 
}
