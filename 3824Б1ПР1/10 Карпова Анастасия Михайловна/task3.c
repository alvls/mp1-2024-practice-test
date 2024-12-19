// Задача 3. Дана строка s и натуральное число N.
// Сформировать строку ss длины N следующим образом.
// Если длина строки s больше или равна N,
//   то включить в ss N первых символов строки s.
// Если длина строки s меньше N,
//   то включить в ss все символы строки s, добавив после них символы '&'.
#include <cstring> 
#include <stdlib.h> 
char* task3(char *s, unsigned N)
{
    size_t len_s = strlen(s);
    char* ss = (char*)malloc((N + 1) * sizeof(char));
    if (ss == NULL) {
        return NULL; 
    }

    if (len_s >= N) {
        strncpy(ss, s, N);
        ss[N] = '\0'; 
    } else {
        strcpy(ss, s);
        for (size_t i = len_s; i < N; ++i) {
            ss[i] = '&';
        }
        ss[N] = '\0';
    }

    return ss;
  return "task3";
}
