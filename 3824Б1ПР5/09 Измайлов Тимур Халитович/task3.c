#include <string.h>
#include <stdlib.h>

char* task3(char* s, unsigned N) {
    size_t len = strlen(s);
    char* ss = (char*)malloc((N + 1) * sizeof(char));

    if (ss == NULL) {  
        return NULL;  
    }

    if (len >= N) {
      
        strncpy_s(ss, N + 1, s + len - N, N);
    }
    else {
        size_t diff = N - len;
        
        memset(ss, '*', diff);
        
        strncpy_s(ss + diff, len + 1, s, len);
    }
    ss[N] = '\0';  
    return ss;
}
