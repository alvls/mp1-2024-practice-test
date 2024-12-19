// Задача 1. Дан непустой массив A, содержащий n целых чисел, среди которых
// не менее двух нулей. Найти сумму элементов, расположенных между последними 
// двумя нулями.
int task1(int A[], size_t n)
{
  int last_zero_index = -1;
    int second_last_zero_index = -1;

    for (size_t i = 0; i < n; i++) {
        if (A[i] == 0) {
            second_last_zero_index = last_zero_index;
            last_zero_index = i;
        }
    }

    if (second_last_zero_index == -1) {
        return 0;
    }

    int sum = 0;
    for (size_t i = second_last_zero_index + 1; i < last_zero_index; i++) {
        sum += A[i];
    }
  return sum;
}
