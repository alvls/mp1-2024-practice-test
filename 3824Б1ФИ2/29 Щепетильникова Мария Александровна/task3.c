// Задача 3. Дана строка s и натуральное число N.
// Сформировать строку ss длины N следующим образом.
// Если длина строки s больше или равна N,
//   то включить в ss N последних символов строки s.
// Если длина строки s меньше N,
//   то включить в ss все символы строки s, добавив перед ними символы '*'.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* task3(char* s, unsigned N) {
    size_t len = strlen(s);
    char* ss = (char*)malloc(N + 1); //Выделяем память для новой строки
    if (ss == NULL) {
        return NULL; 
    }

    if (len >= N) {  // Если s длиннее или равно N, скопировать последние N символов
        strncpy_s(ss, N + 1, s + len - N, N);
    }
    else { // Если s короче, чем N, скопировать s и добавить перед '*'
        for (unsigned i = 0; i < N; i++) {
            if (i < len) {
                ss[i] = s[i]; 
            }
            else {
                ss[i] = '*';
            }
        }
    }
    ss[N] = '\0';
    return ss;
}
