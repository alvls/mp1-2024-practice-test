// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Назовем «серией» группу подряд идущих одинаковых элементов, 
// а длиной серии – количество этих элементов (длина серии может быть равна 1).
// Найти длину наибольшей серии.
int task2(unsigned A[], size_t n)
{
    int maxLength = 1; 
    int tekushayaLength = 1;
    for (size_t i = 1; i < n; i++) {
        if (A[i] == A[i - 1]) {
            tekushayaLength++;
        }
        else {
            if (tekushayaLength > maxLength) {
                maxLength = tekushayaLength;
            }
            tekushayaLength = 1;
        }
    }
    if (tekushayaLength > maxLength) {
        maxLength = tekushayaLength;
    }
    return maxLength;
}