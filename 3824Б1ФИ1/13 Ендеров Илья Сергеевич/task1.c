// Задача 1. Дан непустой массив A из N элементов.
// Найти номер первого экстремального (минимального или максимального) 
// элемента в нем.
int task1(unsigned A[], size_t N)
{
    unsigned mn = A[0];
    unsigned mx = A[0];

    unsigned pos = 0;

    for (int i = 0; i < N; i++) 
    {
        if (A[i] < mn) {
            mn = A[i];
            
        }
        if (A[i] > mx)
            mx = A[i];
    }
    
    for (int j = 0; j < N; j++) {
        if (A[j] == mn || A[j] == mx)
            return j;
    }
}
