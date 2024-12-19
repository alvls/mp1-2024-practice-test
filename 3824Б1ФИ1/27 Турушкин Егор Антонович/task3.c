// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из 
// заглавных букв английского алфавита, содержащихся в исходной строке s. 
// Пример: s = "aBc1D2e34F56g", ответ: "BDF".
#include <stdlib.h>

char* task3(char* s)
{
  int i = 0, counter = 0;
  char* res;
  (res) = (char*)malloc(sizeof(char)*256);
  while ((s[i]) != 0)
  {
    if ((s[i] >= 65) && (s[i] <= 90))
    {
      res[counter] = s[i];
      counter++;
    }
    i++;
  }
  res[counter] = 0;
  return res;
}
