#include <stdio.h>
int main()
{
    int a, b, c, n;
    scanf("%d%d%d%d", &a, &b, &c, &n);
    printf("Ban sinh ngay %02d thang %02d nam %04d. Nam nay, ban %d tuoi.", a, b, c, n - c);
}