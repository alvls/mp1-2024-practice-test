// Задача 3. Даны: символ ch и строка s. 
// Сформировать новую строку, из которой удалены все вхождения символа ch. 
// Пример: ch = ‘k’, s = “kabckdgkefgk”, ответ: “abcdgefg”.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* task3(char* s, char ch)
{
    size_t len = strlen(s);
    char* result = (char*)malloc(len + 1); 
    if (result == NULL)
    {
        return NULL;
    }
    size_t j = 0; 
    for (size_t i = 0; i < len; ++i)
    {
        if (s[i] != ch) 
        {
            result[j++] = s[i];
        }
    }
    result[j] = '\0';
    return result; 
}
