// Задача 3. Дана строка s, состоящая из английских слов, разделенных пробелами
// (одним или несколькими). Скопировать строку s в новую и преобразовать ее так,
// чтобы все слова в ней начинались с заглавной буквы.
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

char *task3(char *s)
{

  char *result = malloc(strlen(s) + 1);

  if (!result)
  {
    return NULL;
  }

  char *src = s;
  char *dest = result;

  while (*src != '\0')
  {

    *dest++ = toupper((unsigned char)*src++);

    while (*src && !isspace((unsigned char)*src))
    {
      *dest++ = *src++;
    }

    while (*src && isspace((unsigned char)*src))
    {
      *dest++ = ' ';
      src++;
    }
  }

  *dest = '\0';

  return result;
  free(result);
}
