// Задача 3. Даны: символ ch и строка s. 
// Сформировать новую строку, из которой удалены все вхождения символа ch. 
// Пример: ch = ‘k’, s = “kabckdgkefgk”, ответ: “abcdgefg”.
char* task3(char* s, char ch){

    int len = strlen(s), j = 0;
    char* new = (char*)malloc(len + 1); 

    if (new == NULL) {
        return NULL; 

    }
    for (int i = 0; i < len; i++) {

        if (s[i] != ch) {

            new[j] = s[i];

            j++;
        }
    }
    new[j] = '\0'; 

    return new;
}
