// Задача 1. Дан непустой массив A из N элементов.
// Найти количество элементов, расположенных между первым минимальным
// и последним максимальным элементами.
int task1(unsigned A[], size_t N)

{

    if (N == 0) return -1; 

    int min_ind = 0, max_ind = 0;

    unsigned min = A[0], max = A[0];

    for (size_t i = 1; i < N; ++i) {

        if (A[i] < min) {

            min = A[i];

            min_ind = i;

        }

        if (A[i] >= max) {

            max= A[i];

            max_ind = i;

        }

    }

    if (min_ind == max_ind) return -1;

    int count = abs(max_ind - min_ind) - 1;

    return count;

}
