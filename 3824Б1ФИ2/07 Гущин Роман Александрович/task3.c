// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из 
// заглавных букв английского алфавита, содержащихся в исходной строке s. 
// Пример: s = "aBc1D2e34F56g", ответ: "BDF".
#include <stdio.h>
#include <ctype.h>
char* task3(char *s) {
    char result[100];
    int j = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (isupper(s[i])) {
            result[j++] = s[i];
        }
    }
    result[j] = '\0';
    return result;
}
