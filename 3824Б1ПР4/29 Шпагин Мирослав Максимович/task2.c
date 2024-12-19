#include <stdio.h>
#include <limits.h>

long long task2(unsigned A[], size_t n)
{
    long long bz = -1;
    for (size_t i = 1; i < n; i++){
        if (A[i] >= A[i-1] && A[i] >= A[i+1] && A[i] < bz){
            bz = A[i];
        }
    }
    return bz;
}
