// Задача 3. Дана строка s, состоящая из английских слов, разделенных пробелами
// (одним или несколькими). Скопировать строку s в новую и преобразовать ее так,
// чтобы все слова в ней начинались с заглавной буквы.
#include <ctype.h>
char* task3(char *s)
{
  int lenn = strlen(s);
  int z = 1;
  char out;
  for(int i = 0; i<lenn; i++){
    if(s[i] == ' ') out[i] = ' ';
    if(z){
      out[i] = toupper(s[i]);
      z = 0;
    }
    else out[i] = s[i];
  }
  return out;
}
