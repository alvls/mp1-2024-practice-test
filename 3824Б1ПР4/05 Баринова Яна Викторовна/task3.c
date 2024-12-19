// Задача 3. Дано целое число N. Не используя функции стандартной библиотеки
// языка С, перевести число в строковое представление в десятичном виде.
#include <stdio.h>

char* task3(int N) 
{
    static char buffer[12]; 
    int minus = 0;    

    if (N == -2147483648) 
        return "-2147483648";

    if (N < 0) 
    {
       minus = 1;
       N = -N;
    }

    int i = 11;         
    buffer[i] = '\0';  

    do 
    {
        buffer[--i] = (N % 10) + '0'; 
        N /= 10;
    } while (N > 0);

    if (minus) 
        buffer[--i] = '-';
    
    return &buffer[i];
}
