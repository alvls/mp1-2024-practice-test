// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Заменить в нем все элементы, встречающиеся более двух раз, на -1.
#include <stdio.h>
#include <stdlib.h>

typedef struct { 
    int value; 
    int count; 
} countElem; 
 
void task2(int A[], size_t n) { 
     
    countElem* counts = (countElem*)malloc(n * sizeof(countElem)); 
    size_t magCount = 0; 

    //see how entries
    for (size_t i = 0; i < n; i++) { 
        int found = 0; 
        for (size_t j = 0; j < magCount; j++) { 
            if (counts[j].value == A[i]) { 
                counts[j].count++; 
                found = 1; 
                break; 
            } 
        } 
        if (!found) { 
            counts[magCount].value = A[i]; 
            counts[magCount].count = 1; 
            magCount++; 
        } 
    } 
 
    for (size_t i = 0; i < n; i++) { 
        for (size_t j = 0; j <magCount; j++) { 
            if (A[i] == counts[j].value && counts[j].count > 2) { 
                A[i] = -1; 
                break; 
            } 
        } 
    } 
    free(counts); 
}
