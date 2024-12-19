// Задача 3. Даны: символ ch и строка s. 
// Сформировать новую строку, в которой перед каждым вхождением символа ch 
// в строку s вставлен символ ‘#’.
// Пример: ch = ‘k’, s = “kabckdgkefgk”, ответ: “#kabc#kdg#kefg#k”.
#include <stdlib.h>
#include <string.h>

char* task3(char *s, char ch) 
{
  if (s == NULL) 
  {
    return NULL; /
  }
  size_t len = strlen(s);
  if (len == 0) 
  {
    return s; 
  }
  char *newString = (char *)malloc((2 * len + 1) * sizeof(char)); 
  if (newString == NULL) 
  {
    return NULL; 
  }
  size_t newStringIndex = 0;
  for (size_t i = 0; i < len; i++) 
  {
    if (s[i] == ch) 
    {
      newString[newStringIndex++] = '#';
    }
    newString[newStringIndex++] = s[i];
  }
  newString[newStringIndex] = '\0'; 
  return newString;
}
