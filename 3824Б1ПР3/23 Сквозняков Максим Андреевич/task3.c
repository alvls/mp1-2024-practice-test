// Задача 3. Дана строка s.
// Подсчитать количество содержащихся в ней заглавных букв английского алфавита.
size_t task3(char *s)
{
  int count = 0;
for (int i = 0; i < strlen(s) + 1; i++)
{
	if (isupper(s[i]))
	{
		count++;
	}
}
return count;
}
