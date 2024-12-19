int task1(double A[], size_t n)
{
    int k = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (A[i] <= A[i + 1]) k++;
    }
    if (k == n - 1) return 1;
    else return 0;
}
