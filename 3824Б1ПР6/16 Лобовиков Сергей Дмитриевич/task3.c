#include <string.h>
#include<stdio.h>
#include<stdlib.h>
// Задача 3. Дана строка s, состоящая из английских слов, разделенных пробелами
// (одним или несколькими). Определить количество слов в строке.
int task3(char *s)
{
  int size = strlen(s);
  int answer;
  if(s[0] == ' ') answer = 0;
  else answer = 1;
  for(int i = 1; i < size - 1; i++)
  {
    if(s[i] == ' ' && s[i+1] != ' ') answer++;
  }
  return answer;
}
