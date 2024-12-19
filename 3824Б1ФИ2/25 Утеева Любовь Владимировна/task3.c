// Задача 3. Дано целое число N. Не используя функции стандартной библиотеки
// языка С, перевести число в строковое представление в десятичном виде.
/*char* task3(int N)
{
  return "task3";
}*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
char* task3(int N) {
    bool isNegative = false;
    if (N < 0) {
        isNegative = true;
        N = -N;
    }
    char* result = (char*)malloc(20 * sizeof(char)); /
    if (result == NULL) {
        return NULL; 
    }
    int i = 0;
    if (N == 0) {
        result[i++] = '0';
    }
    else {
        while (N > 0) {
            result[i++] = (N % 10) + '0'; 
            N /= 10; 
        }
    }
    if (isNegative) {
        result[i++] = '-';
    }
    result[i] = '\0'; 
    int start = 0;
    int end = i - 1;
    while (start < end) {
        char temp = result[start];
        result[start] = result[end];
        result[end] = temp;
        start++;
        end--;
    }
    return result;
}
