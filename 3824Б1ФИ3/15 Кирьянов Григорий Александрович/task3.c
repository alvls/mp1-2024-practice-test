// Задача 3. Даны: символ ch и строка s. 
// Сформировать новую строку, из которой удалены все вхождения символа ch. 
// Пример: ch = ‘k’, s = “kabckdgkefgk”, ответ: “abcdgefg”.
#include <stdlib.h>
#include <string.h>

char* task3(char *s, char ch)
{
    if (s == NULL) {
        return NULL;
    }

    int len = strlen(s);
    int newLen = 0;
    for(int i = 0; i < len; ++i)
    {
        if (s[i] != ch) {
            newLen++;
        }
    }

    char *result = (char*)malloc((newLen + 1) * sizeof(char)); 
    if (result == NULL)
    {
      return NULL;
    }

    int j = 0;
    for(int i = 0; i < len; ++i)
    {
        if (s[i] != ch)
        {
            result[j] = s[i];
            j++;
        }
    }
    result[newLen] = '\0';

    return result;
}
