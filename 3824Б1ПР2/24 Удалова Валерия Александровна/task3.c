// Задача 3. Дана строка s.
// Подсчитать количество содержащихся в ней строчных букв английского алфавита.
#include <stdio.h>

size_t task3(char *s)
{
  size_t count = 0; 

  while (*s != '\0') {
      if (*s >= 'a' && *s <= 'z') {
          count++;
      } 
      s++; 
  }

  return count;
}
