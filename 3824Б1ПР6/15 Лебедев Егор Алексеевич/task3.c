// Задача 3. Даны: символ ch и строка s. 
// Сформировать новую строку, из которой удалены все вхождения символа ch. 
// Пример: ch = ‘k’, s = “kabckdgkefgk”, ответ: “abcdgefg”.
char* task3(char *s, char ch)
   if (s == NULL) return NULL;

    // Находим длину строки
    size_t len = 0;
    while (s[len] != '\0') {
        ++len;
    }

    // Выделяем память для новой строки
    char *result = (char *)malloc(len + 1);
    if (result == NULL) return NULL; // Проверка на успешное выделение памяти

    size_t j = 0;
    for (size_t i = 0; i < len; ++i) {
        if (s[i] != ch) {
            result[j++] = s[i];
        }
    }
    result[j] = '\0'; // Завершаем строку нулевым символом

    return result;
}
