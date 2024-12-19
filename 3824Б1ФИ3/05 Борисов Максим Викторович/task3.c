// Задача 3. Дано целое число N. Не используя функции стандартной библиотеки
// языка С, перевести число в строковое представление в десятичном виде.
char* task3(int N)
{
  
    if (N < 0) {
        otr = 1;
    }
    int temp = N;
    if (otr) {
        temp = -1 * N;
    }
    int len = 0;
    do {
        temp /= 10;
        len++;
    } while (temp > 0);
    if (otr) {
        len++;
    }
    char* result = (char*)malloc(len + 1);
    if (result == NULL) {
        return NULL; 
    }
    result[len] = '\0';
    temp = N;
    if (otr) {
        temp = -1 * N;
    }
    for (int i = len - 1; i >= 0; i--) {
        if (otr && i == 0) {
            result[i] = '-';
        } else {
            result[i] = (temp % 10) + '0'; 
            temp /= 10;                  
        }
    }

    return result;
}  
