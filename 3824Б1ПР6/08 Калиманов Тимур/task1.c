#include <stddef.h> 
int task1(int A[], size_t n)
{
    int zerolast = -1;
    int zerolast2 = -1; 
    int sum = 0;

    for (size_t i = 0; i < n; i++) {
        if (A[i] == 0) {
           zerolast2 = zerolast; 
           zerolast = i;
        }
    }
    if (zerolast != -1 && zerolast2 != -1) {
        for (size_t i = zerolast2 + 1; i < zerolast; i++) {
            sum += A[i];
        }
    }

    return sum;
}
