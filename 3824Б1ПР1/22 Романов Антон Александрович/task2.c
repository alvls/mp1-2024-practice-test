// Задача 2. Дан непустой массив A, содержащий n вещественных чисел.
// Найти индексы k1 и k2 двух элементов массива, 
// расстояние |A[k1] – A[k2]| между которыми минимально.
// Если таких пар в массиве несколько, вернуть пару с наименьшими индексами.
// При невозможности найти пару, вернуть {-1,-1}.
struct Indices
{
  int first_index;
  int second_index;
};
struct Indices task2(double A[], size_t n)
{
    struct Indices indices = { -1, -1 };
    if (n <= 1) {
        return indices;
    }
    double min_razn = (A[0] > A[1]) ? A[0] - A[1] : A[1] - A[0];
    for (size_t i = 0; i < n - 1; i++) {
        for (size_t j = i + 1; j < n; j++) {
            double razn = (A[i] > A[j]) ? A[i] - A[j] : A[j] - A[i];
            if (razn < min_razn) {
                min_razn = razn;
                indices.first_index = i;
                indices.second_index = j;
            }
            else {
                if (razn == min_razn) {
                    if (i < indices.first_index || (i == indices.first_index && j < indices.second_index)) {
                        indices.first_index = i;
                        indices.second_index = j;
                    }
                }
            }
        }
    }
    return indices;
}
