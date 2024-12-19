// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из 
// заглавных букв английского алфавита, содержащихся в исходной строке s. 
// Пример: s = "aBc1D2e34F56g", ответ: "BDF".
#include<malloc.h>
char* task3(char* s)
{
	int l = 0, l2 = 0;
	char* s2;
	while (s[l] != '\0') {
		if ((s[l] >= 'A') && (s[l] <= 'Z')) {
			l2++;
		}
		l++;
	}
	s2 = (char*)malloc(sizeof(char) * (l2 + 1));
	l = 0;
	l2 = 0;
	while (s[l] != '\0') {
		if ((s[l] >= 'A') && (s[l] <= 'Z')) {
			s2[l2]=s[l];
      l2++;
		}
		l++;
	}
	return s2;
	char t[5] = { 't','a','s','k','3' };
	return t;
}
