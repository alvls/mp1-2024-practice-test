// Задача 3. Даны: символ ch и строка s. 
// Сформировать новую строку, в которой после каждого вхождения символа ch 
// в строку s вставлен символ ‘#’.
// Пример: ch = ‘k’, s = “abckdgkefgk”, ответ: “abck#dgk#efgk#”.
char* task3(char *s, char ch)
{
      size_t count = 0;
    for (char* p = s; *p != '\0'; p++) {
        if (*p == ch) {
            count++;
        }
    }
    size_t new_length = strlen(s) + count + 1;
    char* result = (char*)malloc(new_length * sizeof(char));
    if (!result) {
        return NULL;
    }
    char* dest = result;
    for (char* p = s; *p != '\0'; p++) {
        *dest++ = *p;
        if (*p == ch) {
            *dest++ = '#';
        }
    }
    *dest = '\0';

    return result;
}
