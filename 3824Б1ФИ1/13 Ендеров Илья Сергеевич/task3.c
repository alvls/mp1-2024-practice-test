// Задача 3. Даны: символ ch и строка s. 
// Сформировать новую строку, в которой после каждого вхождения символа ch 
// в строку s вставлен символ ‘#’.
// Пример: ch = ‘k’, s = “abckdgkefgk”, ответ: “abck#dgk#efgk#”.
#include <stdlib.h>
#include <string.h>

char* task3(char* s, char ch)
{
    
    int j = 0;
    int len = strlen(s);
    char* result = (char*)malloc(len * 2);
    //Нужно будет освободить память в функции
    //main или другим способом

    for (int i = 0; i < len; i++) 
    {
        result[j++] = s[i];

        if (s[i] == ch) 
        {
            result[j++] = '#';
        }
    }

    result[j] = '\0';
    return result;
}
