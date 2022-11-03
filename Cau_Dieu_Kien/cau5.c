/*Có 3 vận động viên (VĐV) tham gia chạy ngắn 100m để chọn người thi đấu giải quốc gia.
VĐV có thành tích tốt nhất sẽ được thi đấu quốc gia, VĐV có thành tích thấp nhất sẽ xuống tập
với đội trẻ; người còn lại thì vẫn ở lại đội tuyển tỉnh.

Viết chương trình cho phép nhập vào thành tích thi đấu (theo giây, ví dụ: 12.5) của 3 VĐV. Yêu cầu:

1. Tìm thành tích thi đấu tốt nhất, thành tích thi đấu thấp nhất của 3 VĐV.

2. VĐV nào được thi đấu quốc gia? VĐV nào xuống tập với đội trẻ?*/

#include <stdio.h>
int main()
{
    float a, b, c, min, max;
    scanf("%f%f%f", &a, &b, &c);
    min = 0;
    if (a < b && a < c)
    {
        min = a;
    }
    else if (b < a && b < c)
    {
        min = b;
    }
    else if (c < a && c < b)
    {
        min = c;
    }
    printf("Thanh tich tot nhat: %.1f giay\n", min);

    max = 0;
    if (a > b && a > c)
    {
        max = a;
    }
    else if (b > a && b > c)
    {
        max = b;
    }
    else if (c > a && c > b)
    {
        max = c;
    }
    printf("Thanh tich thap nhat: %.1f giay\n", max);

    if (a < b && a < c)
    {
        printf("VDV thi dau quoc gia: 1");
    }
    else if (b < a && b < c)
    {
        printf("VDV thi dau quoc gia: 2");
    }
    else if (c < a && c < b)
    {
        printf("VDV thi dau quoc gia: 3");
    }
    if (a > b && a > c)
    {
        printf("\nVDV xuong voi doi tre: 1");
    }
    else if (b > a && b > c)
    {
        printf("\nVDV xuong voi doi tre: 2");
    }
    else if (c > a && c > b)
    {
        printf("\nVDV xuong voi doi tre: 3");
    }
}