// Задача 1. Дан непустой массив A из N элементов.
// Найти номер последнего экстремального (минимального или максимального) 
// элемента в нем.
#include <stdio.h>
#include <stdlib.h>

int task1(unsigned A[], size_t N)
{
  int i, n, ni, min, max, minn, maxn;
printf("N:");
scanf_s("%i", &n);
for (i = 1; i <= n; ++i) {
    printf("%i>", i);
    scanf_s("%i", &ni);
    if ((i == 1) || (ni < min)) {
        min = ni; minn = i;
    }
    if ((i == 1) || (ni > max)) {
        max = ni; maxn = i;
    }
}

return 0;
}
