// Задача 3. Дана строка s, состоящая из английских слов, разделенных пробелами
// (одним или несколькими). Скопировать строку s в новую и зашифровать ее,
// заменяя каждую букву на следующую за ней в алфавите 
// (считать, что за ‘z’ следует ‘a’), сохраняя регистр.
char* task3(char *s) {
    int length = strlen(s);
    char *encrypted = (char *)malloc((length + 1) * sizeof(char));
    if (encrypted == NULL) {
        return NULL; 
    }
    for (int i = 0; i < length; i++) {
        char currentChar = s[i];
        if (currentChar >= 'a' && currentChar <= 'z') {
            encrypted[i] = (currentChar == 'z') ? 'a' : currentChar + 1;
        } else if (currentChar >= 'A' && currentChar <= 'Z') {
            encrypted[i] = (currentChar == 'Z') ? 'A' : currentChar + 1;
        } else {
            encrypted[i] = currentChar;
        }
    }
    encrypted[length] = '\0';
    return encrypted;
}
