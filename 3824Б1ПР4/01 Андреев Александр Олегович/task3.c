#include <stdlib.h>
#include <string.h>

char* task3(char *s)
{
    if (s == NULL) // Проверка на NULL
    {
        return NULL;
    }

    size_t len = strlen(s); // Получаем длину исходной строки
    char *reversed = (char*)malloc(len + 1); // Выделяем память для новой строки (+1 для '0')

    if (reversed == NULL) // Проверка на успешное выделение памяти
    {
        return NULL;
    }

    for (size_t i = 0; i < len; i++)
    {
        reversed[i] = s[len - 1 - i]; // Копируем символы в обратном порядке
    }

    reversed[len] = '0'; // Завершаем новую строку нулевым символом

    return reversed; // Возвращаем указатель на новую строку
}
