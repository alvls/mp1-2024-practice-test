// Задача 3. Дана строка s. Сформировать новую строку, содержащую те же символы,
// но расположенные в обратном порядке.
#include <string.h> 
#include <stdlib.h> 
char* task3(char *s)
{
  if (s == NULL) return 0;

  size_t len = strlen(s);
  char* revers = (char*)malloc(sizeof(char) * (len + 1));

  for (int i = 0; i < len;i++)
  {
    revers[i] = s[len - 1 - i];
  }
  revers[len] = '\0';
  return revers;
}
