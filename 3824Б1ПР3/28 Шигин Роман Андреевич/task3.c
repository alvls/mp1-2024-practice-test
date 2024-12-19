// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из 
// строчных букв английского алфавита, содержащихся в исходной строке s. 
// Пример: s = "aBc1D2e34F56g", ответ: "aceg".
char* task3(char *s)
{
    size_t length = 0;
    for (const char* p = s; *p != '\0'; ++p) {
        if (islower(*p)) {
            length++;
        }
    }

    char* result = (char*)malloc((length + 1) * sizeof(char));

    char* dst = result;
    for (const char* p = s; *p != '\0'; ++p) {
        if (islower(*p)) {
            *dst++ = *p;
        }
    }
    *dst = '\0';

    return result;
}
