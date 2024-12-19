// Задача 3. Даны: символ ch и строка s. 
// Сформировать новую строку, из которой удалены все вхождения символа ch. 
// Пример: ch = ‘k’, s = “kabckdgkefgk”, ответ: “abcdgefg”.
char* task3(char *s, char ch)
{
  int size = 0;
  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] != ch) {
        size++;
    }
  }
  char* result = (char*)malloc(sizeof(char) * size);
  int j = 0;
  for (int i = 0; s[i] != '\0'; i++) {
	  if (s[i] != ch) {
      result[j] = s[i];
      j++;
  	}
    result[j] = '\0';
  }
  return result;
}
