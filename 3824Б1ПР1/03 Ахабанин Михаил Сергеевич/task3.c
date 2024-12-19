// Задача 3. Дана строка s.
// Подсчитать количество содержащихся в ней заглавных букв английского алфавита.
#include <ctype.h>

size_t task3(char* s)
{
	size_t cnt = 0, i = 0;
	while (s[i] != '\0') {
		if (isupper(s[i])) { 
			cnt++; 
		}
		i++;
	}
	return cnt;
}
