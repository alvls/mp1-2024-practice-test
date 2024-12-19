// Задача 3. Дана строка s, состоящая из английских слов, разделенных пробелами
// (одним или несколькими). Скопировать строку s в новую и преобразовать ее так,
// чтобы все слова в ней начинались с заглавной буквы.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* task3(char *s)
{
  size_t len = strlen(s);
  char* newStr = (char*)malloc(len + 1);
  if (!newStr) return NULL;
  bool newWord_flag = 1;
  for (size_t i = 0; i < len; ++i) {
    if (s[i] == ' ') {
      newStr[i] = s[i];
      newWord_flag = 1;
    }
    else {
      if (newWord_flag && s[i] >= 'a' && s[i] <= 'z') {
        newStr[i] = s[i] - ('a' - 'A');
        newWord_flag = 0;
      }
      else {
        newStr[i] = s[i];
        newWord_flag = 0;
      }
    }
  }
  newStr[len] = '\0';
  return newStr;
  free(newStr); 
}
