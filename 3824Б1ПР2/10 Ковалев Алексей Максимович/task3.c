// Задача 3. Дана строка s и натуральное число N.
// Сформировать строку ss длины N следующим образом.
// Если длина строки s больше или равна N,
//   то включить в ss N первых символов строки s.
// Если длина строки s меньше N,
//   то включить в ss все символы строки s, добавив после них символы '&'.
#include <string.h>
#include <stdlib.h>
char* task3(char* s, unsigned N)
{
    
    char* ss = (char*)malloc((N + 1) * sizeof(char)); // +1 для нулевого терминатора
    size_t len = strlen(s);

    if (len >= N) {
        strncpy_s(ss, N+1, s, N);
        ss[N] = '\0';
    }
    else {
        strcpy_s(ss, N + 1, s);

        for (size_t i = len; i < N; i++) {
            ss[i] = '&';
        }

        ss[N] = '\0';
    }
    return ss;
}
