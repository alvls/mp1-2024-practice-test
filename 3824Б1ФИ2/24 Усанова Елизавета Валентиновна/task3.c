// Задача 3. Дана строка s.
// Подсчитать количество содержащихся в ней строчных букв английского алфавита.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

size_t task3(char* s) {
    int count = 0;
    if (s == NULL) return 0; 
    for (int i = 0; s[i] != '\0'; i++) {
        if (islower(s[i])) {
            count++;
        }
    }
    return count;
}
