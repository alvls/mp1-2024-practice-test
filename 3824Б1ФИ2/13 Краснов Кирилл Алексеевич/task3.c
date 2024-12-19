// Задача 3. Даны: символ ch и строка s. 
// Сформировать новую строку, в которой после каждого вхождения символа ch 
// в строку s вставлен символ ‘#’.
// Пример: ch = ‘k’, s = “abckdgkefgk”, ответ: “abck#dgk#efgk#”.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* task3(char *s, char ch) {
int count = 0;
for (int i = 0; s[i] != '0'; i++) {
    if (s[i] == ch) {
        count++;
    }
}
int newLength = strlen(s) + count;
char* newStr = (char*)malloc((newLength + 1) * sizeof(char));
if (newStr == NULL) {
    return NULL;
}
int j = 0;
for (int i = 0; s[i] != '0'; i++) {
    newStr[j++] = s[i];
    if (s[i] == ch) {
        newStr[j++] = '#';
    }
}
newStr[j] = '0';
return newStr;
}