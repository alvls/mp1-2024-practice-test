// Задача 3. Дана строка s, состоящая из английских слов, разделенных пробелами
// (одним или несколькими). Определить количество слов в строке.
#include <stdio.h>

    int task3(char* s) {
        int word_count = 0;
        int word = 0;

        while (*s != '\0') { 
            if (*s != ' ') { 
                if (word == 0) { 
                    word_count++;
                    word = 1;
                }
            }
            else {
                word = 0;
            }
            s++; 
        }
        return word_count;
    }
