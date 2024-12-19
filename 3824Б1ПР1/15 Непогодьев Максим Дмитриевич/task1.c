// Задача 1. Дан непустой массив A из N элементов.
// Найти количество элементов, расположенных между первым минимальным
// и последним максимальным элементами.
int task1(unsigned A[], size_t N)
{
  int minnum = 0, maxnum = 0, ans = 0;
  for (int i = 0; i < N; i++) {
	  if (A[i] < A[minnum]) {
		  minnum = i;
	  }
	  if (A[i] >= A[maxnum]) {
		  maxnum = i;
	  }
  }
  ans = maxnum - minnum - 1;
  if (maxnum == minnum) {
    ans = 0;
  }
  return ans;
}
