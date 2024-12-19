#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
// Задача 3. Дана строка s.
// Подсчитать количество содержащихся в ней заглавных букв английского алфавита.
size_t task3(char *s)
{
	size_t cntr = 0;
	for (int i = 0; s[i] != '\0'; i++) {
		if (isupper(s[i])) {
			cntr++;
		}
	}
	return cntr;
}
