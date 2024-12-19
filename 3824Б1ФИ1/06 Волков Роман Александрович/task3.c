// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из цифр,
// содержащихся в исходной строке s.
// Пример: s = "abc1d2e34f56g", ответ: "123456".
#include <string.h>
#include <stdlib.h>

char* task3(char *s)
{
  int n = strlen(s);
  int i, k = 0;
  char* ans = (char*) malloc(n*sizeof(char));
  for (i = 0; i < n; i++)
    if ((s[i] - '0' >= 0) && (s[i] - '0' <= 9))
      ans[k++] = s[i];
  return ans;
}
