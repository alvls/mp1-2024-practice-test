// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из цифр,
// содержащихся в исходной строке s.
// Пример: s = "abc1d2e34f56g", ответ: "123456".
#include <ctype.h> - в начало программы тоже
#include <string.h> - в начало программы тоже
char* task3(char *s) {
  size_t size = strlen(s);
  char *str = (char*)malloc(size * sizeof(char));
  int j = 0;
  for (size_t i = 0; i < size; i++) {
      if (isdigit(s[i])) {  
          str[j++] = s[i]; 
      }
  }
  return str;
}
