// Задача 3. Даны: символ ch и строка s. 
// Сформировать новую строку, в которой все вхождения символа ch в строку s
// удвоены. Пример: ch = ‘g’, s = “abgcdgefgk”, ответ: “abggcdggefggk”.
#include <stdlib.h>
#include <string.h>

char* task3(char* s, char ch) {
    size_t original_length = strlen(s);
    size_t count = 0;
    for (size_t i = 0; i < original_length; i++) {
        if (s[i] == ch) {
            count++;
        }
    }

    size_t new_length = original_length + count; 
    char* new_string = (char*)malloc(new_length + 1); 

    if (new_string == NULL) {
        return NULL; 
    }
    size_t j = 0; 
    for (size_t i = 0; i < original_length; i++) {
        new_string[j++] = s[i]; 
        if (s[i] == ch) {
            new_string[j++] = ch; 
        }
    }

    new_string[j] = '0'; 
    return new_string; 
}
