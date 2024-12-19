// Задача 3. Дана строка s, состоящая из английских слов, разделенных пробелами
// (одним или несколькими). Определить количество слов, 
// которые начинаются и заканчиваются одной и той же буквой. 
int task3(char* s)
{
	int i = 1;

	int counter = 0;

	char first_letter = '/';
	char last_letter = ' ';
	if (s[i - 1] != ' ') {
		first_letter = s[i - 1];
	}

	while (s[i] != '\0') {
		if (s[i] == ' ') {
			last_letter = s[i - 1];
			if (first_letter == last_letter) {
				counter += 1;
			}
			first_letter = '/';
		}
		if (first_letter == '/' && s[i] != ' ') {
			first_letter = s[i];
		}
		i++;
	}
	if (s[i] == '\0') {
		last_letter = s[i - 1];
	}
	if (first_letter == last_letter) {
		counter += 1;
	}

	return counter;
}
