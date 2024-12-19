// Задача 3. Дана строка s, состоящая из английских слов, разделенных пробелами
// (одним или несколькими). Определить длину самого короткого слова в строке.


int task3(char *s)
{
  if (s == NULL) return -1;
  int min_len = -1; 
  int current_len = 0; 
  while (*s) {
    while (*s == ' ') {
      s++;
    }
    current_len = 0;
    while (*s != ' ' && *s != '\0') {
      current_len++;
      s++;
    }
    if (current_len > 0) {
      if (min_len == -1 || current_len < min_len) {
        min_len = current_len;
      }
    }
  }
  return min_len; 
}
