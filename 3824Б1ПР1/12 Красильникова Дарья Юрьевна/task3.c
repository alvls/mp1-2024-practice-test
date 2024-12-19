// Задача 3. Даны: символ ch и строка s. 
// Сформировать новую строку, в которой все вхождения символа ch в строку s
// удвоены. Пример: ch = ‘g’, s = “abgcdgefgk”, ответ: “abggcdggefggk”.
#include <malloc.h>
char* task3(const char* s, char ch) {
    int len = strlen(s);
    int cnt_ch_in_s = 0;
    for (int i = 0; i < len; i++) {
        if (s[i] == ch)
            cnt_ch_in_s++;
    }

    char* answer = (char*)malloc((len + cnt_ch_in_s + 1) * sizeof(char));

    int j = 0;
    for (int i = 0; i < len; i++) {
        answer[j++] = s[i];
        if (s[i] == ch) {
            answer[j++] = ch;
        }
    }
    answer[j] = '\0';

    return answer;
}
