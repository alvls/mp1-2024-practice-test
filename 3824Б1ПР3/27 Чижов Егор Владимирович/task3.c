// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из 
// заглавных букв английского алфавита, содержащихся в исходной строке s. 
// Пример: s = "aBc1D2e34F56g", ответ: "BDF".
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

char* task3(char *s)
{
    size_t len = 0;
    for (size_t i = 0; s[i] != '\0'; i++) {
        if (isupper(s[i])) {
            len++;
        }
    }

    char *result = (char*)malloc(len + 1);

    if (result == NULL) {
        return NULL;
    }

    size_t j = 0;
    for (size_t i = 0; s[i] != '\0'; i++) {
        if (isupper(s[i])) {
            result[j++] = s[i];
        }
    }

    result[j] = '\0';

    return result;
}
