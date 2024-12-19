// Задача 1. Дан непустой массив A из N элементов.
// Найти номер первого экстремального (минимального или максимального) 
// элемента в нем.
int task1(unsigned A[], size_t N)
{
  unsigned min = A[0];
  unsigned number_element_min = 0;
  unsigned max = A[0];
  unsigned number_element_max = 0;
  for (unsigned i = 0; i < N; i++) {
      if (A[i] < min) { min = A[i]; number_element_min = i; }
      if (A[i] > max) { max = A[i]; number_element_max = i; }
  }
  if (number_element_min < number_element_max) {
      return number_element_min;
  }
  else if (number_element_min > number_element_max) {
      return number_element_max;
  }
  return 0;
}
