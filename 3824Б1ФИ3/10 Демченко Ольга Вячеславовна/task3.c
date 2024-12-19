// Задача 3. Дана строка s и натуральное число N.
// Сформировать строку ss длины N следующим образом.
// Если длина строки s больше или равна N,
//   то включить в ss N первых символов строки s.
// Если длина строки s меньше N,
//   то включить в ss все символы строки s, добавив после них символы '&'.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* task3(char *s, unsigned N)
{
  size_t len_s = strlen(s);
  char *ss = (char *)malloc(sizeof(char)*(N+1));
  size_t i = 0
  if (len_s >= N) {
    for (i = 0; i < N; i++) {
      ss[i] = s[i]
    }
    ss[N] = '\0';
  }
  else {
    for (i = 0; i < len_s; i++) {
      ss[i] = s[i];
    }
    for (;i<N; i++) {
      ss[i] = '&';
    }
    ss[N] = '\0';
  }
  return ss;
}
