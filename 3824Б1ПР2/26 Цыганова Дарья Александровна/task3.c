// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из цифр,
// содержащихся в исходной строке s.
// Пример: s = "abc1d2e34f56g", ответ: "123456".
#include <stdlib.h>
#include <string.h>
char* task3(char* s) {
    int len = strlen(s);
    char* a = (char*)malloc(len + 1); 
    if (a == NULL) {
        return NULL; 
    }
    int j = 0;

    for (int i = 0; i < len; i++) {
        switch (s[i]) {
        case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9': case '0': {
            a[j] = s[i]; 
            j++;
            break;
        }
        }
    }
    for (int i = j; i < len; i++) {
        a[i] = '\0';
    }
    return a; 
}
