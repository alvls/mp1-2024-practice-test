#include <stdio.h>
#include <stdlib.h>
// Задача 3. Дана строка s. Подсчитать количество содержащихся в ней цифр.
size_t task3(char* s)
{
	size_t c = 0;
	int i = 0;
	while (s[i] != '\n' && s[i] != '\0') {
		if (s[i] >= 48 && s[i] < 58) {
			c++;
		}
		i++;
	}
	return c;
}
