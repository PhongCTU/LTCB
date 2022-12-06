int NumDigits(int n)
{
    if (n < 10 && n > -10)
        return 1;
    return 1 + NumDigits(n / 10);
}