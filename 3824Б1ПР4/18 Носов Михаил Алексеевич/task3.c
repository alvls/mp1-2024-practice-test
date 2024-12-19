// Задача 3. Дана строка s, состоящая из английских слов, разделенных пробелами
// (одним или несколькими). Определить длину самого короткого слова в строке.
#include <string.h>
#include <ctype.h>

int task3(char *s) {
    int min_length = INT_MAX;
    int current_length = 0;
    int found_word = 0;

    for (size_t i = 0; s[i] != '\0'; i++) {
        if (!isspace(s[i])) {
            current_length++;
            found_word = 1;
        } else if (current_length > 0) {
            if (current_length < min_length) {
                min_length = current_length;
            }
            current_length = 0;
        }
    }

    if (current_length > 0 && current_length < min_length) {
        min_length = current_length;
    }

    return found_word ? min_length : 0;
}
