#include <stdio.h>
#include <string.h>
// Задача 3. Дана строка s.
// Подсчитать количество содержащихся в ней заглавных букв английского алфавита.
size_t task3(char* s)
{
	
	size_t count = 0; 
	for (size_t i = 0; i < strlen(s); i++) {
		if (s[i]>='A' && s[i] <='Z') {
			count++;
		}
	} 
	return count; 
}
