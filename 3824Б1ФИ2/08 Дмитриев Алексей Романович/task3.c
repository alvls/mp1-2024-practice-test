#include <stdlib.h>
// Задача 3. Дана строка s. Сформировать новую строку, состоящую только из 
// строчных букв английского алфавита, содержащихся в исходной строке s. 
// Пример: s = "aBc1D2e34F56g", ответ: "aceg".
char* task3(char *s)
{
  size_t size = 1;
  char* new_str = calloc(size, sizeof(char));
  size_t i = 0;
  size_t j = 0;
  while(s[i] != '\0'){
    if(s[i] >= 'a' && s[i] <='z'){
      if (j + 1 == size){
        size *= 2;
        new_str = realloc(new_str, size*sizeof(char));
      }
      new_str[j] = s[i];
      j++;
    }
  }
  char* temp = calloc(j+1, sizeof(char));
  
  for(size_t k = 0; k < j+1; k++){
    temp[k] = new_str[k];
  }
  temp[j] = '\0';
  free(new_str);
  return temp;
}