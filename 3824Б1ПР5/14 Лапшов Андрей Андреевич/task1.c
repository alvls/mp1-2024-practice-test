#include <stdio.h>

int task1(unsigned A[], size_t N)
{
    // Устанавливаем, что первый элемент максимальный
    unsigned max = A[0];
    unsigned maxIndex = 0;

    // Если следующий элемент больше максимального, то обновляем индекс максимального
    for (size_t i = 1; i < N; i++) {
        if (A[i] > max) {
            max = A[i];
            maxIndex = i;
        }
    }
    printf("Индекс последнего экстремального элемента: %u\n", maxIndex);
    return maxIndex;
}
