#include <stdio.h>
#include <stdlib.h>
size_t task1(int A[], size_t n)
{
    size_t c=0;
    for(int i=1;i<n;i++){
        if (A[i]<A[i-1])c++;
    }
    return c;
}
