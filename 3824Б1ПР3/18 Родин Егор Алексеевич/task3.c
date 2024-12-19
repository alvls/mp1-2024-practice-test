#include <ctype.h>
int task3(char* s)
{
    int min_length = -1; //переменная для хранения длины самого короткого слова
    int current_length = 0; //текущая длина слова

    while (*s)
    {
        if (!isspace(*s)) //если текущий символ не пробел
        {
            current_length++; //увеличиваем длину текущего слова
        }
        else if (current_length > 0) 
        {
            if (min_length == -1 || current_length < min_length)
                min_length = current_length; //обновляем минимальную длину
            current_length = 0;
        }
        s++;
    }
    if (current_length > 0 && (min_length == -1 || current_length < min_length)) //проверка на последнее слово
        min_length = current_length;
    return min_length;
}
