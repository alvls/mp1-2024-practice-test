// Задача 3. Даны: символ ch и строка s. 
// Сформировать новую строку, в которой перед каждым вхождением символа ch 
// в строку s вставлен символ ‘#’.
// Пример: ch = ‘k’, s = “kabckdgkefgk”, ответ: “#kabc#kdg#kefg#k”.
char* task3(char *s, char ch)
{
  int len = strlen(s);
int newlen = len;
for (int i = 0; i < len; i++)
{
	if (s[i] == ch)
	{
		newlen++;
	}
}
char* resStr = (char*)malloc(newlen + 1);
int j = 0;
for (int i = 0; i < len; i++)
{
	if (s[i] == ch)
	{
		resStr[j++] = '#';
	}
	resStr[j++] = s[i];
}
resStr[j] = '\0';
return resStr;
}
