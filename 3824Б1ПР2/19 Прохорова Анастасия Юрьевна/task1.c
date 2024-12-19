#include <stdio.h>

void task1(unsigned A[], size_t N) {
   
    unsigned first = A[0];    
    unsigned last = A[N - 1]; 
    for (size_t i = 0; i < N; ++i) {
        if (A[i] % 2 == 0) {
            A[i] += first;
        } else {
            A[i] += last;
        }
    }
}
