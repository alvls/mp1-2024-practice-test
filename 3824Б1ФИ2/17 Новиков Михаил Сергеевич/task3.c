// Задача 3. Дана строка s, состоящая из английских слов, разделенных пробелами
// (одним или несколькими). Определить количество слов, 
// которые начинаются и заканчиваются одной и той же буквой. 

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int task3(char *s) {
    int count = 0;
    int in_word = 0;
    char start_char = '\0';

    for (size_t i = 0; s[i] != '\0'; i++) {
        if (isalpha(s[i])) {
            if (!in_word) {
                in_word = 1;
                start_char = tolower(s[i]);
            }
        } else if (isspace(s[i]) && in_word) {
            in_word = 0;
            if (tolower(s[i - 1]) == start_char) {
                count++;
            }
        }
    }

    if (in_word && tolower(s[strlen(s) - 1]) == start_char) {
        count++;
    }

    return count;
}
