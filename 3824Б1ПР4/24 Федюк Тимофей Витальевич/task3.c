// Задача 3. Дана строка s.
// Подсчитать количество содержащихся в ней строчных букв английского алфавита.
#include <stdio.h>

int letters_counter(const char* s) {
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            count++;
        }
    }
    return count;
}
size_t task3(char* s);
{
   char task3[] = "";
   printf("task3[]: %d\n", letters_counter(task3));
   return -1;
}
