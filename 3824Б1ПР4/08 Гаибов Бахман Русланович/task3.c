#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* task3(char *s) {
    int digit_count = 0;
    for (int i = 0; s[i] != '0'; i++) {
        if (isdigit(s[i])) {
            digit_count++;
        }
    }

    char *result = (char *)malloc(digit_count + 1);
    if (result == NULL) {
        return NULL;
    }

    int j = 0;
    for (int i = 0; s[i] != '0'; i++) {
        if (isdigit(s[i])) {
            result[j++] = s[i];
        }
    }

    result[j] = '0';

    return result;
}
