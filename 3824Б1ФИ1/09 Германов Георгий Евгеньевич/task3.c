// Задача 3. Дана строка s и натуральное число N.
// Сформировать строку ss длины N следующим образом.
// Если длина строки s больше или равна N,
//   то включить в ss N последних символов строки s.
// Если длина строки s меньше N,
//   то включить в ss все символы строки s, добавив перед ними символы '*'.
#include <stdlib.h>
char* task3(char *s, unsigned N) {
    unsigned len = strlen(s);
    char* ss = (char*)malloc((N + 1) * sizeof(char));

    if (len >= N) {
        // Take the last N characters of s
        strncpy(ss, s + len - N, N);
        ss[N] = '\0';
    } else {
        // Add '*' characters before the string s
        unsigned num_stars = N - len;
        memset(ss, '*', num_stars);
        strcpy(ss + num_stars, s);
    }

    return ss;
}
