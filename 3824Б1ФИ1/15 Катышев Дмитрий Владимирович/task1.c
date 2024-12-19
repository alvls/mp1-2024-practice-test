// Задача 1. Дан непустой массив A из N элементов.
// Найти количество элементов, расположенных между первым минимальным
// и последним максимальным элементами.
int task1(unsigned A[], size_t N)
{
    if (N < 3)
        return 0;
    int first_min_index = 0, last_max_index = 0;
    unsigned min = A[0], max = A[0];
    for (size_t i = 0; i < N; ++i)
    {
        if (A[i] < min)
        {
            min = A[i];
            first_min_index = i;
        }
    }
    for (int i = 0; i < N; i++)  
    {
        if (A[i] >= max)
        {
            max = A[i];
            last_max_index = i;
        }
    }
    if (min == max) return 0;
    if (first_min_index < last_max_index)
    {
        return last_max_index - first_min_index - 1;
    }
    else
    {
        return 0;
    }
}
