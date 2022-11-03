/*Viết chương trình nhập từ bàn phím 3 giá trị là d, m, y biểu thị là ngày,
 tháng,năm nào đó; kiểm tra xem các giá trị này có biểu diễn hợp lệ 1 giá trị
 ngày hay không? Nếu hợp lệ, kết quả là YES, nếu không kết quả là NO.

Năm hợp lệ: 1, 2, ....
Tháng hợp lệ: 1, 2, ..., 12
Ngày hợp lệ: tuỳ theo tháng, năm.  Tháng 2 của năm thường có 28 ngày, năm nhuận có 29 ngày.*/

#include <stdio.h>
int main()
{
    int d, m, y, D;
    scanf("%d%d%d", &d, &m, &y);
    switch (m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        D = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        D = 30;
        break;
    case 2:
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
        {
            D = 29;
            break;
        }
        else
            D = 28;
    }
    if (y > 1)
    {
        if (m >= 1 && m <= 12)
        {
            if (d >= 1 && d <= D)
            {
                printf("YES");
            }
            else
                printf("NO");
        }
    }
}