// Задача 1. Дан непустой массив A из N элементов.
// Преобразовать его, прибавив к нечетным числам первый элемент,
// а к четным – последний. Первый и последний элементы массива не менять. 
void task1(unsigned A[], size_t N)
{
  unsigned firstElement = A[0];
  unsigned lastElement = A[N - 1];
  for (int i = 1; i < N - 1; i++) {
    if (A[i] % 2 == 0) { // Если элемент четный
        A[i] += lastElement;
    } else { // Если элемент нечетный
        A[i] += firstElement;
    }
  }
}
