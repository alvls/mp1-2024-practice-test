// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Найти значение минимального из его локальных минимумов.
// Локальный минимум – элемент, который <= левого и правого соседей.
// При отсутствии локальных минимумов вернуть -1.
#include <limits.h>
long long task2(unsigned A[], size_t n){
	int local_mins_c = 0;

	long long min_of_all_mins = LLONG_MAX;
	int local_min = 0;

	for (int i = 1; i < n-1; i++) {
		if ( (A[i] <= A[i - 1]) && (A[i] <= A[i + 1]) ) {
			local_min = A[i];
			local_mins_c ++;
		}
		if (local_min <= min_of_all_mins) {
			min_of_all_mins = local_min;
		}
	}

	if (local_mins_c == 0) {
		return -1;
	}
	else {
		return min_of_all_mins;
	}
}
