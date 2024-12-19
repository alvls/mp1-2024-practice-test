// Задача 3. Дана строка s, состоящая из английских слов, разделенных пробелами
// (одним или несколькими). Определить количество слов в строке.
int task3(char* s) {
    int word_count = 0;
    int in_word = 0;
    while (*s != '\0') {
        if (*s != ' ') {
            if (in_word == 0) {
                word_count++;
                in_word = 1; 
            }
        }
        else {
            in_word = 0;
        }
        s++;
    }
    return word_count; 
}
