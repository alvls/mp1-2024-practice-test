// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Заменить в нем все элементы, встречающиеся менее двух раз, на -1.
#incluse <stdio.h>
#define max_size 100
void task2(int A[], size_t n)
{
  int count[max_size];
  for (int i = 0; i < max_size; i++) {
    count[i] = 0;
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (A[i] == A[j]) count[i]++;
    }
  }
  for (int i = 0; i < n; i++) {
    if (count[i] < 2) A[i] = -1;
  }
}
