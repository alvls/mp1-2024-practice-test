// Задача 3. Дана строка s и натуральное число N.
// Сформировать строку ss длины N следующим образом.
// Если длина строки s больше или равна N,
//   то включить в ss N первых символов строки s.
// Если длина строки s меньше N,
//   то включить в ss все символы строки s, добавив после них символы '&'.
#include <stdio.h>
#include <stdlib.h>

char* task3(char *s, unsigned N)
{
  size_t len = strlen(s);
  char* ss = (char*)malloc((N+1) * sizeof(char));
  if (len >= N) {
    for (size_t i = 0; i <= N; i++) {
        ss[i] = s[i];
    }
   }
  else {
    for (size_t i = 0; i <= len; i++) {
        ss[i] = s[i];
    }
    for (size_t i = len; i < N; i++) {
        ss[i] = '&';
    }
   }
  ss[N] = '\0';
  return ss;
}
