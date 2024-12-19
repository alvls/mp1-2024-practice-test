// Задача 3. Дана строка s. Сформировать новую строку, содержащую те же символы,
// но расположенные в обратном порядке.
#include <string.h>
#include <stdlib.h>
char* task3(char* s) {
    if (!s) {
        return NULL;
    }

    size_t len = strlen(s);
    char* reversed = (char*)malloc((len + 1) * sizeof(char));
    if (!reversed) {
        return NULL;
    }

    for (size_t i = 0; i < len; ++i) {
        reversed[i] = s[len - 1 - i];
    }
    reversed[len] = '\0';

    return reversed;
}
void main(){

}
