int isSquareNumber(int n)
{
    int r = sqrt(n);
    if (r * r == n)
        return 1;
    return 0;
}