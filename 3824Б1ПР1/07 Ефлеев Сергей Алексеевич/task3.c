// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из 
// заглавных букв английского алфавита, содержащихся в исходной строке s. 
// Пример: s = "aBc1D2e34F56g", ответ: "BDF".
#include <stdio.h>
#include <stdlib.h>
char* task3(char* s) {
    int i = 0, n = 0;
    while (s[i] != '\0') {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            n++;
        }
        i++;
    }
    char* str = (char*)malloc(sizeof(char)*(n+1));
    i = 0;
    int j = 0;
    while (s[i] != '\0') {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            str[j] = s[i];
            j++;
        }
        i++;
    }
    str[j] = '\0';
    return str;
}



