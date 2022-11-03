/*
Viết chương trình cho phép nhập vào giá trị nhiệt độ Celsius (°C). Tính giá trị nhiệt độ Fahrenheit (°F) tương ứng.
Ví dụ:
Nhập vào: 37
In ra: 37 do C = 98.6 do F
Đầu vào: 1 số nguyên (int) cho biết giá trị nhiệt độ Celcius.
Đầu ra: In ra giá trị nhiệt độ Fahrenheit (°F) theo mẫu như trên. Làm tròn đến 1 số lẻ sau dấu chấm thập phân.
*/
#include <stdio.h>
int main()
{
    int n;
    float t;
    scanf("%d", &n);
    t = 32 + (float)n * 9 / 5;
    printf("%d do C = %.1f do F", n, t);
    return 0;
}