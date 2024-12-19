// Задача 3. Дано целое число N. Не используя функции стандартной библиотеки
// языка С, перевести число в строковое представление в десятичном виде.
#include <stdlib.h>
char* task3(int N)
{
    char* temp = (char*)malloc(sizeof(char) * 20);
    size_t k = 0;
    int flag=0;
    if (N < 0) {
        flag = 1;
        N *= -1;
    }
    for (int i = 1; N >= i; i = i * 10) {
        temp[k] = ((N / i) % 10) + 48;
        k++;
    }
    char* arr = (char*)malloc(sizeof(char) * 20);
    size_t i=0;
    if (flag) {
        arr[0] = '-';
        i++;
        k++;
    }
    for (; i < k; i++) {
        arr[i] = temp[k - 1 - i];
    }
    arr[i] = '\0';
    return arr;
}
