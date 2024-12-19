#include <stdlib.h>
#include <string.h>

char* task3(char *s) {
    if (s == NULL) {
        return NULL;
    }

    size_t len = strlen(s);
    char* massivBykov = (char*)malloc(len + 1);
    if (massivBykov == NULL) {
        return NULL;
    }
    size_t massivBykov_len = 0;
    for (size_t i = 0; i < len; i++) {
        if (s[i] >= '0' && s[i] <= '9') { 
            massivBykov[massivBykov_len] = s[i];
            massivBykov_len++;
        }
    }
    massivBykov[massivBykov_len] = '\0';
    
     char *result = (char*)realloc(massivBykov, massivBykov_len + 1);
     
    
    return result;
}
