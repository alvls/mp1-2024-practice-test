// Задача 3. Даны: символ ch и строка s. 
// Сформировать новую строку, в которой перед каждым вхождением символа ch 
// в строку s вставлен символ ‘#’.
// Пример: ch = ‘k’, s = “kabckdgkefgk”, ответ: “#kabc#kdg#kefg#k”.
char* task3(char *s, char ch)
{
	size_t l = strlen(s);
	char* t = (char*)malloc(sizeof(char) * strlen(s)*3);
	size_t j = 0;
	size_t i = 0;
	while (s[j] != '\0') 
	{
		if (s[j] == ch)
		{
			t[i] = '#';
			i++;
			t[i] = s[j];
			j++;
			i++;
		}
		else
		{
			t[i] = s[j];
			i++;
			j++;
		}
	}
	t[i] = '\0';
	return t;
}
