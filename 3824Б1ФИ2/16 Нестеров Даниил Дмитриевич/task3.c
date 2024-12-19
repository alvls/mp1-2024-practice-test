#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// Задача 3. Дана строка s, состоящая из английских слов, разделенных пробелами
// (одним или несколькими). Определить количество слов в строке.
int task3(char *s) {
  size_t len       = strlen(s);
  bool was_in_word = false;

  int word_counter = 0;
  for (size_t i = 0; i < len; i++) {
    if (s[i] == ' ') {
      if (was_in_word) { word_counter++; }
      was_in_word = false;
    } else {
      was_in_word = true;
    }
  }

  if (was_in_word) { word_counter++; }


  return word_counter;
}
