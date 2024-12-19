#include <stdio.h>
// Задача 3. Даны: символ ch и строка s. 
// Сформировать новую строку, в которой после каждого вхождения символа ch 
// в строку s вставлен символ ‘#’.
// Пример: ch = ‘k’, s = “abckdgkefgk”, ответ: “abck#dgk#efgk#”.
char* task3(char *s, char ch)
{
  char value_swap = '#';
  char* start = s;  
  while (*s != '\0') {
      if (*s == ch) {
          *s = value_swap;  
      }
      s++;
  }
  return start; 
}
