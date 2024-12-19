// Задача 3. Дано целое число N. Не используя функции стандартной библиотеки
// языка С, перевести число в строковое представление в десятичном виде.
#include <stdio.h>

char* task3(int N)
{

	char tmp[50];
	int i = 0;

	bool tr = N < 0;

	unsigned int n1 = tr ? -N : N;

	while (n1 != 0)
	{
		tmp[i++] = n1 % 10 + '0';
		n1 = n1 / 10;
	}

	if (tr)
		tmp[i++] = '-';

	tmp[i] = '\0';

	for (int j = 0, k = i - 1; j < k; ++j, --k) {
		char temp = tmp[j];
		tmp[j] = tmp[k];
		tmp[k] = temp;
	}

	if (N == 0)
	{
		tmp[0] = '0';
		tmp[1] = '\0';
	}
	return tmp;
	

}
