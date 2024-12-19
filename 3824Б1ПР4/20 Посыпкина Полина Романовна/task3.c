// Задача 3. Дана строка s, состоящая из английских слов, разделенных пробелами
// (одним или несколькими). Скопировать строку s в новую и зашифровать ее,
// заменяя каждую букву на следующую за ней в алфавите 
// (считать, что за ‘z’ следует ‘a’), сохраняя регистр.
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

char* task3(char *s) {
    size_t len = strlen(s);
    char *encrypted = (char *)malloc((len + 1) * sizeof(char));

    if (!encrypted) return NULL; // Проверка на успешное выделение памяти

    for (size_t i = 0; i < len; ++i) {
        if (isalpha(s[i])) {
            if (islower(s[i])) {
                encrypted[i] = (s[i] - 'a' + 1) % 26 + 'a';
            } else if (isupper(s[i])) {
                encrypted[i] = (s[i] - 'A' + 1) % 26 + 'A';
            }
        } else {
            encrypted[i] = s[i];
        }
    }

    encrypted[len] = '\0';
    return encrypted;
}
