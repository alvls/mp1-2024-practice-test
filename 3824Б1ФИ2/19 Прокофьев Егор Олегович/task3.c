// Задача 3. Дана строка s, состоящая из английских слов, разделенных пробелами
// (одним или несколькими). Скопировать строку s в новую и преобразовать ее так,
// чтобы все слова в ней начинались с заглавной буквы.
char* task3(char *s) {
    char *result = (char*) malloc(strlen(s) + 1);
    strcpy(result, s);

    int inWord = 0;
    for (size_t i = 0; result[i]; i++) {
        if (isspace(result[i])) {
            inWord = 0;
        } else if (!inWord) {
            inWord = 1;
            result[i] = toupper(result[i]);
        }
    }

    return result;
}
