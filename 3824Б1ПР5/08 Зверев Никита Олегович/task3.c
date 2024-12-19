// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из 
// строчных букв английского алфавита, содержащихся в исходной строке s. 
// Пример: s = "aBc1D2e34F56g", ответ: "aceg".
char* task3(char *s)
{
      size_t len = strlen(s);
    char *result = malloc(len + 1);
    if (!result) return NULL;

    size_t j = 0;
    for (size_t i = 0; i < len; i++) {
        if (islower(s[i])) {
            result[j++] = s[i];
        }
    }
    result[j] = '\0';
  return result;
}
