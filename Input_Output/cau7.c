/*Viết chương trình cho phép nhập vào giá trị nhiệt độ Fahrenheit (°F).
Tính giá trị nhiệt độ Celsius (°C) tương ứng.
Công thức chuyển đổi giữa 2 giá trị này là:

ToC=59(ToF−32)

Ví dụ:

Nhập vào:

97
In ra:

97 do F = 36.11 do C
Đầu vào:

1 số nguyên (int) cho biết giá trị nhiệt độ Fahrenheit.
Đầu ra:

In ra giá trị nhiệt độ Celcius (°C) theo mẫu như trên. Làm tròn đến 2 số lẻ sau dấu chấm thập phân.*/

#include <stdio.h>
int main()
{
    int n;
    float t;
    scanf("%d", &n);
    t = ((float)n - 32) * 5 / 9;
    printf("%d do F = %.2f do C", n, t);
    return 0;
}