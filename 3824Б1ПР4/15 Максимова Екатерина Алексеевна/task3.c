// Задача 3. Даны: символ ch и строка s. 
// Сформировать новую строку, из которой удалены все вхождения символа ch. 
// Пример: ch = ‘k’, s = “kabckdgkefgk”, ответ: “abcdgefg”.
#include <stdio.h>
#include <string.h>
char* task3(char *s, char ch)
{
  int length = strlen(s);
    char *result = malloc(length + 1); 
    int j = 0; 
    for (int i = 0; i < length; i++) {
        if (s[i] != ch) {
            result[j] = s[i];
            j++;
        }
    }
    result[j] = '\0';
    return result; 
}
