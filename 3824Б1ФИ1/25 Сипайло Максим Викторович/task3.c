// Задача 3. Дано целое число N. Не используя функции стандартной библиотеки
// языка С, перевести число в строковое представление в десятичном виде.
#include <stdlib.h>
char* task3(int N)
{
  if (N == 0) {
    char* res = (char*) malloc(2 * sizeof(char));
    res[0] = '0';
    res[1] = 0;
    return res;
  }
  int d = N;
  int len = 0;
  if (d > 0){
    while (d > 0){
      len++;
      d/=10;
    }
  }
  else{
    d = -d;
    while (d > 0){
      len++;
      d/=10;
    }
  }
  int s = N;
  int k;
  char* res;
  if (s >= 0){
    res = (char*) malloc((len + 1) * sizeof(char));
    k = len - 1;
    while (s > 0) {
      res[k--] = ('0' + (s % 10));
      s /= 10;
    }
    res[len] = '\0';
  }
  if (s < 0){
    s = -s;
    k = len;
    res = (char*) malloc((len + 2) * sizeof(char));
    while (s > 0) {
      res[k--] = ('0' + (s % 10));
      s /= 10;
    }
    res[0] = '-';
    res[len + 1] = '\0';
  }
  return res;
}
