int countPrimeNumbers(int a, int b)
{
    int i, dem = 0;
    for (i = a; i <= b; i++)
    {
        if (isPrime(i) == 1)
        {
            dem++;
        }
    }
    return dem;
}