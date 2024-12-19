// Задача 3. Дана строка s.
// Подсчитать количество содержащихся в ней заглавных букв английского алфавита.
#include <stdio.h>
#include <ctype.h>
#include <string.h>
size_t task3(char* s)
{
	int res = 0;
	for (size_t i = 0; i < strlen(s); ++i) {
		if (isalpha(s[i]) && isupper(s[i])) {
			++res;
		}
	}
	return res;
}
