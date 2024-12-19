#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

char* task3(char *s) {
    // Подсчитываем количество заглавных букв
    int count = 0;
    for (int i = 0; s[i] != '0'; i++) { // Исправлено с '0' на '0'
        if (isupper(s[i])) {
            count++;
        }
    }

    // Выделяем память для новой строки
    // +1 для завершающего нуля
    char *result = (char *)malloc((count + 1) * sizeof(char));
    if (result == NULL) {
        return NULL; // Проверка на успешное выделение памяти
    }

    int j = 0;
    for (int i = 0; s[i] != '0'; i++) { // Исправлено с '0' на '0'
        if (isupper(s[i])) {
            result[j++] = s[i]; // Добавляем заглавную букву в новую строку
        }
    }
    
    result[j] = '0'; // Завершаем строку нулем
    return result;
}

int main() {
    setlocale(LC_ALL, "RUSSIAN");
    char s[] = "aBc1D2e34F56g";
    char *result = task3(s);
    
    if (result != NULL) {
        printf("Результат: %s\n", result);
        free(result); // Освобождаем выделенную память
    } else {
        printf("Ошибка выделения памяти.\n");
    }

    return 0;
}
