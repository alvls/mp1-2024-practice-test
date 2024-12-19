// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из 
// строчных букв английского алфавита, содержащихся в исходной строке s. 
// Пример: s = "aBc1D2e34F56g", ответ: "aceg".
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char* task3(char *s) {
    char *result = (char *)malloc(strlen(s) + 1);
    if (result == NULL) {
        return NULL; 
    }

    int index = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (islower(s[i])) {
            result[index++] = s[i];
        }
    }

    result[index] = '\0';

    return result;
}
