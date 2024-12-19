char* task3(char* s)
{
    int len = strlen(s);
    char* obr = (char*)malloc((len + 1) * sizeof(char));
    for (int i = 0; i < len; i++) obr[i] = s[len - 1 - i];
    obr[len] = '\0';
    return obr; 
}
