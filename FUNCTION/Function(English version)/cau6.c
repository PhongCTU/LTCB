int is_leap_year(int n)
{
    if ((n % 4 == 0 && n % 100 != 0) || n % 400 == 0)
        return 1;
    return 0;
}