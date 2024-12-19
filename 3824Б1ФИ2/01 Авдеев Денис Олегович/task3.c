// Задача 3. Дана строка s. Сформировать новую строку, содержащую те же символы,
// но расположенные в обратном порядке.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* task3(char* s) {
    size_t n = strlen(s); 
    char* rev = (char*)malloc(n + 1);
    for (size_t i = 0; i < n; ++i) {
        rev[i] = s[n - 1 - i];
    }
    rev[n] = '\0';
    return rev;
}
