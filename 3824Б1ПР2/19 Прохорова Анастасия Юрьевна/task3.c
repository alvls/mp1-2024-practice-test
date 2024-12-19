#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char* task3(char* s) {
    size_t len = strlen(s);
    char* result = (char*)malloc((len + 1) * sizeof(char));
    if (result == NULL) return NULL;

    int in_word = 0;
    size_t j = 0;

    for (size_t i = 0; i < len; ++i) {
        if (isspace(s[i])) {
            result[j++] = s[i];
            in_word = 0;
        }
        else {
            if (!in_word) {
                result[j++] = toupper(s[i]);
                in_word = 1;
            }
            else {
                result[j++] = tolower(s[i]);
            }
        }
    }
    result[j] = '\0';
    return result;
}
