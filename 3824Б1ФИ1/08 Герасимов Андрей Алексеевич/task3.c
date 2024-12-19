// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из 
// строчных букв английского алфавита, содержащихся в исходной строке s. 
// Пример: s = "aBc1D2e34F56g", ответ: "aceg".
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* task3(char *s)
{
  char* res;
  unsigned long long i;
  unsigned long long n1 = strlen(s);
  unsigned long long n2 = 0;
  unsigned long long j;
  for (i = 0; i < n1; ++i)
  {
    if (s[i] >= 'a' && s[i] <= 'z')
      n2++;
  }
  res = (char*) malloc((n2 + 1) * sizeof(char));
  j = 0;
  for (i = 0; i < n1; ++i)
  {
    if (s[i] >= 'a' && s[i] <= 'z')
    {
      res[j] = s[i];
      j++;
    }
  }
  res[n2] = 0;
  return res;
}
