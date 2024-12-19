// Задача 3. Дана строка s, состоящая из английских слов, разделенных пробелами
// (одним или несколькими). Скопировать строку s в новую и зашифровать ее,
// заменяя каждую букву на следующую за ней в алфавите 
// (считать, что за ‘z’ следует ‘a’), сохраняя регистр.
// char* task3(char *s)
// {
//  return "task3";
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* task3(char* s) {
    size_t len = strlen(s);

    char* encrypted = (char*)malloc(len + 1);
    if (encrypted == NULL) {
        return NULL; 
    }

    for (size_t i = 0; i < len; i++) {
        char current_char = s[i];

        if (current_char >= 'a' && current_char <= 'z') {
            encrypted[i] = (current_char == 'z') ? 'a' : current_char + 1;
        }
        else if (current_char >= 'A' && current_char <= 'Z') {
            encrypted[i] = (current_char == 'Z') ? 'A' : current_char + 1;
        }
        else {
            encrypted[i] = current_char;
        }
    }

    encrypted[len] = '0';

    return encrypted;
}
