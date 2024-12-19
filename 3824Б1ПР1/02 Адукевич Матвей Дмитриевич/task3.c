// Задача 3. Дана строка s. Подсчитать количество содержащихся в ней цифр.
#include <string.h>
size_t task3(char* s)
{
	int a = strlen(s);
	int k = 0;
	for (int i = 0; i < a; i++) {
		if ((s[i] >= '0') && (s[i] <= '9')) {
			k++;
		}
	}
	return k;
}
