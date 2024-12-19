// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из 
// заглавных букв английского алфавита, содержащихся в исходной строке s. 
// Пример: s = "aBc1D2e34F56g", ответ: "BDF".
#include <stddef.h>
char* task3(char *s) 
{ 
    size_t n = 0; 
    while (s[n] != '\0') { 
        ++n; 
    } 
     
    static char res[100]; 
    size_t j = 0; 
 
    for (size_t i = 0; i < n; ++i) 
    { 
        if (s[i] >= 'A' && s[i] <= 'Z') 
        { 
            res[j++] = s[i]; 
        } 
    } 
 
    res[j] = '\0'; 
    return res; 
}
