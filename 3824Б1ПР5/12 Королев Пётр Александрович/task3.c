// Задача 3. Даны: символ ch и строка s. 
// Сформировать новую строку, в которой все вхождения символа ch в строку s
// удвоены. Пример: ch = ‘g’, s = “abgcdgefgk”, ответ: “abggcdggefggk”.
#include <stdlib.h>
#include <string.h>

char* task3(char *s, char ch) {
    if (s == NULL) return NULL; 

    size_t len = strlen(s);
    size_t count = 0;
    for (size_t i = 0; i < len; i++) {
        if (s[i] == ch) {
            count++;
        }
    }

    char *new_s = (char *)malloc(len + count + 1); 
    if (new_s == NULL) return NULL; 

    size_t j = 0;
    for (size_t i = 0; i < len; i++) {
        if (s[i] == ch) {
            new_s[j++] = ch;
            new_s[j++] = ch;
        } else {
            new_s[j++] = s[i];
        }
    }
    new_s[j] = '\0'; 

    return new_s;
}
