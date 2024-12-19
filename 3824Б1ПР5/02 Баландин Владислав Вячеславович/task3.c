// Задача 3. Дана строка s. Подсчитать количество содержащихся в ней цифр.

#include <ctype.h>
#include <stddef.h>
#include <stdint.h>

size_t task3(char *s)
{
    if (s == NULL)
    {
        return 0;
    }

    size_t count = 0;
    size_t i = 0;

    unsigned char current;
    while ((current = (unsigned char)s[i]) != '\0')
    {
        if (isdigit(current))
        {
            if (count == SIZE_MAX)
            {
                return SIZE_MAX;
            }
            count++;
        }
        i++;
    }

    return count;
}