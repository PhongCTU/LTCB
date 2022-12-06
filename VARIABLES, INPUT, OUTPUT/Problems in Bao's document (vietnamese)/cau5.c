#include <stdio.h>
int main()
{
    char ch;
    float a, b, c, d, e, tb;
    scanf("%c", &ch);
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
    tb = (a + (b + c + d + e) / 4) / 2;
    printf("%c\n", ch);
    printf("Ly thuyet: %.2f\n", a);
    printf("Thuc hanh 1: %.2f\n", b);
    printf("Thuc hanh 2: %.2f\n", c);
    printf("Thuc hanh 3: %.2f\n", d);
    printf("Thuc hanh 4: %.2f\n", e);
    printf("Trung binh: %.2f", tb);
    return 0;
}