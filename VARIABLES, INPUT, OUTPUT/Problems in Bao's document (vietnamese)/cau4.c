#include <stdio.h>
int main()
{
    char ch;
    float a, b, c, d, e, tb;
    scanf("%c", &ch);
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
    tb = (a + b + c + d + e) / 5;
    printf("%c", ch);
    printf("\nLy thuyet: %.2f", a);
    printf("\nThuc hanh 1: %.2f", b);
    printf("\nThuc hanh 2: %.2f", c);
    printf("\nThuc hanh 3: %.2f", d);
    printf("\nThuc hanh 4: %.2f", e);
    printf("\nTrung binh: %.2f", tb);
    return 0;
}