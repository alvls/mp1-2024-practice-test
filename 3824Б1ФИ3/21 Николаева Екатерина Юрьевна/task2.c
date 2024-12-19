// Задача 2. Даны: 1) непустой массив A, содержащий n целых чисел, 
// 2) вещественное число R.
// Найти индексы двух элементов массива, сумма которых наиболее близка к числу R.
// Если таких пар в массиве несколько, вернуть пару с наименьшими индексами.
// При невозможности найти пару, вернуть {-1,-1}.
#include <math.h>
struct Indices
{
  int first_index;
  int second_index;
};
struct Indices task2(int A[], size_t n, double R)
{
	double pogreshn = 0.000001;
	double minim = 123456789;
	int coord[] = { -1, -1 };
  
  for (int i = 0; i < n - 1; i++) {
	  for (int j = i + 1; j < n; j++) {
		  if (((fabs(A[i] + A[j]- R)) - minim) < pogreshn) {
			  minim = fabs(A[i] + A[j]- R);
			  coord[0] = i;
			  coord[1] = j;
		  }
	  }
  }
  struct Indices indices = {coord[0],coord[1]};
  return indices;
}