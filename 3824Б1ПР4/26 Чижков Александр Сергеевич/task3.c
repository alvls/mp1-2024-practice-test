#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* task3(char *s) {
    size_t len = strlen(s);
    size_t digit_count = 0;

    for (size_t i = 0; i < len; i++) {
        if (isdigit(s[i])) {
            digit_count++;
        }
    }

    char* result = (char*)malloc((digit_count + 1) * sizeof(char));
    if (result == NULL)
      return NULL; 

    size_t k = 0;
    for (size_t i = 0; i < len; i++) {
        if (isdigit(s[i])) {
            result[k++] = s[i];
        }
    }
    result[k] = '\0';

    return result;
}
