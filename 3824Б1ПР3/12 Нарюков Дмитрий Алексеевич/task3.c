// Задача 3. Даны: символ ch и строка s. 
// Сформировать новую строку, в которой все вхождения символа ch в строку s
// удвоены. Пример: ch = ‘g’, s = “abgcdgefgk”, ответ: “abggcdggefggk”.

#include <stdlib.h>
#include <string.h>

char* task3(char *s, char ch)
{
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ch) {
            count++;
        }
    }

    size_t lenStr = strlen(s);
    char *new_string = (char *)malloc(lenStr + count + 1);

    int j = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        new_string[j++] = s[i];
        if (s[i] == ch) {
            new_string[j++] = ch;
        }
    }

    new_string[j] = '\0';
    return new_string;
}
