// Задача 3. Дана строка s и натуральное число N.
// Сформировать строку ss длины N следующим образом.
// Если длина строки s больше или равна N,
//   то включить в ss N первых символов строки s.
// Если длина строки s меньше N,
//   то включить в ss все символы строки s, добавив после них символы '&'.
char* task3(char *s, unsigned N)
{
  	char* ss = (char*)malloc(N * sizeof(char));
	int len = strlen(s);
	if (len >= N) {
		strncpy(ss, s, N); 
		ss[N] = '\0';
	}
	else {
		strcpy(ss, s); 
		for (int i = len+1; i < N; i++) {
			ss[i] = '&'; 
		}
		ss[N] = '\0'; 
	}
	return ss;
}
