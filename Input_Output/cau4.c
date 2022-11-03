/*Môn học Lập trình căn bản được đánh giá với 1 bài thi lý thuyết và 4 bài thi thực hành.
Viết chương trình cho phép nhập vào chữ cái đầu tiên của tên của một sinh viên cùng với điểm
cuối kỳ của các bài thi của người đó (gồm bài lý thuyết và 4 bài thực hành). Hiển thị tên người
đã nhập với các kết quả thi và điểm trung bình của người đó. Điểm trung bình được tính bằng tổng
điểm lý thuyết và thực hành chia cho 5. Các kết quả thi và điểm trung bình được hiển thị với 2 số lẻ phần thập phân.
Ví dụ:
Nhập vào:
K
9.5 8 7 4.5 9
In ra:
K
Ly thuyet: 9.50
Thuc hanh 1: 8.00
Thuc hanh 2: 7.00
Thuc hanh 3: 4.50
Thuc hanh 4: 9.00
Trung binh: 7.60

Đầu vào:
Hàng đầu tiên chứa 1 chữ cái.
Hàng thứ 2 chứa 5 số thực, tương ứng với điểm lý thuyết và điểm của 4 bài thực hành.
Đầu ra:

Dòng đầu tiên in tên (chữ cái đầu tiên của tên)
5 dòng tiếp theo, in điểm của từng bài thi
Dòng cuối cùng in điểm trung bình
Xem mẫu đầu ra ở trên và trong phần "For example".*/

#include <stdio.h>
int main()
{
    char ch;
    float a, b, c, d, e, tb;
    scanf("%c", &ch);
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
    tb = (a + b + c + d + e) / 5;
    printf("%c", ch);
    printf("\nLy thuyet: %.2f", a);
    printf("\nThuc hanh 1: %.2f", b);
    printf("\nThuc hanh 2: %.2f", c);
    printf("\nThuc hanh 3: %.2f", d);
    printf("\nThuc hanh 4: %.2f", e);
    printf("\nTrung binh: %.2f", tb);
    return 0;
}