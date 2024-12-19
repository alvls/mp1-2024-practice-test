// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Найти значение максимального из его локальных максимумов.
// Локальный максимум – элемент, который >= левого и правого соседей.
// При отсутствии локальных максимумов вернуть -1.
long long task2(unsigned A[], size_t n)
{
   if (n < 3) {
     return -1;
 }
 long long max_local_max = -1;
 if (A[0] >= A[1]) {
     max_local_max = A[0];
 }

 for (size_t i = 1; i < n - 1; i++) {
     if (A[i] >= A[i - 1] && A[i] >= A[i + 1]) {
         if (A[i] > max_local_max) {
             max_local_max = A[i];
         }
     }
 }
 if (A[n - 1] >= A[n - 2]) {
     if (A[n - 1] > max_local_max) {
         max_local_max = A[n - 1];
     }
 }
 return max_local_max;
}
