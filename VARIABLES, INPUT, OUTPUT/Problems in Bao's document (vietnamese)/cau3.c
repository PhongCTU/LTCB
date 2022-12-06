#include <stdio.h>
#include <time.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    struct tm ts;
    time_t now;
    int year;

    now = time(0);
    ts = *localtime(&now);
    year = ts.tm_year + 1900;
    printf("Ban sinh ngay %02d thang %02d nam %04d. Nam nay, ban %d tuoi.", a, b, c, year - c - 2);
    return 0;
}