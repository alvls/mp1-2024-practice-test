// Задача 3. Дана строка s. Сформировать новую строку, содержащую те же символы,
// но расположенные в обратном порядке.
#include <string.h>
char* task3(char *s)
{
  int len = strlen(s);
  int i;
  for (i = 0; i < len / 2; i++)
  {
    int tmp = s[i];
    s[i] = s[len - 1 - i];
    s[len - 1 - i] = tmp;
  }
  return s;
}
