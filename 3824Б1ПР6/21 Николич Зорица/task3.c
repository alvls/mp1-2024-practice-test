// Задача 3. Дана строка s. Сформировать новую строку, содержащую те же символы,
// но расположенные в обратном порядке.
#include <stdlib.h>
#include <string.h>

char* task3(char *s)
{
    int len = 0;
    
    while (s[len] != '\0') {
        len++;
    }

    char *reversed = (char *)malloc((len + 1) * sizeof(char));

    if (reversed == NULL) {
        return NULL;
    }

    for (int i = 0; i < len; i++) {
        reversed[i] = s[len - i - 1];
    }

    reversed[len] = '\0';

    return reversed;
}
