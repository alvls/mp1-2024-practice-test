// Задача 2. Дан непустой массив A, содержащий n вещественных чисел.
// Определить количество разных элементов массива.
size_t task2(double A[], size_t n)
{
  size_t count = 0;
  size_t s = 0
  for(size_t i = 0; i<n; i++){
    for(size_t j = i+1; j<n; j++){
        if(A[i] == A[j]){
            count++;
            break;
        }
    }
}
s = N - count;
return s;
}
