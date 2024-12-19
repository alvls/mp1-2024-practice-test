// Задача 1. Дан непустой массив A, содержащий n целых чисел.
// Найти номер его последнего минимального элемента.
int task1(int A[], size_t n)
{
int min = A[0];
int lastIndex = 0;

for (int i = 1; i < n; i++)
{
    if (A[i] <= min)
    {
        min = A[i];
        lastIndex = i;
    }
}

return lastIndex;
}
