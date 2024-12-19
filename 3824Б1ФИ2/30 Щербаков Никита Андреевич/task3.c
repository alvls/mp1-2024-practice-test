#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Задача 3. Дана строка s и натуральное число N.
// Сформировать строку ss длины N следующим образом.
// Если длина строки s больше или равна N,
//   то включить в ss N первых символов строки s.
// Если длина строки s меньше N,
//   то включить в ss все символы строки s, добавив после них символы '&'.
char* task3(char *s, unsigned N)
{
	int len = strlen(s);
	if (len >= N)
	{
		char* str = (char*)calloc(N+1, sizeof(char));
		if (str == NULL)
		{
			exit(EXIT_FAILURE);
		}
		strncpy(str, s, N);
		return str;
	}
	if (len < N)
	{
		char* str = (char*)calloc(len + 2, sizeof(char));
		if (str == NULL)
		{
			exit(EXIT_FAILURE);
		}
		strncpy(str, s, len);
		str[len] = '&';
		str[len + 1] = '\0';
		return str;
	}
}
