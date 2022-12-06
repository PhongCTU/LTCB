int isPower2(int n)
{
    int k = 0;
    while (pow(2, k) < n)
    {
        k++;
    }
    if (pow(2, k) == n)
    {
        return 1;
    }
    else
        return 0;
}