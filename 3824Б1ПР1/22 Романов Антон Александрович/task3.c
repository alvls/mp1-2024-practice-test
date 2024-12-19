// Задача 3. Дана строка s. Подсчитать количество содержащихся в ней цифр.
#include <ctype.h>
#include <string.h>

size_t task3(char *s)
{
    int cnt_c = 0;
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        if (isdigit((unsigned char)s[i])) {
            cnt_c++;
        }
    }
    return cnt_c;
}
