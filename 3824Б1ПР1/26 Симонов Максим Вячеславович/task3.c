// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из цифр,
// содержащихся в исходной строке s.
// Пример: s = "abc1d2e34f56g", ответ: "123456".
char* task3(char* s)
{
	size_t l = 0;
	for (;s[l];l++);
	char* pre_res = (char*)malloc(l+1);
	size_t k = 0;
	for (size_t i=0;i<l;i++)
	{
		if (('0' <= s[i]) && (s[i] <= '9')) { pre_res[k++] = s[i]; }
	}
	pre_res[k] = '\0';
	char* res = (char*)realloc(pre_res, k+1);
	return res;
}
