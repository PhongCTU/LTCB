void printPrimeNumbers(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        if (isPrime(i) == 1)
        {
            printf("%d ", i);
        }
    }
}