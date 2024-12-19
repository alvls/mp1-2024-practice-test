// Задача 3. Дана строка s.
// Подсчитать количество содержащихся в ней заглавных букв английского алфавита.
#include <stdlib.h>
#include <ctype.h> // Для функции isupper

size_t task3(char * s) {
    size_t count = 0;
    while (*s) {
        if (isupper(*s)) {
            ++count;
        }
        ++s;
    }
    return count;
}
