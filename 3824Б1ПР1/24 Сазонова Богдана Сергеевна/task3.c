// Задача 3. Дана строка s.
// Подсчитать количество содержащихся в ней строчных букв английского алфавита.
#include <string.h> 

size_t task3(char *s)
{
  size_t c = 0;
    for (int i = 0; i < strlen(s); i++) {
        if ((s[i] >= 'a') && (s[i] <= 'z')) {
            c++;
        }
    }

    return c;
}
