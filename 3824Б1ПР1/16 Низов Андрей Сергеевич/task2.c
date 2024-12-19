// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Назовем «серией» группу подряд идущих одинаковых элементов, 
// а длиной серии – количество этих элементов (длина серии может быть равна 2).
// Найти число серий в массиве.
int task2(unsigned A[], size_t n)
{
  int count = 0;
  for(size_t i = 0; i < n;)
  {
    unsigned num = A[i];
    size_t length = 1;
    while((i + length < n) && (A[i + length] == num))
      length++;
    if(length >= 2)
      count++;
    i += length;
  }
  return count;
}
