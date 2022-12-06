#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d;
    scanf("%f%f%f", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d < 0)
    {
        printf("No real roots");
    }
    if (d == 0)
    {
        printf("x = %.2f", -b / (2 * a));
    }
    else if (d > 0)
    {

        printf("x1 = %.2f\n", (-b - sqrt(d)) / (2 * a));
        printf("x2 = %.2f", (-b + sqrt(d)) / (2 * a));
    }
}