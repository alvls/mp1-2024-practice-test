// Задача 3. Дана строка s, состоящая из английских слов, разделенных пробелами
// (одним или несколькими). Определить количество слов, 
// которые начинаются и заканчиваются одной и той же буквой. 
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int task3(char *s) {
    int count = 0;
    char *word;

    while (isspace(*s)) s++;

    word = strtok(s, " ");
    
    while (word != NULL) {
        if (tolower(word[0]) == tolower(word[strlen(word) - 1])) {
            count++;
        }
        
        word = strtok(NULL, " ");
    }

    return count;
}
