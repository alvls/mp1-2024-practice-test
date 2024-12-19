// Задача 3. Даны: символ ch и строка s. 
// Сформировать новую строку, в которой все вхождения символа ch в строку s
// удвоены. Пример: ch = ‘g’, s = “abgcdgefgk”, ответ: “abggcdggefggk”.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* task3(char* s, char ch)
{
    int len = strlen(s);
    int count = 0;

    for (int i = 0; i < len; i++) {
        if (s[i] == ch) {
            count++;
        }
    }

    char* newString = (char*)malloc(len + count + 1); 
   
    int j = 0;
    for (int i = 0; i < len; i++) {
        newString[j++] = s[i]; 
        if (s[i] == ch) {
            newString[j++] = ch; 
        }
    }

    newString[j] = '\0'; 
    return newString;
}
