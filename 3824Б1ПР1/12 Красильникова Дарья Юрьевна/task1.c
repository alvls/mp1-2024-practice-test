// Задача 1. Даны числа a, b (0 < a < b) и непустой массив A из N элементов.
// Найти максимальный из тех элементов A, которые содержатся в интервале (a, b).
// Вернуть 0, если требуемые элементы отсутствуют.
int task1(unsigned A[], size_t n, unsigned a, unsigned b)
{
    int max_elem = -1;
    for (size_t i = 0; i < n; i++) {
        if ((a < A[i]) && (A[i] < b)) {
            if (max_elem < A[i]) {
                max_elem = A[i];
            }
        }
    }
    if (max_elem == -1) {
        return 0;
    }
    return max_elem;
}
