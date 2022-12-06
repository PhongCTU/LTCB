double power(float a, int n)
{
    if (n == 0)
        return 1;
    return power(a, n - 1) * a;
}