// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Назовем «серией» группу подряд идущих одинаковых элементов, 
// а длиной серии – количество этих элементов (длина серии может быть равна 1).
// Найти длину наименьшей серии.
int task2(unsigned* A, size_t n)
{
  int spree = 1, isFirst = 1, last_spree = 100;
  for (int i = 0; i < n; i++) {
    if (!isFirst && A[i] == A[i - 1]) { spree++;}
    else if (isFirst) { isFirst = 0; }
    else {last_spree = spree; spree = 1;}
  }
  printf("\nlast_spree = %d", last_spree);
  return -1;
}
