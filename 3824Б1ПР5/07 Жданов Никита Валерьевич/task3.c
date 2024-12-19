// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из 
// заглавных букв английского алфавита, содержащихся в исходной строке s. 
// Пример: s = "aBc1D2e34F56g", ответ: "BDF".
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* task3(char *s)
{
    // Подсчет заглавных букв для выделения памяти
    size_t count = 0;
    for (size_t i = 0; s[i] != '\0'; i++) {
        if (isupper(s[i])) {
            count++;
        }
    }

    // Выделение памяти для новой строки
    char *result = (char *)malloc(count + 1); // +1 для нуль-терминатора
    if (result == NULL) {
        return NULL; // Проверка на успешное выделение памяти
    }

    // Заполнение новой строки заглавными буквами
    size_t j = 0;
    for (size_t i = 0; s[i] != '\0'; i++) {
        if (isupper(s[i])) {
            result[j++] = s[i];
        }
    }
    result[j] = '\0'; // Завершение строки

    return result; // Возвращаем новую строку
}
