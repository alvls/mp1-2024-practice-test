// Задача 3. Дано целое число N. Не используя функции стандартной библиотеки
// языка С, перевести число в строковое представление в десятичном виде.

#include <stdbool.h>
char* task3(int N) {
    static char str[12]; // 12, так как int может быть 11 символов + '\0'
    int index_for_mass = 0; 
    bool isMinus = false;

    if (N < 0) {
        isMinus = true;
        N = -N;
    }

    do {
        str[index_for_mass++] = (N % 10) + '0';
        N /= 10;                       
    } while (N > 0);

    if (isMinus) {
        str[index_for_mass++] = '-';
    }

    str[index_for_mass] = '\0';
    
    for (int i = 0, j = index_for_mass - 1; i < j; i++, j--) {
        char tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
    }

    return str;
}
