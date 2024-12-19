// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из цифр,
// содержащихся в исходной строке s.
// Пример: s = "abc1d2e34f56g", ответ: "123456".
char* task3(char *s)
{
  size_t len = strlen(s);
  char* res = (char*)malloc(len + 1);
  if (!res) {
    return NULL;
  }
  size_t x = 0;
  for (size_t i = 0; i < len; ++i) {
    if (s[i] >= '0' && s[i] <= '9') {
      res[x++] = s[i];
    }
  }
  res[x] = '\0';
  return res;  
}
