// Задача 3. Дана строка s.
// Подсчитать количество содержащихся в ней строчных букв английского алфавита.
size_t task3(char *s)
{
	size_t count = 0;
	char first = 'a';
	char last = 'z';
	for (int i = 0; s[i] != '\0'; i++) {
		if (first <= s[i] && s[i] <= last) count++;
	}
	return count;
}
