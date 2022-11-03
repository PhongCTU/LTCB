/*Viết chương trình cho phép nhập vào đường kính của 1 hình tròn. Tính chu vi và diện tích của hình tròn đó.
Ví dụ:
Nhập vào: 3
In ra:
Chu vi: 9.42
Dien tich: 7.07
Quy ước: sử dụng pi = 3.14

Đầu vào: 1 số thực (float) mô tả đường kính hình tròn.
Đầu ra: In ra chu vi và diện tích của hình tròn theo mẫu như ví dụ trên. Làm tròn đến 2 số lẻ sau dấu chấm thập phân.
Chu vi: xx.xx
Dien tich: yyy.yy*/

#include <stdio.h>
int main()
{
    float d;
    scanf("%f", &d);
    float cv, s;
    cv = 2 * 3.14 * d / 2;
    s = d * d * 3.14 / 4;
    printf("Chu vi: %.2f\n", cv);
    printf("Dien tich: %.2f", s);
    return 0;
}