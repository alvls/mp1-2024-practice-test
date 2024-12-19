// Задача 2. Дан непустой массив A, содержащий n вещественных чисел.
// Определить количество разных элементов массива.
size_t task2(double A[], size_t n)
{
  int S = 0, is_unique = 1;
  for(int i = 0; i < n; i++) {
    is_unique = 1;
    for(int k = 0 ; k < i; k++) {
      if (A[i] == A[k]) {
        is_unique = 0;
        break;
      }
    }
    if (is_unique) {S+=1;}
  }
  return S;
}
