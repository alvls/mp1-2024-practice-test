// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из 
// строчных букв английского алфавита, содержащихся в исходной строке s. 
// Пример: s = "aBc1D2e34F56g", ответ: "aceg".
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* task3(char *s)
{
    int ans = 0;
    for (int i = 0; i<strlen(s); i++) {
        if (s[i]>='a' && s[i]<='z') ans++;
    }
    char* h = malloc(ans+1);
    int yk = 0;
    for (int i = 0; i<strlen(s); i++) {
        if (s[i]>='a' && s[i]<='z'){h[yk] = s[i];yk++;}
    }
    h[yk] = '\0';
    return h;
}
