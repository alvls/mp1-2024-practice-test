// Задача 3. Дана строка s и натуральное число N.
// Сформировать строку ss длины N следующим образом.
// Если длина строки s больше или равна N,
//   то включить в ss N первых символов строки s.
// Если длина строки s меньше N,
//   то включить в ss все символы строки s, добавив после них символы '&'.

#include <malloc.h>
char* task3(char* s, unsigned N)
{
	unsigned len=0;
	while (s[len] != '\0') len++;

	char* ss = (char*)malloc(sizeof(char)*(N+1));

	if (len >= N) {
		for (unsigned i = 0; i < N; i++) {
			ss[i] = s[i];
		}
	}
	else {
		for (unsigned i = 0; i < len; i++) {
			ss[i] = s[i];
		}
		for (unsigned i = len; i < N; i++) {
			ss[i] = '&';
		}
	}
	ss[N] = '\0';
	return ss;
}
