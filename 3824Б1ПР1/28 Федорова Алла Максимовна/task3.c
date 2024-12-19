// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из 
// строчных букв английского алфавита, содержащихся в исходной строке s. 
// Пример: s = "aBc1D2e34F56g", ответ: "aceg".
#include <string.h>
char* task3(char* s) {
    if (s == NULL) return NULL;

    int len = strlen(s);
    int result_len = 0;
    char* result = (char*)malloc(len + 1); 
    if (result == NULL) return NULL;


    for (int i = 0; i < len; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            result[result_len++] = s[i]; 
        }
    }
    result[result_len] = '\0';

    return result;
}
