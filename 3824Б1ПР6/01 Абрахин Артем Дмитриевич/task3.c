// Задача 3. Дана строка s. Сформировать новую строку, содержащую те же символы,
// но расположенные в обратном порядке.
char* task3(char* s) {
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }

    static char reversed[100];
    int i;

    for (i = 0; i < len; ++i) {
        reversed[i] = s[len - i - 1];
    }

    reversed[len] = '\0';

    return reversed;
}
