#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 

char* task3(char *s, char ch) {
    if (s == NULL) {
        return NULL;
    }

    size_t originalLength = strlen(s);
    size_t newLength = originalLength;
    for (size_t i = 0; i < originalLength; ++i) {
        if (s[i] == ch) {
            newLength++;
        }
    }

    char *newString = (char *)malloc((newLength + 1) * sizeof(char));
    if (newString == NULL) {
        return NULL;
    }

    size_t j = 0;
    for (size_t i = 0; i < originalLength; ++i) {
        if (s[i] == ch) {
            newString[j++] = '#';
        }
        newString[j++] = s[i];
    }

    newString[j] = '\0';
    return newString;
}
