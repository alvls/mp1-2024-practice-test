#incluse <stdlib.h>
int* task1(int A[], size_t N)
{
    if (N == 0) //будем возвращать NULL, если массив будет пустой
        return NULL;
    int* B = (int*)malloc(N * sizeof(int)); //выделяем динамическую память для нового массива
    if (B == NULL) //проверяем успешность выделения памяти
        return NULL;
    size_t index = 0;
    for (size_t i = 0; i < N; i += 2) //копирование четных индексов
    {
        B[index++] = A[i];
    }
    for (size_t i = 1; i < N; i += 2) //копирование нечетных индексов
    {
        B[index++] = A[i];
    }
    return B;
}
