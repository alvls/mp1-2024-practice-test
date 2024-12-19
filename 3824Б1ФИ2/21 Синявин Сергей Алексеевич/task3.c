// Задача 3. Дана строка s. Сформировать новую строку, содержащую те же символы,
// но расположенные в обратном порядке.
#include <stdio.h>
#include <stdlib.h>
char* task3(char *s)
{
    size_t length = strlen(s);
    char* reversed = (char*)malloc(length + 1);
    if (reversed == NULL) {
        return NULL;
    }
    for (size_t i = 0; i < length; ++i) {
        reversed[i] = s[length - 1 - i];
    }
    reversed[length] = '\0';
    return reversed;
}
