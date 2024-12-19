// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из цифр,
// содержащихся в исходной строке s.
// Пример: s = "abc1d2e34f56g", ответ: "123456".
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
char* task3(char *s)
{
  size_t len_str = strlen(s);
char* cifra1 = (char*)malloc(len_str + 1);
if (cifra1 == NULL) {
    return NULL;
}
size_t index = 0;
for (size_t i = 0; i < len_str; ++i) {
    if (isdigit((unsigned char)s[i])) {
        cifra1[index++] = s[i];
    }
}
cifra1[index] = '\0';
return cifra1;
}
