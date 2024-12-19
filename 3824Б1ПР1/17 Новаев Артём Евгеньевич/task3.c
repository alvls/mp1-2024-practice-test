// Задача 3. Дана строка s, состоящая из английских слов, разделенных пробелами
// (одним или несколькими). Определить количество слов, 
// которые начинаются и заканчиваются одной и той же буквой. 

#include<string.h>

int func(char a, char b) {
    if (a >= 'A' && a <= 'Z') {
        a += ('a' - 'A');
    }
    if (b >= 'A' && b <= 'Z') {
        b += ('a' - 'A');
    }
    return a == b;
}

int task3(char *s)
{
  int count = 0;
  int len = strlen(s);
  char word[100];
  int wordIndex = 0;

  for (int i = 0; i <= len; i++) {
    if (s[i] != ' ' && s[i] != '\0') {
        word[wordIndex++] = s[i];
    }
    else if (wordIndex > 0) {
        word[wordIndex] = '\0';
        if (func(word[0], word[wordIndex - 1])) {
            count++;
        }
        wordIndex = 0;
      }
  }

  return count;
}
