// Задача 3. Дана строка s, состоящая из английских слов, разделенных пробелами
// (одним или несколькими). Определить длину самого короткого слова в строке.
#include <stdio.h>
int task3(char *s)
{
    int min_len = 100000000000;
    int current_len = 0;  

    while (*s) {
        if (*s != ' ') {
            current_len++;
        } else {
            if (current_len > 0 && current_len < min_len) {
                min_len = current_len;
            }
            current_len = 0;
        }
        s++;
    }
    
    if (current_len > 0 && current_len < min_len) {
        min_len = current_len;
    }
    
    if (min_len == 100000000000) {
        return -1;
    } else {
        return min_len;
    }
}
