// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из 
// строчных букв английского алфавита, содержащихся в исходной строке s. 
// Пример: s = "aBc1D2e34F56g", ответ: "aceg".
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_RESULT_SIZE 256

char* task3(char *s)
{
  static char result[MAX_RESULT_SIZE]; 
  size_t j = 0; 

  memset(result, 0, sizeof(result));

  for (size_t i = 0; i < strlen(s); i++) {
      if (islower(s[i])) {
          if (j < MAX_RESULT_SIZE - 1) { 
              result[j] = s[i];
              j++;
          }
          else {
              break;
          }
      }
  }

  result[j] = '\0'; 
  return result;
}
