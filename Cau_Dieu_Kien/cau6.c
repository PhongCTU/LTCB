/*Phương trình bậc nhất là phương trình có dạng:

ax + b = 0

Trường hợp a = 0

Nếu b = 0, phương trình có vô số nghiệm
Ngược lại, phương trình vô nghiệm
Trường hợp a != 0, phương trình có 1 nghiệm duy nhất:

x = -b/a
Viết chương trình cho phép nhập từ bàn phím 2 số thực a, b biểu diễn là các hệ số của
phương trình bậc 1. Biện luận các trường hợp có thể có của a, b để tìm nghiệm của phương trình.*/

#include <stdio.h>
int main()
{
    float a, b;
    scanf("%f%f", &a, &b);
    if (a == 0)
    {
        if (b == 0)
        {
            printf("VO SO NGHIEM");
        }
        else
            printf("VO NGHIEM");
    }
    else
        printf("x = %.1f", -b / a);
}