#include <stdio.h>
#include <ctype.h>
#include <locale.h>
size_t task3(char* s) {
    size_t count = 0;

    // Проходим по каждому символу строки, пока не дойдем до конца
    while (*s != '\0') {
        // Если символ является заглавной буквой, увеличиваем счетчик
        if (isupper(*s)) {
            count++;
        }
        s++;  // Переходим к следующему символу
    }

    return count;
}

    setlocale(LC_ALL, "Russian");
    char s[100];

    // Ввод строки с клавиатуры
    printf("Введите строку: ");
    fgets(s, sizeof(s), stdin);  // fgets безопаснее для ввода строк

    // Выводим количество заглавных букв в строке
    printf("Количество заглавных букв: %zu\n", task3(s));

    return 0;
