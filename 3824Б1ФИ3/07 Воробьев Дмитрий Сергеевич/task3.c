// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из 
// заглавных букв английского алфавита, содержащихся в исходной строке s. 
// Пример: s = "aBc1D2e34F56g", ответ: "BDF".
char* task3(char *s)
{
	int len = 0, j = 0;
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (isupper(s[i]))
		{
			len++
		}
	}
	char* res = (char*)malloc((len + 1) * sizeof(char));
	if (res == NULL)
	{
		return NULL;
	}
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (isupper(s[i]))
		{
			res[j++] = s[i];
		}
	}
	res[j] = '\0';
	return res;
}
