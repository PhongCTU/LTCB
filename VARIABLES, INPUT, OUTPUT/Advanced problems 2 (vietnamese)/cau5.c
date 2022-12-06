#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    float s;
    scanf("%d", &n);
    s = ((float)n * (float)n * sqrt(3)) / 4;
    printf("Area of equilateral triangle = %.2f.", s);
}