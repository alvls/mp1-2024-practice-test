#include <stdlib.h>
#include <string.h>

char* task3(char *s) {
  size_t len = strlen(s);  
  char *reversed = (char*)malloc(len + 1);  

  for (size_t i = 0; i < len; i++) {
    reversed[i] = s[len - 1 - i];
  }

  reversed[len] = '\0'; 

  return reversed;  
}

void _start() {
  char s[] = "hello";  
  char *reversed = task3(s);  
  free(reversed);  
}
