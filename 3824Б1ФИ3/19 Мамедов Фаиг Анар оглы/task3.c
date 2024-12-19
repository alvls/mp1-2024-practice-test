// Задача 3. Дана строка s, состоящая из английских слов, разделенных пробелами
// (одним или несколькими). Скопировать строку s в новую и преобразовать ее так,
// чтобы все слова в ней начинались с заглавной буквы.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char* task3(char *s) {
    char *result = malloc(strlen(s) + 1);
    if (result == NULL) {
        return NULL;
    }
    int i;
    int in_word = 0;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ') {
            result[i] = ' ';
            in_word = 0;
        } else {

            if (!in_word) {
                result[i] = toupper(s[i]); 
                in_word = 1; 
            } else {
                result[i] = s[i]; 
            }
        }
    }
    result[i] = '\0';
    return result;
}
