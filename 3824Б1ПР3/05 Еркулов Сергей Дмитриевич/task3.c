// Задача 3. Дано целое число N. Не используя функции стандартной библиотеки
// языка С, перевести число в строковое представление в десятичном виде.
char* task3(int N) {
    static char str[20];
    size_t index = 0;
    if (N == 0) {
        str[index++] = '0';
        str[index] = '\0';
        return str;
    }
    int isNegative = 0;
    if (N < 0) {
        isNegative = 1;
        N = -N;
    }
    while (N > 0) {
        int digit = N % 10;
        str[index++] = digit + '0';
        N /= 10;
    }
    if (isNegative) {
        str[index++] = '-';
    }
    str[index] = '\0';
    size_t start = 0;
    size_t end = index - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    return str;
}
