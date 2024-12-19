// Задача 3. Дана строка s. Подсчитать количество содержащихся в ней цифр.
#include <ctype.h>

size_t task3(char* s) {
    size_t count = 0;
    while (*s) {
        if (isdigit((unsigned char)*s)) {
            count++;
        }
        s++;
    }
    return count;
}
