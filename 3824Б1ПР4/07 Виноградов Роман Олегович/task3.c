// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из 
// заглавных букв английского алфавита, содержащихся в исходной строке s. 
// Пример: s = "aBc1D2e34F56g", ответ: "BDF".
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* task3(char *s) {
    if (s == NULL) return NULL; 

    size_t len = strlen(s);
    char *result = (char *)malloc(len + 1);
    if (result == NULL) return NULL; 

    size_t j = 0; 
    for (size_t i = 0; i < len; i++) {
        if (isupper((unsigned char)s[i])) { 
            result[j++] = s[i]; 
        }
    }
    result[j] = '\0'; 

    
    char *final_result = (char *)realloc(result, j + 1);
    if (final_result == NULL) {
        free(result); ь
        return NULL;
    }

    return final_result; 
}
