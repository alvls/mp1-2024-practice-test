// Задача 1. Дан непустой массив A, содержащий n целых чисел.
// Найти номер его последнего минимального элемента.
int task1(int A[], size_t n)
{
    int min_value = A[0];
    int min_index = 0;
    for(size_t i = 0; i < n; i++)
    {
        if(A[i] < min_value)
        {
            min_value = A[i];
            min_index = i;
        }
        else if(A[i] == min_value)
        {
            min_index = i; // Обновляем индекс на текущий, так как ищем последний минимальный элемент
        }
    }
    return min_index;
}
