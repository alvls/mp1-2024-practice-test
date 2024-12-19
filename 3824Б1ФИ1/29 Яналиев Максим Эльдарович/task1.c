// Задача 1. Дан непустой массив A, содержащий n целых чисел.
// Найти номер его последнего минимального элемента.
int task1(int A[], size_t n)
{
  if (n==0) return -1;
  int index = 0, m = A[0];
  for(int i = 1; i<(int)n; i++){
    if (A[i]<=m){
      m = A[i];
      index = i;
    }
  }
  return index;
}