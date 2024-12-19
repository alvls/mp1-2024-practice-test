// Задача 3. Дана строка s. Подсчитать количество содержащихся в ней цифр.
size_t task3(char *s)
{
  size_t count = 0; 

  for(int i = 0; s[i] != '\0'; i++) {
    if (s[i] >= '0' && s[i] <= '9') {
      count++;
    }
  }

  return count; 
}
