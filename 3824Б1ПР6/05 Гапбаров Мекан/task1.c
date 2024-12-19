// Задача 1. Дан непустой массив A, содержащий n целых чисел.
// Найти сколько чисел в массиве меньше своего левого соседа.
size_t task1(int A[], size_t n)
{
  int n;

  printf("enter" num massive);
  scanf_s("%d", &n);

  if (n <= 1) {
    printf("massive must be 2 elements/\n");
    return 1;
  }
  int arr [n];

  printf("enter massive elements: \n");
  for (int i = 0; i < n; i++); {
    scanf_s("%d", &arr[i]);
  }
  int count = 0;

  for(int i = 0; i < n; i++) {
    if (arr[i] < arr[i - 1]) {
      count++;
    }
  }
  printf("kolichtstvo chistl, kotorye menshe levogo soseda: %d\n", count);
  
  return -1;
}
