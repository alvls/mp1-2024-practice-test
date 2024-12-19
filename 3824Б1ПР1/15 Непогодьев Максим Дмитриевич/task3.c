// Задача 3. Даны: символ ch и строка s. 
// Сформировать новую строку, из которой удалены все вхождения символа ch. 
// Пример: ch = ‘k’, s = “kabckdgkefgk”, ответ: “abcdgefg”.
#include <stdlib.h>

char* task3(char *s, char ch)
{
  char* ans;
  int n = 0, k = 0;
  while (s[n] != '\0') {
  	n++;
  }
  ans = (char*)malloc((n + 1) * sizeof(char));
  for (int i = 0; i <= n; i++) {
  	if (s[i] != ch) {
  		ans[k] = s[i];
  		k++;
  	}
  }
  return ans;
}
