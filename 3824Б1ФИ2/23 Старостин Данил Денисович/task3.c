// Задача 3. Дана строка s.
// Подсчитать количество содержащихся в ней заглавных букв английского алфавита.
#include <stdio.h>
#include <ctype.h>
#include <string.h>
size_t task3(char* s)
{
	int res = 0;
	size_t size = strlen(s);
	for (size_t i = 0; i < size; ++i) {
		if (isalpha(s[i]) && isupper(s[i])) {
			++res;
		}
	}
	return res;
}
