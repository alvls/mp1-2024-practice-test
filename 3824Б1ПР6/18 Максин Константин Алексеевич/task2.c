// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Назовем «серией» группу подряд идущих одинаковых элементов, 
// а длиной серии – количество этих элементов (длина серии может быть равна 2).
// Заменить элементы во всех сериях длины 3 на число 0.
void task2(unsigned A[], size_t n)
{
    // Итерируем по массиву
    for (size_t i = 0; i < n - 2; ++i) {
        // Проверяем, что текущие три элемента одинаковые
        if (A[i] == A[i+1] && A[i] == A[i+2]) {
            // Заменяем эти три элемента на 0
            A[i] = A[i+1] = A[i+2] = 0;
            // Пропускаем два следующих элемента, так как они уже обработаны
            i += 2;
        }
    }
}
