// Задача 3. Дана строка s и натуральное число N.
// Сформировать строку ss длины N следующим образом.
// Если длина строки s больше или равна N,
//   то включить в ss N последних символов строки s.
// Если длина строки s меньше N,
//   то включить в ss все символы строки s, добавив перед ними символы '*'.
#include <string.h>
#include <stdlib.h>
char* task3(char *s, unsigned N)
{
  int length = strlen(s);
  char* ss;

  if (length >= N) {
    ss = (char*)malloc((N + 1) * sizeof(char)); 
    strncpy(ss, s + length - N, N);
    ss[N] = '\0';
  }
  else {
    ss = (char*)malloc((N + 1) * sizeof(char));
    int i;
    for (i = 0; i < N - length; i++) {
      ss[i] = '*';
    }
    strncpy(ss + i, s, length);
    ss[N] = '\0';
  }
  return ss;
}
