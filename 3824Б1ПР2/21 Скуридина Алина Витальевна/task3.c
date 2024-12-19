// Задача 3. Дана строка s. Сформировать новую строку, содержащую те же символы,
// но расположенные в обратном порядке.
char task3(char *s)
{
	int l = 0;
	int r = strlen(s) - 1;
	while (l < r) {
		int d; 
		char temp = s[l];
		s[l] = s[r];
		s[r] = temp;
		l++; r--;
	}
	return s;
}
