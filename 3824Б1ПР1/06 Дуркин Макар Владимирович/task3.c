// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из цифр,
// содержащихся в исходной строке s.
// Пример: s = "abc1d2e34f56g", ответ: "123456".
#include <string.h>  
#include <malloc.h>
char* task3(char *s)
{
  char* str = (char*)malloc(sizeof(char) * (strlen(s) + 1));
  int j = 0;
  for (int i = 0; s[i] != '\0'; i++)
  {
  	if (s[i] >= '0' && s[i] <= '9')
  	{
  		str[j] = s[i];
  		j++;
  	}
  }
  str[j] = '\0';
  return str;
}
