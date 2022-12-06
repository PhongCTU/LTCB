long long Factorial2(int n)
{
    long long k = 1;
    if (n % 2 == 0)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                k = k * i;
            }
        }
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (i % 2 != 0)
            {
                k = k * i;
            }
        }
    }
    return k;
}
