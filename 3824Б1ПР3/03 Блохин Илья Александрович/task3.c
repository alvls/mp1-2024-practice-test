// Задача 3. Дана строка s.
// Подсчитать количество содержащихся в ней заглавных букв английского алфавита.
int count_uppercase_letters(const char *s) {
    int count = 0;
    while (*s) {
        if (*s >= 'A' && *s <= 'Z') {
            count++;
        }
        s++;
    }
    return count;
}
