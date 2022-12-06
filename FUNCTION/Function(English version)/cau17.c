void PrintN(int n)
{
    if (n == 0)
        ;
    else
    {
        printf("%d\n", n);
        PrintN(n - 1);
    }
}