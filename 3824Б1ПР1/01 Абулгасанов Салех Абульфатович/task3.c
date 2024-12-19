#include <malloc.h>
#include <string.h>
char* task3(char* s)
{
    int len = strlen(s), j = 0;;
    char* obr = (char*)malloc((len + 1) * sizeof(char));
    for (int i = len - 1; i >= 0; i--) obr[j++] = s[i];
    obr[len] = '\0';
    return obr;
}
