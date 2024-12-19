// Задача 3. Дана строка s. Сформировать новую строку, содержащую те же символы,
// но расположенные в обратном порядке.
#include <string.h>
#include <stdlib.h>

char* task3(char* s) {
    size_t len = strlen(s);
    char* reversed = (char*)malloc((len + 1) * sizeof(char));

    if (reversed == NULL) {
        return NULL;
    }

    for (size_t i = 0; i < len; ++i) {
        reversed[i] = s[len - i - 1];
    }

    reversed[len] = '\0';

    return reversed;
}
