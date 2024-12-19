// Задача 1. Даны числа a, b (0 < a < b) и непустой массив A из N элементов.
// Найти минимальный из тех элементов A, которые содержатся в интервале (a, b).
// Вернуть 0, если требуемые элементы отсутствуют.
#include <stdio.h>
#include <locale.h>

void find_min_in_range(int a, int b, int A[], int N) {
    setlocale(LC_ALL, "Russian"); 

    int min = 0; 
    int found = 0; 

    for (int i = 0; i < N; i++) {
        if (A[i] > a && A[i] < b) {
            if (!found || A[i] < min) {
                min = A[i];
                found = 1; 
            }
        }
    }

    if (found) {
        printf("Минимальный элемент в интервале (%d, %d): %d\n", a, b, min);
    }
    else {
        printf("0\n");
    }
}

int main() {
    int A[] = { 1, 5, 10, 15, 20 }; 
    int a = 5, b = 15; 
    int N = sizeof(A) / sizeof(A[0]); 

    find_min_in_range(a, b, A, N); 

    return 0; 
}
