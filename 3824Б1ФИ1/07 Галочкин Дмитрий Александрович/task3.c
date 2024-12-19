// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из 
// заглавных букв английского алфавита, содержащихся в исходной строке s. 
// Пример: s = "aBc1D2e34F56g", ответ: "BDF".
char* task3(char *s)
{
  int i;
  int n = strlen(s);
  int p = 0;
  int cnt = 0;
  char* res;
  for (i = 0; i < n; ++i)
    if (s[i] >= 'A' && s[i] <= 'Z')
      ++cnt;

  res = (char*) malloc((cnt + 1) * sizeof(char));
  for (i = 0; i < n; ++i)
    if (s[i] >= 'A' && s[i] <= 'Z')
      res[p++] = s[i];

  res[cnt] = 0;
  return res;
}
