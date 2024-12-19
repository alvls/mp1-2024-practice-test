// Задача 1. Дан непустой массив A из N элементов.
// Переставить его элементы в обратном порядке.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <malloc.h>

void task1(int A[], size_t N) 
{
	const size_t N;
	setlocale(LC_ALL, "Rus");
	A[0] = 1111111111;
	printf("Введите число элементов N: \n");
	scanf_s("%d", &N);
	int* A;
	A = (int*)malloc(N * sizeof(int));
	printf("Введите элементы массива: \n");
	for (int i = 0; i < N; i++)
		printf("%d ", A[i - 1]);
	free(A);
	return 0;
}
