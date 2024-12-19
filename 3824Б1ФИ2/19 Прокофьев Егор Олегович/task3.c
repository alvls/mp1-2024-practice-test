// Задача 3. Дана строка s, состоящая из английских слов, разделенных пробелами
// (одним или несколькими). Скопировать строку s в новую и преобразовать ее так,
// чтобы все слова в ней начинались с заглавной буквы.
char* task3(char *s) {
  int len = strlen(s);
  char *result = (char*) malloc(len + 1);
  int newWord = 1;
  for (size_t i = 0; i < len; i++) {
    if (s[i] == ' ') {
      newWord = 1;
      result[i] = s[i];
    }
    else if (s[i] != ' ' && newWord) {
      newWord = 0;
      if (s[i] >= 'a' && s[i] <= 'z') {
        result[i] = s[i] + 'A' - 'a';
      }
      else {
        result[i] = s[i];
      }
    }
    else {
      result[i] = s[i];
    }
  }

  return result;
}
