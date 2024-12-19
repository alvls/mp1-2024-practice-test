// Задача 3. Дана строка s.
// Подсчитать количество содержащихся в ней строчных букв английского алфавита.
#include <stddef.h>
size_t task3(char* s) {
    size_t t = 0;

    while (*s) { 
        if (*s >= 'a' && *s <= 'z') { 
            t++;
        }
        s++; 
    }
    if (t == 0) {
     return -1;
    return t; 
}
