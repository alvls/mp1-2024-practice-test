#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
size_t task1(int A[], size_t n) {
    if (n <= 1) {
        return 0; // ПОПЫТКА N3 нормально все отправить.
    }

    size_t count = 0;
    for (size_t i = 0; i < n - 1; i++) {
        if (A[i] < A[i + 1]) {
            count++;
        }
    }
    return count;
}
