#include <stdio.h>
size_t task2(int A[], size_t n)
{
    size_t c=0;
    if (n>1) if (A[0]>=A[1])c++;
    for(int i=1;i<n-1;i++){
        if (A[i]>=A[i-1] || A[i]>=A[i+1])c++;
    }
    if (n>1) if (A[n-1]>=A[n-2])c++;
    return c;
}
