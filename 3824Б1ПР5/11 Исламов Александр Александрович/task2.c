// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Заменить в нем все элементы, встречающиеся более двух раз, на -1.
#include <stdio.h>
#include <locale.h>
#include <stddef.h>

void task2(int A[], size_t n) {
    setlocale(LC_ALL, "Russian"); 

    int count[100] = { 0 };

    
    for (size_t i = 0; i < n; i++) {
        if (A[i] < 100) { 
            count[A[i]]++;
        }
    }

   
    for (size_t i = 0; i < n; i++) {
        if (A[i] < 100 && count[A[i]] > 2) { 
            A[i] = -1;
        }
    }
}

void example() {
    int A[] = { 1, 2, 2, 3, 4, 2, 5, 3 };
    size_t n = sizeof(A) / sizeof(A[0]);

    task2(A, n);

    for (size_t i = 0; i < n; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int main() {
    example();
    return 0;
}
