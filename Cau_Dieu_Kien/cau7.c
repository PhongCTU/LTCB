/*Phương trình bậc hai là phương trình có dạng: ax2+bx+c=0 với a≠0.

Tính Δ=b2−4ac
Nếu Δ < 0, phương trình vô nghiệm
Nếu Δ = 0, phương trình có 1 nghiệm kép x=−b2a
Nếu Δ > 0, phương trình có 2 nghiệm phân biệt
x=−b−Δ√2a
x=−b+Δ√2a

Viết chương trình cho phép nhập từ bàn phím 3 số thực a, b và c là các
hệ số của phương trình bậc 2. Biện luận các trường hợp có thể có
của a, b, c để tìm nghiệm của phương trình.*/

#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, d;
    scanf("%f%f%f", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d < 0)
    {
        printf("VO NGHIEM");
    }
    if (d == 0)
    {
        printf("NGHIEM KEP\n");
        printf("x = %.2f", -b / (2 * a));
    }
    else if (d > 0)
    {

        printf("NGHIEM PHAN BIET\n");
        printf("x1 = %.2f\n", (-b - sqrt(d)) / (2 * a));
        printf("x2 = %.2f", (-b + sqrt(d)) / (2 * a));
    }
}
