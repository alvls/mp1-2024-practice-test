#include <stdlib.h>
#include <string.h>
// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из 
// заглавных букв английского алфавита, содержащихся в исходной строке s. 
// Пример: s = "aBc1D2e34F56g", ответ: "BDF".
char* task3(char* s)
{
    size_t size = strlen(s);
    char* result = (char*)malloc(sizeof(char) * (size + 1));
    size_t index = 0;

    for (size_t i = 0; i < size; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') {
            result[index] = s[i];
            index++;
        }
    }

    result[index] = '\0';

    return result;
}
