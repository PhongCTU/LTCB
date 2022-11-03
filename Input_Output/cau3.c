/*Viết chương trình cho phép nhập vào vào ngày, tháng, năm sinh của mình. Tính số tuổi của mình và in ra màn hình theo mẫu.
Ví dụ:
Nhập vào: 12 8 2001
In ra: Ban sinh ngay 12 thang 08 nam 2001. Nam nay, ban 18 tuoi.
Giải thích: Năm nay là năm 2019. Bạn sinh năm 1994. Vì thế bạn 2019 - 2001 = 18 tuổi.
Đầu vào: 3 số nguyên dương tương ứng ngày, tháng, năm sinh của bạn. Các số cách nhau ít nhất 1 khoảng trắng hoặc xuống dòng.
Đầu ra:In ngày sinh và tuổi của bạn theo mẫu:
*/

#include <stdio.h>
#include <time.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    struct tm ts;
    time_t now;
    int year;

    now = time(0);
    ts = *localtime(&now);
    year = ts.tm_year + 1900;
    printf("Ban sinh ngay %02d thang %02d nam %04d. Nam nay, ban %d tuoi.", a, b, c, year - c - 1);
    return 0;
}