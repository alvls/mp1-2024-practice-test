// Задача 3. Дана строка s, состоящая из английских слов, разделенных пробелами
// (одним или несколькими). Скопировать строку s в новую и зашифровать ее,
// заменяя каждую букву на следующую за ней в алфавите 
// (считать, что за ‘z’ следует ‘a’), сохраняя регистр.
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<ctype.h>

char* task3(char *s)
{
    char* tmp = (char*)malloc(strlen(s) + 1);
    if (tmp == NULL)
        return NULL;

    for (size_t i = 0; s[i]; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            if (s[i] == 'z') {
                tmp[i] = 'a';
            }
            else {
                tmp[i] = s[i] + 1;
            }
        }
        else if (s[i] >= 'A' && s[i] <= 'Z') {
            if (s[i] == 'Z') {
                tmp[i] = 'A';
            }
            else {
                tmp[i] = s[i] + 1;
            }
        }
        else 
        {
            tmp[i] = s[i];
        }
    }
    tmp[strlen(s)] = '\0';

    return tmp;
}
