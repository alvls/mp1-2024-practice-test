// Задача 3. Дана строка s и натуральное число N.
// Сформировать строку ss длины N следующим образом.
// Если длина строки s больше или равна N,
//   то включить в ss N первых символов строки s.
// Если длина строки s меньше N,
//   то включить в ss все символы строки s, добавив после них символы '&'.
#include <string.h>
#include <stdlib.h>

char* task3(char *s, unsigned N)
{
    unsigned len = strlen(s);

    char *ss = (char *)malloc((N + 1) * sizeof(char));
    if (!ss) {
        return NULL;
    }

    if (len >= N) {
        memcpy(ss, s, N);
        ss[N] = '\0';
    } else {
        memcpy(ss, s, len);
        for (unsigned i = len; i < N; i++) {
            ss[i] = '&';
        }
        ss[N] = '\0';
    }

    return ss;
}
