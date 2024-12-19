// Задача 1. Дан непустой массив A, содержащий n целых чисел, среди которых
// не менее двух нулей. Найти сумму элементов, расположенных между первыми
// двумя нулями.
int task1(int A[], int n) { 
    if (n <= 0) { 
        return -1; 
    } 
 
    int FirstZero = -1; 
    int SecondZero = -1; 
 
    for (int i = 0; i < n; ++i) { 
        if (A[i] == 0) { 
            if (FirstZero == -1) { 
                FirstZero = i; 
            } else { 
                SecondZero = i; 
                break; 
            } 
        } 
    } 
 
    if (FirstZero != -1 && SecondZero != -1) { 
        int sum = 0; 
        for (int i = FirstZero + 1; i < SecondZero; ++i) { 
            sum += A[i]; 
        } 
        return sum; 
    } 
 
    return -1; 
}
