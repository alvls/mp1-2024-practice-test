// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из цифр,
// содержащихся в исходной строке s.
// Пример: s = "abc1d2e34f56g", ответ: "123456".

#include <stdlib.h>
char* task3(char* s)
{
    char* c;
    size_t beb = 0;
    size_t schet = 0;
    while (s[beb] != '\0') {
        if (s[beb] > 47 && s[beb] < 58) {
            schet += 1;
        }
        beb += 1;
    }
    c = (char*)calloc(schet, 2);
    int dild = beb;
    beb = 0;
    schet = 0;
    if (c) {
        while (beb != dild) {
            if (s[beb] > 47 && s[beb] < 58) {
                c[schet] = s[beb];
                schet += 1;
            }
            beb += 1;
        }
    }
    return c;
}
