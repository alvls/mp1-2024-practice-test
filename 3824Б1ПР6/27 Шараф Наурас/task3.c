// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из 
// заглавных букв английского алфавита, содержащихся в исходной строке s. 
// Пример: s = "aBc1D2e34F56g", ответ: "BDF".
#include <stdlib.h>

char* task3(char *s) {
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            count++;
        }
    }

    if (count == 0) {
        char *result = (char*)malloc(1);
        result[0] = '\0';
        return result;
    }

    char *result = (char*)malloc(count + 1);
    int j = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') { 
            result[j] = s[i];
            j++;
        }
    }

    result[j] = '\0';
    return result;
}
