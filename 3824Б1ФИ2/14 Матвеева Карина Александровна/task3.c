// Задача 3. Даны: символ ch и строка s. 
// Сформировать новую строку, в которой перед каждым вхождением символа ch 
// в строку s вставлен символ ‘#’.
// Пример: ch = ‘k’, s = “kabckdgkefgk”, ответ: “#kabc#kdg#kefg#k”.
#include <string.h>
#include <stdio.h>

void insertHash(char *s, char ch) {
    int len = strlen(s);
    char result[2 * len + 1]; 
    int j = 0; 

    for (int i = 0; i < len; i++) {
        
        if (s[i] == ch) {
            result[j++] = '#';
        }
        
        result[j++] = s[i];
    }

    result[j] = '\\0';}
