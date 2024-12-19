// Задача 3. Дано целое число N. Не используя функции стандартной библиотеки
// языка С, перевести число в строковое представление в десятичном виде.
#include <stddef.h> 
#include <stdlib.h>
#include <stdbool.h> 
#include <limits.h>

char* task3(int N) {
    bool isNegative = N < 0;
    long long num = isNegative ? -(long long)N : N;
    int length = 0;
    long long temp = num;
    do {
        length++;
        temp /= 10;
    } while (temp > 0);
    if (isNegative) {
        length++;
    }
    char* str = (char*)malloc(length + 1);
    if (str == NULL) {
        return NULL;
    }

    str[length] = '\0';
    for (int i = length - 1; i >= 0; i--) {
        if (isNegative && i == 0) {
            str[i] = '-'; 
        } else {
            str[i] = (num % 10) + '0';
            num /= 10;
        }
    }

    return str;
}
