// Задача 3. Дана строка s и натуральное число N.
// Сформировать строку ss длины N следующим образом.
// Если длина строки s больше или равна N,
//   то включить в ss N первых символов строки s.
// Если длина строки s меньше N,
//   то включить в ss все символы строки s, добавив после них символы '&'.
char* task3(char *s, unsigned N)
{
 char* ss = (char*)malloc((N + 1) * sizeof(char));
  int i = strlen(str);
  if (i >= N)
  {
for (int i = 0; i < N; i++)
  {
ss[i] = s[i];
  }
  }
  return "task3";
}
