// Задача 3. Дана строка s. Сформировать новую строку, содержащую те же символы,
// но расположенные в обратном порядке.
char* task3(char *s) {
    int len = strlen(s);
    char *reversed = (char*)malloc((len + 1) * sizeof(char));
    for (int i = 0; i < len; i++) {
        reversed[i] = s[len - i - 1];
    }
    reversed[len] = '\0';
    return reversed;}
