// Задача 3. Дана строка s.
// Подсчитать количество содержащихся в ней заглавных букв английского алфавита.
#include <stddef.h>
size_t task3(char *s)
{
    size_t count = 0;
    while (*s) {
        if (*s >= 'A' && *s <= 'Z') {
            count++;
        }
        s++;
    }
    return count;
}
