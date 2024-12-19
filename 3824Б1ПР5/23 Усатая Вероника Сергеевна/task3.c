// Задача 3. Дана строка s.
// Подсчитать количество содержащихся в ней заглавных букв английского алфавита.
#include <stdio.h>
#include <ctype.h>

size_t task3(char* s)
{
    size_t count = 0;

    for (size_t i = 0; s[i] != '\0'; i++) {
        if (isupper(s[i])) {
            count++;
        }
    }

    return count;
}
