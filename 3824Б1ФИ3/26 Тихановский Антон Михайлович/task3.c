// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из цифр,
// содержащихся в исходной строке s.
// Пример: s = "abc1d2e34f56g", ответ: "123456".
#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 10000

char* task3(char *s) {
  char result[MAX_LENGTH];
  int j = 0; 
  for (int i = 0; s[i] != '\0'; i++) {
      if (s[i] >= '0' && s[i] <= '9') {
          if (j < MAX_LENGTH - 1) { 
              result[j++] = s[i];
          }
      }
  }
  result[j] = '\0'; 
  return result;
}
