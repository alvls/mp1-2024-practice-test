#include <stddef.h>

int task2(unsigned A[], size_t n)
{
    if (n == 0) {
        return -1; // массив пуст
    }

    size_t min_length = 1;
    size_t current_length = 1;
    unsigned prev = A[0];

    for (size_t i = 1; i < n; i++) {
        if (A[i] == prev) {
            current_length++;
        } else {
            if (current_length < min_length || min_length == -1) {
                min_length = current_length;
            }
            current_length = 1;
        }
        prev = A[i];
    }
    
    if (current_length < min_length || min_length == -1) {
        min_length = current_length;
    }

    return min_length;
}
