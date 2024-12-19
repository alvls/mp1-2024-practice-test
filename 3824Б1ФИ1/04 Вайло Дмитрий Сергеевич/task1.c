// Задача 1. Дан непустой массив A, содержащий n вещественных чисел.
// Вернуть 1, если его элементы образуют геометрическую прогрессию,
// иначе вернуть 0.
int task1(double A[], size_t n)
{
  if (n < 2) {
    return 1;
}

if (A[0] == 0) {
    for (size_t i = 1; i < n; i++) {
        if (A[i] != 0) {
            return 0;
        }
    }
    return 1; 
}

double rat = A[1] / A[0];


for (size_t i = 2; i < n; i++) {
    if (A[i - 1] == 0 || A[i] / A[i - 1] != rat) {
        return 0; 
    }
}

  return 1;
}
