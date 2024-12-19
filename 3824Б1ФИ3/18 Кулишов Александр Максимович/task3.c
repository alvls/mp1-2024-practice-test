// Задача 3. Дана строка s, состоящая из английских слов, разделенных пробелами
// (одним или несколькими). Определить длину самого короткого слова в строке.
#include <stdio.h>
#include <string.h>

int task3(char *s) {
    int min_length = strlen(s);
    char *word = strtok(s, " ");

    while (word != NULL) {
        int length = strlen(word);
        if (length < min_length) {
            min_length = length;
        }
        word = strtok(NULL, " ");
    }

    return min_length;
}
