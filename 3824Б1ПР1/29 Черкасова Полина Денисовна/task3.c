// Задача 3. Дана строка s и натуральное число N.
// Сформировать строку ss длины N следующим образом.
// Если длина строки s больше или равна N,
//   то включить в ss N последних символов строки s.
// Если длина строки s меньше N,
//   то включить в ss все символы строки s, добавив перед ними символы '*'.
#include <stdio.h>
#include <string.h>

void task3(char* ss, const char* s, size_t N) {
    size_t len_s = strlen(s); 

    if (len_s >= N) {
        strncpy(ss, s + len_s - N, N);
        ss[N] = '\0';  
    }
    else {
        memset(ss, '*', N - len_s);
        memcpy(ss + N - len_s, s, len_s + 1);
    }
}
