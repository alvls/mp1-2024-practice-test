// Задача 3. Дана строка s. Сформировать новую строку, содержащую те же символы,
// но расположенные в обратном порядке.
#include <string.h>
#include<stdio.h>
char* task3(char *s)
{
    char* str = malloc(sizeof(char) * strlen(s));
    for (int i = 0; i < strlen(s); i++) {
        str[i] = s[i];
    }
	int l = 0;
	int r = strlen(s) - 1;
	 while (l <= r) {
        char t = str[l];
        str[l] = str[r];
        str[r] = t;
        l++;
        r--;
    }
    for (int i = 0; i < strlen(s); i++) {
        printf_s("%c", str[i]);
    }

  return str;
}