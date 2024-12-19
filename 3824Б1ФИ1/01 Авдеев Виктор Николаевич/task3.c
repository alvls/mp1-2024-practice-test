// Задача 3. Дана строка s. Сформировать новую строку, содержащую те же символы,
// но расположенные в обратном порядке.
char* task3(char *s)
{
    int length = 0;
    while (s[length] != '\0')
        length++;

    for (int i = 0; i < length / 2; ++i)
    {
        char temp = s[i];
        s[i] = s[length - i - 1];
        s[length - i - 1] = temp;
    }

    return s;
}
