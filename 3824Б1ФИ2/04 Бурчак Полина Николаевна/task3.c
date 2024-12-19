// Задача 3. Дана строка s.
// Подсчитать количество содержащихся в ней строчных букв английского алфавита.
#include <stdio.h>
size_t task3 (char *s)
{
    int count = 0;
        for (int i = 0; s[i]; i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                count++;
            }
        }

    return count;
}
