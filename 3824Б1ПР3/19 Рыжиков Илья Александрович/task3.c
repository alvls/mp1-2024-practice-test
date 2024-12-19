// Задача 3. Дана строка s, состоящая из английских слов, разделенных пробелами
// (одним или несколькими). Скопировать строку s в новую и преобразовать ее так,
// чтобы все слова в ней начинались с заглавной буквы.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>  
#include <string.h> 

char* task3(char *s) {
    if (s == NULL) {
        return NULL;
    }

    size_t len = strlen(s);
    
    char *result = (char *)malloc(len + 1);    
    if (result == NULL) {
        return NULL; 
    }

    int newWord = 1;

    for (size_t i = 0; i < len; i++) {
        if (s[i] == ' ') {
            result[i] = ' ';
            newWord = 1;
        } else {
            if (newWord) {
                result[i] = toupper(s[i]);
                newWord = 0;
            } else {
                result[i] = tolower(s[i]);
            }
        }
    }

    result[len] = '\0';
    return result;
}
