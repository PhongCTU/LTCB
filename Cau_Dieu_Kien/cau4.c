/*Môn lập trình căn bản có 5 bài kiểm tra gồm 1 bài lý thuyết và 4 bài thực hành.
 Điểm trung bình của 5 bài kiểm tra này là kết quả của toàn môn học.Điểm trung bình = (LT + TH1 + TH2 + TH3 + TH4)/5
Viết chương trình cho phép nhập vào điểm của 5 bài kiểm tra của 1 sinh viên, tính điểm trung bình, quy đổi sang điểm chữ
 (A, B, C, ...) của sinh viên này. Quy tắc chuyển đổi điểm chữ thành điểm số được cho trong bản bên dưới:*/

#include <stdio.h>
int main()
{
    float a, b, c, d, e, t;
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
    t = (a + b + c + d + e) / 5;
    printf("Diem so: %.1f\n", t);
    if (t >= 9.0)
    {
        printf("Diem chu: A");
    }
    else if (t < 9.0 && t >= 8.0)
    {
        printf("Diem chu: B+");
    }
    else if (t < 8.0 && t >= 7.0)
    {
        printf("Diem chu: B");
    }
    else if (t < 7.0 && t >= 6.0)
    {
        printf("Diem chu: C+");
    }
    else if (t >= 5.0 && t < 6.0)
    {
        printf("Diem chu: C");
    }
    else if (t >= 4.5 && t < 5.0)
    {
        printf("Diem chu: D+");
    }
    else if (t >= 4 && t < 4.5)
    {
        printf("Diem chu: D");
    }
    else
        printf("Diem chu: F");
    return 0;
}