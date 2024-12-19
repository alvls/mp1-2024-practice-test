#include <stdio.h>

// Задача 1. Дан непустой массив A, содержащий n натуральных чисел.
// Вернуть 1, если его элементы образуют арифметическую прогрессию,
// иначе вернуть 0.
int task1(unsigned A[], size_t n)
{
	int c = A[1] - A[0];
	int flag = 1;
	for (int i = 1; i < n; i++) {
		if (A[i] == A[i-1] + c) {
			continue;
		}
		else {
			flag = 0;
			break;
		}
	}
	if (flag) {
		return 1;
	}
	else {
		return 0;
	}
}
