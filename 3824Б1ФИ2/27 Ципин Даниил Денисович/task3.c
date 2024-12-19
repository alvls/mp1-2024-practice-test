// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из 
// заглавных букв английского алфавита, содержащихся в исходной строке s. 
// Пример: s = "aBc1D2e34F56g", ответ: "BDF".
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* task3(char *s) {
    int len = strlen(s);
    
    char *result = (char *)malloc(len + 1);
    if (result == NULL) {
        return NULL;
    }

    int j = 0;

    for (int i = 0; i < len; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            result[j++] = s[i];
        }
    }

    result[j] = '\0';

    return result;
}
