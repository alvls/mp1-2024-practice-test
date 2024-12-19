// Задача 3. Дана строка s, состоящая из английских слов, разделенных пробелами
// (одним или несколькими). Скопировать строку s в новую и преобразовать ее так,
// чтобы все слова в ней начинались с заглавной буквы.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char* task3(const char* s) {
    if (s == NULL) {
        return NULL;
    }

    size_t len = strlen(s);
    char* new_str = (char*)malloc((len + 1) * sizeof(char));
    if (new_str == NULL) {
        fprintf(stderr, "Ошибка выделения памяти.\n");
        exit(EXIT_FAILURE);
    }

    int capitalize = 1;

    for (size_t i = 0; i < len; i++) {
        if (isspace((unsigned char)s[i])) {
            new_str[i] = s[i];
            capitalize = 1;
        }
        else {
            if (capitalize && isalpha((unsigned char)s[i])) {
                new_str[i] = toupper((unsigned char)s[i]);
                capitalize = 0;
            }
            else {
                new_str[i] = s[i];
                capitalize = 0;
            }
        }
    }

    new_str[len] = '\0';

    return new_str;
}
