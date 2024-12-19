// Задача 3. Дана строка s, состоящая из английских слов, разделенных пробелами
// (одним или несколькими). Скопировать строку s в новую и зашифровать ее,
// заменяя каждую букву на следующую за ней в алфавите 
// (считать, что за ‘z’ следует ‘a’), сохраняя регистр.
#include <iostream>
#include <locale.h>
#include <cctype> // Для функций isalpha, islower, isupper
#include <cstring> // Для работы со строками

char* task3(char* s)
{
   setlocale(LC_ALL, "rus");
  
    // Находим длину строки
    size_t len = strlen(s);

    // Выделяем место для новой строки
    char* encrypted = new char[len + 1];

    // Проходим по каждому символу строки
    for (size_t i = 0; i < len; ++i) {
        char c = s[i];

        // Проверяем, является ли символ буквой
        if (isalpha(c)) {
            // Если символ в нижнем регистре
            if (islower(c)) {
                // Если это 'z', заменить на 'a'
                encrypted[i] = (c == 'z') ? 'a' : c + 1;
            }
            // Если символ в верхнем регистре
            else if (isupper(c)) {
                // Если это 'Z', заменить на 'A'
                encrypted[i] = (c == 'Z') ? 'A' : c + 1;
            }
        }
        else {
            // Если это не буква, оставить без изменений
            encrypted[i] = c;
        }
    }

    // Добавляем нулевой символ в конец строки
    encrypted[len] = '\0';

 std::cout << "Зашифрованная строка: " << encrypted << std::endl;

 delete[] encrypted;
  
    return 0;
}
