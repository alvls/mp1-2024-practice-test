// Задача 1. Дан непустой массив A, содержащий n вещественных чисел.
// Вернуть 1, если его элементы образуют геометрическую прогрессию,
// иначе вернуть 0.
int task1(double A[], size_t n)
{
int c = 0;
if (n < 2) {
    return 0; 
}

for (int i = 0; i < n; i++) {
    if (A[i] == 0) {
        return 0;
    }
}
double k = A[1] / A[0];

for (int i = 1; i < n - 1; i++) {
    if (A[i + 1] / A[i] != k) {
        c++;
    }
}
if (c == 0) { return 1; }
else { return 0; }
}
