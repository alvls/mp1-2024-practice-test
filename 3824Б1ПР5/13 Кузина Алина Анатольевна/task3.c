// Задача 3. Даны: символ ch и строка s. 
// Сформировать новую строку, в которой после каждого вхождения символа ch 
// в строку s вставлен символ ‘#’.
// Пример: ch = ‘k’, s = “abckdgkefgk”, ответ: “abck#dgk#efgk#”.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* task3(char *s, char ch) {
    size_t len = strlen(s);
    size_t new_len = len;  
    for (size_t i = 0; i < len; i++) {
        if (s[i] == ch) {
            new_len++;  
        }
    }
    
    char *result = (char*)malloc(new_len + 1); 
    if (!result) return NULL; 

    size_t j = 0; 
    for (size_t i = 0; i < len; i++) {
        result[j++] = s[i]; 
        if (s[i] == ch) {
            result[j++] = '#'; 
        }
    }
    result[j] = '\0'; 
    return result; 
}
