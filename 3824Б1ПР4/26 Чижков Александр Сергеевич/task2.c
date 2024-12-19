#include <stdio.h>
#include <limits.h> 

long long task2(unsigned A[], size_t n) {
    if (n <= 1) return -1; 

    long long max_local_min = LLONG_MIN; 
    int found_local_min = 0; 

    
    if (n > 1 && A[0] <= A[1]) {
        max_local_min = A[0];
        found_local_min = 1;
    }

    
    for (size_t i = 1; i < n - 1; ++i) {
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

int main() {
    unsigned arr1[] = {3, 1, 2, 3, 1, 4, 5};
    size_t n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Максимальный локальный минимум: %lld\n", task2(arr1, n1)); 

    unsigned arr2[] = {5, 4, 3, 2, 1};
    size_t n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Максимальный локальный минимум: %lld\n", task2(arr2, n2)); 

    unsigned arr3[] = {1, 2, 3, 4, 5};
    size_t n3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("Максимальный локальный минимум: %lld\n", task2(arr3, n3)); 

    unsigned arr4[] = {5, 1, 2, 3, 4, 5, 1};
    size_t n4 = sizeof(arr4) / sizeof(arr4[0]);
    printf("Максимальный локальный минимум: %lld\n", task2(arr4, n4)); 

    unsigned arr5[] = {1};
    size_t n5 = sizeof(arr5) / sizeof(arr5[0]);
    printf("Максимальный локальный минимум: %lld\n", task2(arr5, n5)); 

    unsigned arr6[] = {};
    size_t n6 = sizeof(arr6) / sizeof(arr6[0]);
    printf("Максимальный локальный минимум: %lld\n", task2(arr6, n6)); 

    return 0;
}
