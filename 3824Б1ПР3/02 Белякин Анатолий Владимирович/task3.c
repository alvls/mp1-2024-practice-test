// Задача 3. Дана строка s. Подсчитать количество содержащихся в ней цифр.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

size_t task3(char *s) {
    size_t count = 0;
    if (s == NULL) return 0; //Обработка случая NULL-указателя
    size_t len = strlen(s);
    for (size_t i = 0; i < len; i++) {
        if (isdigit(s[i])) {
            count++;
        }
    }
    return count;
}
