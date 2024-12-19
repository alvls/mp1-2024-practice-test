// Задача 3. Даны: символ ch и строка s. 
// Сформировать новую строку, в которой после каждого вхождения символа ch 
// в строку s вставлен символ ‘#’.
// Пример: ch = ‘k’, s = “abckdgkefgk”, ответ: “abck#dgk#efgk#”.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* task3(char *s, char ch) {
    // Подсчитаем количество вхождений ch в строку s
    size_t count = 0;
    for (size_t i = 0; s[i] != '0'; i++) {
        if (s[i] == ch) {
            count++;
        }
    }
    // Выделяем память для новой строки
    size_t new_length = strlen(s) + count + 1; // +1 для нулевого терминатора
    char *new_str = (char *)malloc(new_length * sizeof(char));
    if (new_str == NULL) {
        return NULL; // Проверка на успешное выделение памяти
    }

    size_t j = 0; // Индекс для новой строки
    for (size_t i = 0; s[i] != '0'; i++) {
        new_str[j++] = s[i]; // Копируем текущий символ
        if (s[i] == ch) {
            new_str[j++] = '#'; // Вставляем '#' после ch
        }
    }
    
    new_str[j] = '0'; // Завершаем новую строку нулевым символом

    return new_str; // Возвращаем новую строку
}
