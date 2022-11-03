/*Môn lập trình căn bản có 5 bài kiểm tra gồm 1 bài lý thuyết và 4 bài thực hành.
Điểm trung bình của 5 bài kiểm tra này là kết quả của toàn môn học. Nếu điểm trung bình từ 4 điểm
trở lên, sinh viên được gọi là Đạt môn học này; ngược lại thì Không đạt. Viết chương trình cho phép nhập vào
điểm của 5 bài kiểm tra của 1 sinh viên, thông báo là sinh viên này có đạt hay không?

Điểm trung bình = (LT + TH1 + TH2 + TH3 + TH4)/5

Ví dụ:

Nhập vào:

4.5 5 4.5 4 5
In ra:

DAT
Đầu vào:

5 số thực (float) tương ứng với số điểm của 5 bài kiểm tra.
Đầu ra:

In ra DAT nếu điểm trung bình từ 4.0 trở lên.
Ngược lại in ra KHONG DAT*/
#include <stdio.h>
int main()
{
    float a, b, c, d, e, t;
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
    t = (a + b + c + d + e) / 5;
    if (t >= 4)
    {
        printf("DAT");
    }
    else
        printf("KHONG DAT");
    return 0;
}