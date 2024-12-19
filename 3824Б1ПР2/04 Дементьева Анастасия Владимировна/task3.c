// Задача 3. Дана строка s.
// Подсчитать количество содержащихся в ней строчных букв английского алфавита.
#include <stddef.h>

size_t task3(char* s)
{
    size_t count = 0;

    for (char* p = s; *p != '\0'; p++) {
        if (97 <= *p && *p <= 122) {
            count++;
        }
    }

    return count;
}
