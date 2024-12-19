// Задача 1. Дан непустой массив A из N элементов.
// Найти количество элементов, расположенных между первым минимальным
// и последним максимальным элементами.
int task1(unsigned A[], size_t N)
{
  unsigned min = A[0];
  unsigned max = A[0];
  int min_index = -1;
  int max_index = -1;
  for (int i = 0; i < N; i++) {
	  if (A[i] < min) {
		  min = A[i];
		  min_index = i; 
	  }
	  if (A[i] >= max) { 
		  max = A[i];
		  max_index = i;
	  }
  }

  if (max_index > min_index) {
	  return (max_index - min_index - 1);
  }
  else return 0;
}
