#include <stdlib.h> 

char* task3(char* s) {
    if (s == NULL) {
        return NULL; 
    }
    size_t result_len = 0;
    for (char* p = s; *p != '\0'; p++) {
        if (*p >= 'a' && *p <= 'z') {
            result_len++;
        }
    }
    char* result = (char*)malloc((result_len + 1) * sizeof(char));
    if (result == NULL) {
        return NULL; 
    }
    size_t index = 0;
    for (char* p = s; *p != '\0'; p++) {
        if (*p >= 'a' && *p <= 'z') {
            result[index++] = *p;
        }
    }
    result[index] = '\0'; 
    return result;
}
