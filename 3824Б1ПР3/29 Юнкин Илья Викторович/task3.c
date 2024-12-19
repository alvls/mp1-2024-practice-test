#include <stdlib.h>
#include <string.h>

// Задача 3. Дана строка s и натуральное число N.
// Сформировать строку ss длины N следующим образом.
// Если длина строки s больше или равна N,
//   то включить в ss N последних символов строки s.
// Если длина строки s меньше N,
//   то включить в ss все символы строки s, добавив перед ними символы '*'.

char* task3(char *s, unsigned N)
{
    size_t len_s = strlen(s);
    char *ss = (char*)malloc((N + 1) * sizeof(char));
    if (!ss)
        return NULL; // Проверка успешности выделения памяти

    if (len_s >= N)
    {
        // если длина строки s >= N включаем N последних символов строки s
        strncpy(ss, s + len_s - N, N);
        ss[N] = '\0';
    }
    else
    {
        // если длина строки s < N  добавляем перед s символы '*'
        unsigned num_stars = N - len_s;
        memset(ss, '*', num_stars);
        strcpy(ss + num_stars, s);
        ss[N] = '\0';
    }
    return ss;
}
