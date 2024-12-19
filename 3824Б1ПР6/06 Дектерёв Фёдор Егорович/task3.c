// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из цифр,
// содержащихся в исходной строке s.
// Пример: s = "abc1d2e34f56g", ответ: "123456".
char* task3(const char *s) {
  
    if (s == NULL) {
        return NULL;
    }

    size_t len = strlen(s);
    char *result = (char *)malloc(len + 1);
    if (result == NULL) {
        return NULL;
    }

    size_t j = 0;
    for (size_t i = 0; i < len; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            result[j] = s[i];
            j++;
        }
    }

    result[j] = '\0';

    if (j == 0) {
        free(result);
        return NULL;
    }

    char *final_result = (char *)malloc(j + 1);
    if (final_result == NULL) {
        free(result);
        return NULL;
    }
    strcpy(final_result, result);
    free(result);

    return final_result;
  
}
