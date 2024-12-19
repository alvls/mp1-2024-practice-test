// Задача 3. Дана строка s. Подсчитать количество содержащихся в ней цифр.
#include <stdio.h>
#include <ctype.h>

size_t task3(char *s) {
    size_t count = 0;
    for (; *s != '\0'; s++) {
        if (isdigit(*s)) {
            count++;
        }
    }
    return count;
}
