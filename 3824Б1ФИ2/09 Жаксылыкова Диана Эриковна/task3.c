// Задача 3. Дана строка s и натуральное число N.
// Сформировать строку ss длины N следующим образом.
// Если длина строки s больше или равна N,
//   то включить в ss N последних символов строки s.
// Если длина строки s меньше N,
//   то включить в ss все символы строки s, добавив перед ними символы '*'.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* task3(char* s, unsigned N) {
    size_t len = strlen(s);
    char* ss = (char*)malloc(N + 1);
    if (!ss) {
        return NULL;
    }
    if (len >= N) {
        strncpy_s(ss, N + 1, s + len - N, N);
    }
    else {
        memset(ss, '*', N - len);
        strncpy_s(ss + (N - len), N - (N - len) + 1, s, len);
    }
    ss[N] = '\0';
    return ss;
}
