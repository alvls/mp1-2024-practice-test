// Задача 3. Дано целое число N. Не используя функции стандартной библиотеки
// языка С, перевести число в строковое представление в десятичном виде.
char* task3(int N)
{
    int index = 0, isNegative = 0;
    char res[1000000];

    if (N < 0) {
        isNegative = 1;
        N = (-1) * N;
    }
    if (N == 0) res[index++] = '0';
    while (N > 0) {
        res[index++] = (N % 10) + '0';
        N /= 10;
    }
    if (isNegative) res[index++] = '-';
    res[index] = '\0';
    int start = 0;
    int end = index - 1;
    while (start < end) {
        char temp = res[start];
        res[start] = res[end];
        res[end] = temp;
        start++;
        end--;
    }
    return res;
}
