// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Заменить в нем все элементы, встречающиеся более двух раз, на -1.
int elInArr(int A[], size_t n, int el){
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (A[i] == el)
			k++;
	}
	return k;
}

void elReplace(int A[], size_t n, int el) {
	for (int i = 0; i < n; i++) {
		if (A[i] == el)
			A[i] = -1;
	}
}

void task2(int A[], size_t n)
{
  for (int i = 0; i < n; i++) {
	  if (A[i]!=-1)
		  if (elInArr(A, n, A[i]) > 2) elReplace(A, n, A[i]);
  }
}
