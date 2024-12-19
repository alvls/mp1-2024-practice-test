// Задача 3. Дана строка s, состоящая из английских слов, разделенных пробелами
// (одним или несколькими). Определить количество слов, 
// которые начинаются и заканчиваются одной и той же буквой. 
#include <stdio.h>
#include <string.h>

int task3(char *s) {
    int count = 0;
    char *start = NULL;
    char *end = s;

    while (*end != '\0') {
        while (*end == ' ') end++;
        if (*end == '\0') break;

        start = end;
        while (*end != ' ' && *end != '\0') end++;

        if (end > start && *start == *(end - 1)) {
            count++;
        }
    }
    return count;
}
