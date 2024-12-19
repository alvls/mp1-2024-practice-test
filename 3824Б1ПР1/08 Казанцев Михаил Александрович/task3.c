// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из 
// строчных букв английского алфавита, содержащихся в исходной строке s. 
// Пример: s = "aBc1D2e34F56g", ответ: "aceg".
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

char* task3(char *s){
char* nst=(char*)malloc(strlen(s) + 1);
int k=0;
for (int i = 0; s[i] != '\0'; i++){ 
  if (s[i] >= 'a' && s[i] <= 'z'){nst[k]=s[i];nst[k+1]='\0';k++;}
}
    return nst;
}
