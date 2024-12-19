// Задача 3. Дана строка s и натуральное число N.
// Сформировать строку ss длины N следующим образом.
// Если длина строки s больше или равна N,
//   то включить в ss N последних символов строки s.
// Если длина строки s меньше N,
//   то включить в ss все символы строки s, добавив перед ними символы '*'.
char* task3(char *s, unsigned N)
{
  int len = strlen(s);
	char* ss = (char*)malloc(sizeof(char) * N);
	if (len >= N) {
		for (int i = len - N, j = 0; j < N; i++, j++) {
			ss[j] = s[i];
		}
	}
	else {
		int j = 0, count = N - len;
		for (int i = 0; i < N; i++) {
			if (count > 0) {
				ss[i] = '*';
				count--;
			}
			else {
				ss[i] = s[j];
				j++;
			}
		}
	}
	ss[N] = '\0';
	return ss;
}
