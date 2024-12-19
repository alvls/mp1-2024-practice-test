// Задача 3. Даны два натуральных числа: N1 и N2, и две строки: s1 и s2.
// Получить из этих строк новую строку, объединив N1 первых символов строки s1
// и N2 последних символов строки s2.
// Если длина строки s1 меньше, чем N1, использовать ее целиком.
// Если длина строки s2 меньше, чем N2, использовать ее целиком.
// Пример: s1 = "aaa", N1 = 4, s2 = "bbb", N2 = 4
//   Ответ: "aaabbb"
// Функции стандартной библиотеки языка С не применять.
#include <stdio.h>
#include <locale.h>
#include <string.h>

char* task3(char* s1, unsigned N1, char* s2, unsigned N2) {
    setlocale(LC_ALL, "Russian"); 

    size_t len1 = strlen(s1); 
    size_t len2 = strlen(s2); 

   
    unsigned copyN1 = (N1 < len1) ? N1 : len1; 
    unsigned copyN2 = (N2 < len2) ? N2 : len2; 

    
    static char result[200]; 

    
    for (unsigned i = 0; i < copyN1; i++) {
        result[i] = s1[i];
    }

   
    for (unsigned i = 0; i < copyN2; i++) {
        result[copyN1 + i] = s2[len2 - copyN2 + i];
    }

    
    result[copyN1 + copyN2] = '\0';

    return result; 
}


void example() {
    char s1[] = "aaa";
    unsigned N1 = 4;
    char s2[] = "bbb";
    unsigned N2 = 4;

    char* result = task3(s1, N1, s2, N2);
    printf("Результат: %s\n", result);
}


int main() {
    example(); 
    return 0;
}
