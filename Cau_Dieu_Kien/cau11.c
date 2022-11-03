/*Viết chương trình nhập từ bàn phím 3 giá trị là dd, mm, yy
biểu thị là ngày, tháng, năm nào đó; tính và hiển thị giá trị ngày, tháng, năm của ngày hôm sau.*/

#include <stdio.h>
int main()
{
    int d, dm, m, y, songay = -1;
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
        songay = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        songay = 30;
        break;
    case 2:
        if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
        {
            songay = 29;
        }
        else
            songay = 28;
    }
    dm = d + 1;
    if (dm > songay)
    {
        dm = 1;
        m = m + 1;
    }
    if (m > 12)
    {
        m = 1;
        y = y + 1;
    }
    if (songay != -1)
    {
        printf("%02d/%02d/%d", dm, m, y);
    }
}