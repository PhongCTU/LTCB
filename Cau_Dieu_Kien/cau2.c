/*Môn lập trình căn bản có 5 bài kiểm tra gồm 1 bài lý thuyết và 4 bài thực hành.
Tổng điểm của 5 bài kiểm tra này là kết quả của toàn môn học. Nếu tổng điểm từ 4 điểm trở lên,
 sinh viên được gọi là Đạt môn học này; ngược lại thì Không đạt. Viết chương trình cho phép nhập vào điểm
 của 5 bài kiểm tra của 1 sinh viên, thông báo là sinh viên này có đạt hay không?

Ví dụ:

Nhập vào:

0.5 1 0.5 1 1
In ra:

DAT
Đầu vào:

5 số thực (float) tương ứng với số điểm của 5 bài kiểm tra.
Đầu ra:

In ra DAT nếu tổng điểm từ 4.0 trở lên.
Ngược lại in ra KHONG DAT*/
#include <stdio.h>
int main()
{
    float a, b, c, d, e, t;
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
    t = a + b + c + d + e;
    if (t >= 4)
    {
        printf("DAT");
    }
    else
        printf("KHONG DAT");
    return 0;
}