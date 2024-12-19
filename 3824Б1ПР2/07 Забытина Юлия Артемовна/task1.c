// Задача 1. Дан непустой массив A, содержащий n целых чисел, среди которых
// не менее двух нулей. Найти сумму элементов, расположенных между первыми
// двумя нулями.
int task1(int A[], size_t n){
  int is_null_first = 0;
  int is_null_second = 0;
  
  int first_null_is_found = 0;
  int second_null_is_found = 0;

  int sum = 0;
  for (int i = 0; i < n; i++) {
	if (A[i] == 0 && first_null_is_found == 1 && second_null_is_found == 0) {
		is_null_second = i;
		second_null_is_found = 1;
	}
	if (A[i] == 0 && first_null_is_found == 0 && second_null_is_found == 0) {
		is_null_first = i;
		first_null_is_found = 1;
	}
}
  
for (int j = is_null_first + 1; j < is_null_second; j++) {
	sum += A[j];
}
return sum;
}
