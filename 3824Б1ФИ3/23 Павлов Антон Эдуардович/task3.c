// Задача 3. Дана строка s.
// Подсчитать количество содержащихся в ней заглавных букв английского алфавита.
#include <ctype.h>

size_t task3(char *s) {
    size_t count = 0;
    for (char *p = s; *p; p++) {
        if (isupper(*p)) {
            count++;
        }
    }
    return count;
}
