#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* task3(char *s, unsigned N) {
    int dlina = strlen(s);  
    char* ss;  

    if (dlina >= N) {
        ss = (char*)malloc(N + 1); 
        strncpy(ss, s + dlina - N, N); 
    } else {
        // Если длина s меньше N
        ss = (char*)malloc(N + 1); 
        int star_count = N - dlina; 
        memset(ss, '*', star_count); 
        strcpy(ss + star_count, s); 
    ss[N] = '\\0'; 
    return ss; 
