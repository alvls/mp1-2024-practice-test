// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из 
// строчных букв английского алфавита, содержащихся в исходной строке s. 
// Пример: s = "aBc1D2e34F56g", ответ: "aceg".

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* task3(char *s)
{
    size_t len = strlen(s);
    char *result = (char*)malloc(len + 1); // Выделяем память для результата
    if (result == NULL) {
        return NULL; // Обработка ошибки выделения памяти
    }

    size_t j = 0; // Индекс для новой строки

    // Проходим по каждому символу исходной строки
    for (size_t i = 0; i < len; i++) {
        if (islower(s[i])) { // Проверка на строчную букву
            result[j++] = s[i];
        }
    }

    result[j] = '\0'; // Завершаем строку нулевым символом

    return result;
}

int main()
{
    char s[] = "aBc1D2e34F56g";
    char *filtered = task3(s);

    if (filtered != NULL) {
        printf("Resulting string: %s\n", filtered);
        free(filtered); // Освобождаем выделенную память
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
