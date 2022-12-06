#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    float cv, s, p;
    scanf("%f%f%f", &a, &b, &c);
    cv = a + b + c;
    p = cv / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("Chu vi: %.2f\n", cv);
    printf("Dien tich: %.2f", s);
    return 0;
}