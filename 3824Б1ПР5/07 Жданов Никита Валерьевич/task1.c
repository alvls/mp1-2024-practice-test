// Задача 1. Дан непустой массив A, содержащий n целых чисел, среди которых
// не менее двух нулей. Найти сумму элементов, расположенных между первыми
// двумя нулями.
int task1(int A[], size_t n)
{
    int first_zero_index = -1;
    int second_zero_index = -1;

    // Поиск первых двух нулей
    for (size_t i = 0; i < n; i++) {
        if (A[i] == 0) {
            if (first_zero_index == -1) {
                first_zero_index = i; // Запоминаем индекс первого нуля
            } else if (second_zero_index == -1) {
                second_zero_index = i; // Запоминаем индекс второго нуля
                break; // Два нуля найдены, выходим из цикла
            }
        }
    }

    // Суммируем элементы между первыми двумя нулями
    int sum = 0;
    for (size_t i = first_zero_index + 1; i < second_zero_index; i++) {
        sum += A[i];
    }

    return sum; // Возвращаем сумму
}
