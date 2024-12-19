// Задача 3. Дана строка s и натуральное число N.
// Сформировать строку ss длины N следующим образом.
// Если длина строки s больше или равна N,
//   то включить в ss N последних символов строки s.
// Если длина строки s меньше N,
//   то включить в ss все символы строки s, добавив перед ними символы '*'.
char* task3(char *s, unsigned N)
{
  size_t l = strlen(s);
  char* ss = (char*)malloc(sizeof(char) * N);
  char symbol = '*';
  if ((unsigned)l >= N)
    for(unsigned i = 0; i<N; i++)
      ss[i] = s[l-1];
  else{
    for(unsigned i = 0; i<N; i++){
      if ((N - (unsigned)l)>i)
        ss[i] = symbol;
      else
        ss[i] = s[i - (N - (unsigned)l)];
    }
  }
  return ss;
}