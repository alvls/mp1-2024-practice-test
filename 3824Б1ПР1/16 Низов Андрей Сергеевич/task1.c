// Задача 1. Дан непустой массив A из N элементов.
// Найти количество элементов, расположенных между первым максимальным
// и последним минимальным элементами.
int task1(unsigned A[], size_t N)
{
  if (N < 2)
    return 0;
  int first_max_pos = 0;
  int last_min_pos = 0;
  unsigned max_val = A[0];
  for (size_t i = 1; i < N; i++)
  {
    if (A[i] > max_val)
    {
        max_val = A[i];
        first_max_pos = i;
    }
  }
  unsigned min_val = A[0];
  for (size_t i = 1; i < N; i++)
  {
    if (A[i] <= min_val)
    {
      min_val = A[i];
      last_min_pos = i;
    }
  }
  int start_pos = first_max_pos < last_min_pos ? first_max_pos + 1 : last_min_pos + 1;
  int end_pos = first_max_pos < last_min_pos ? last_min_pos - 1 : first_max_pos - 1;
  int count = end_pos - start_pos + 1;
  return count < 0 ? 0 : count;
}
