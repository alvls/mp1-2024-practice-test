// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Назовем «серией» группу подряд идущих одинаковых элементов, 
// а длиной серии – количество этих элементов (длина серии может быть равна 1).
// Найти длину наибольшей серии.
int task2(unsigned A[], size_t n)
{
     size_t max_length = 1;
    size_t length = 1;
    for (size_t i = 1; i < n; i++) {
        if (A[i] == A[i - 1]) {
            length++;
        }
        else {
            if (length > max_length) {
                max_length = length;
            }
            length = 1;
        }
    }

    if (length > max_length) {
        max_length = length;
    }

    return max_length;
}
