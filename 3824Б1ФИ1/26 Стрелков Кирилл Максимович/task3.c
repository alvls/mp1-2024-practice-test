// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из цифр,
// содержащихся в исходной строке s.
// Пример: s = "abc1d2e34f56g", ответ: "123456".
char* task3(char* s)
{
  int i = 0, k = 0;
  int len1 = 0, len2 = 0;
  char* str;

  len1 = strlen(s);

  for (i = 0; i < len1; ++i)
    if (s[i] >= '0' && s[i] <= '9')
      ++len2;

  str = (char*)malloc((len2 + 1) * sizeof(char));
  
  for (i = 0; i < len1; ++i)
    if (s[i] >= '0' && s[i] <= '9')
      str[k++] = s[i];

  str[len2] = 0;
  return str;
}
