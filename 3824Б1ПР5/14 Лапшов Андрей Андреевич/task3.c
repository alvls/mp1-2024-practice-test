#include <stdio.h>
#include <string.h>

char* task3(char *s, char ch)
{
    char *result = malloc(strlen(s) * 2 + 1);
    char *p = result;
    int i;

    for (i = 0; s[i] != '\0'; i++) {

        if (s[i] == ch) {
            *p++ = '#';
            *p++ = ch;
        } else {

            *p++ = s[i];
        }
    }

    *p++ = '\0';

    return result;
}
