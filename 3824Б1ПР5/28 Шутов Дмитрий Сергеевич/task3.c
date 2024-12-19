// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из 
// строчных букв английского алфавита, содержащихся в исходной строке s. 
// Пример: s = "aBc1D2e34F56g", ответ: "aceg".
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 

char* task3(const char *s) {
    size_t len = 0;
    while (s[len] != '\0') {
        ++len;
    }

    char* result = (char*)malloc(len + 1);
    if (!result) {
        return NULL; 
    }

    size_t idx = 0;

    for (size_t i = 0; i < len; ++i) {
        if (islower(s[i])) {
            result[idx++] = s[i];
        }
    }

    result[idx] = '\0';

    return result;
}
