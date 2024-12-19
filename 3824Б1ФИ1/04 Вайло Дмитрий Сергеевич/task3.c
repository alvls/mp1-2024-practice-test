// Задача 3. Дана строка s.
// Подсчитать количество содержащихся в ней строчных букв английского алфавита.
#include <stddef.h>
#include <stdio.h>

size_t task3(char *s){
  size_t k = 0; 

  if (s == NULL) {
      return 0; 
    }


  while (*s) {
      if (*s >= 'a' && *s <= 'z') {
          k++;
      }
      s++;
  }

  return k; 

}
