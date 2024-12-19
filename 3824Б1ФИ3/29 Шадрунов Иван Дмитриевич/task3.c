// Задача 3. Дана строка s и натуральное число N.
// Сформировать строку ss длины N следующим образом.
// Если длина строки s больше или равна N,
//   то включить в ss N последних символов строки s.
// Если длина строки s меньше N,
//   то включить в ss все символы строки s, добавив перед ними символы '*'.
char task3(char *s, unsigned N)
{
char ss[N + 1];

unsigned int i;

if (strlen(s) >= N) 
{
    strcpy(ss, s + strlen(s) - N); 
}
else 
{
    for (i = 0; i < N - strlen(s); i++)
    {
        ss[i] = ' '; 
    }
    strcpy(ss + N - strlen(s), s); 
}

ss[N] = '\0'; 

return ss; 
}
