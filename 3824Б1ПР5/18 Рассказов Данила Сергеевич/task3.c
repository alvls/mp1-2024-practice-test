// Задача 3. Дана строка s, состоящая из английских слов, разделенных пробелами
// (одним или несколькими). Определить длину самого короткого слова в строке.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <limits.h>

int task3(const char *s) {
    if (s == NULL) {
        return 0;
    }

    size_t len = strlen(s);
    if (len == 0) {
        // Пустая строка
        return 0;
    }

    int min_len = INT_MAX;
    int current_len = 0; 
    int in_word = 0;  

    for (size_t i = 0; i < len; i++) {
        if (!isspace((unsigned char)s[i])) {
            if (!in_word) {
                // Начало нового слова
                in_word = 1;
                current_len = 1;
            } else {
                current_len++;
            }
        } else {
            if (in_word) {
                // Конец текущего слова
                if (current_len < min_len) {
                    min_len = current_len;
                }
                in_word = 0;
                current_len = 0;
            }
        }
    }

    if (in_word) {
        if (current_len < min_len) {
            min_len = current_len;
        }
    }

    if (min_len == INT_MAX) {
        return 0;
    }

    return min_len;
}
