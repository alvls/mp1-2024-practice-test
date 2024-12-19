// Задача 3. Даны два натуральных числа: N1 и N2, и две строки: s1 и s2.
// Получить из этих строк новую строку, объединив N1 первых символов строки s1
// и N2 последних символов строки s2.
// Если длина строки s1 меньше, чем N1, использовать ее целиком.
// Если длина строки s2 меньше, чем N2, использовать ее целиком.
// Пример: s1 = "aaa", N1 = 4, s2 = "bbb", N2 = 4
//   Ответ: "aaabbb"
// Функции стандартной библиотеки языка С не применять.
char* task3(char *s1, unsigned N1, char *s2, unsigned N2)
{
  if (s1 == NULL || s2 == NULL) {
    return NULL; 
  }
  unsigned len1 = 0;
  while (s1[len1] != '\0') {
    len1++;
  }
  unsigned len2 = 0;
  while (s2[len2] != '\0') {
    len2++;
  }
  if (N1 > len1) {
    N1 = len1;
  }
  if (N2 > len2) {
    N2 = len2;
  }
  char* result = (char*)malloc(N1 + N2 + 1);
  if (result == NULL) {
    return NULL;
  }
  for (int i = 0; i < N1; i++) {
    result[i] = s1[i];
  }
  for (int j = 0; j < N2; j++) {
    result[N1 + j] = s2[len2 - N2 + j];
  }
  result[N1 + N2] = '\0';
  return result;
// return "task3";
}
