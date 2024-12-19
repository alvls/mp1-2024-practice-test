// Задача 3. Дана строка s. Сформировать новую строку, содержащую те же символы,
// но расположенные в обратном порядке.
char* task3(char* s) {

 int li = -1, k = 0;
 for (int i = 0; s[i] != '\0'; i++) li++;
 char* res = (char*)malloc(sizeof(char) * (li + 2));
 for (int i = li; i > -1; i--) {
  res[k] = s[i];
  k++;
 }
 res[li + 1] = '\0';
 for (int i = 0; res[i] != '\0'; i++) s[i] = res[i];
 free(res);
 return s;
}
