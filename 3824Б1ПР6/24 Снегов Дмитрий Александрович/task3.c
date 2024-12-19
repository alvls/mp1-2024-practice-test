// Задача 3. Дана строка s.
// Подсчитать количество содержащихся в ней строчных букв английского алфавита.
#include <stddef.h>
#include <ctype.h>
size_t task3(char *s)
{
    size_t count = 0;
    while (*s)
    {
        if (islower(*s))
        {
            ++count;
        }
        ++s;
    }
    return count;
}
