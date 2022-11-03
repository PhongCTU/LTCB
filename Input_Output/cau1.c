/*Viết chương trình cho phép nhập vào ngày, tháng, năm sinh của mình. Hiển thị ngày, tháng, năm sinh theo định dạng dd/mm/yyyy
Ví dụ:
Nhập vào: 12 8 1994
In ra: 12/08/1994
Đầu vào: 3 số nguyên dương biểu diễn ngày tháng năm. Hai số cách nhau ít nhất 1 khoảng trắng.
Đầu ra: In ngày tháng năm theo định dạng: dd/mm/yyyy
*/
#include <stdio.h>
int main()
{
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    printf("%02d/%02d/%04d", x, y, z);
    return 0;
}