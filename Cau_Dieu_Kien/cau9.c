/*Viết chương trình nhập từ bàn phím 2 giá trị là tháng m và năm y nào đó; cho biết là vào tháng năm đó có bao nhiêu ngày.

Các tháng có 31 ngày: tháng 1, 3, 5, 7, 8, 10, 12
Các tháng có 30 ngày: tháng 4, 6, 9, 11
Tháng 2 có 28 hoặc 29 ngày.

Ví dụ:

Nhập vào: 11 2011
In ra: Thang 11 nam 2011 co 30 ngay.*/

#include <stdio.h>
int main()
{
    int m, y, n;
    scanf("%d%d", &m, &y);
    if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
    {
        n = 31;
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        n = 30;
    }
    else if (m == 2)
    {
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
        {
            n = 29;
        }
        else
            n = 28;
    }
    printf("Thang %d nam %d co %d ngay.", m, y, n);
}