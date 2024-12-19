// Задача 3. Даны: символ ch и строка s. 
// Сформировать новую строку, в которой перед каждым вхождением символа ch 
// в строку s вставлен символ ‘#’.
// Пример: ch = ‘k’, s = “kabckdgkefgk”, ответ: “#kabc#kdg#kefg#k”.

#include <stdlib.h>
#include <string.h>

char* task3(char* s, char ch) 
{
    
    size_t len = strlen(s);
    size_t new_len = len * 2 + 1;

    char* result = (char*)malloc(new_len);  
    if (result == NULL)  //Возвращаем NULL, если память не удалось выделить
    {
        return NULL;
    }

    int j = 0;
    for (int i = 0; i < len; i++) 
    {
        if (s[i] == ch) 
        {
            result[j++] = '#';
        }
        result[j++] = s[i];
    }

    result[j] = '\0';
    return result; 
}
