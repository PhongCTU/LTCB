int checkPrime(long long p)
{
    int i;
    if (p < 2)
        return 0;
    for (i = 2; i <= sqrt(p); i++)
        if (p % i == 0)
            return 0;
    return 1;
}