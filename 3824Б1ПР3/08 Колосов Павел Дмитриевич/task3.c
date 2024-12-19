// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из 
// строчных букв английского алфавита, содержащихся в исходной строке s. 
// Пример: s = "aBc1D2e34F56g", ответ: "aceg".
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

char* task3(char *s) {
    int len = strlen(s);
    char* new_s = (char*)malloc(len + 1);
    if (new_s == NULL) {
        return NULL;
    }
    new_s[0] = '\0';
    int new_len = 0;
    for (int i = 0; i < len; i++) {
        if (islower(s[i])) {
            new_s[new_len++] = s[i];
        }
    }
    new_s[new_len] = '\0';
    char* final_s = (char*)realloc(new_s, new_len + 1);
    if (final_s == NULL) {
        free(new_s);
        return NULL;
    }
    new_s = final_s;

    return new_s;
}
