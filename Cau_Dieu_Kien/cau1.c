/*Ở nước ta trẻ em từ 6 tuổi trở lên mới có thể vào học lớp 1. Viết chương trình cho phép nhập
 vào tuổi của một đứa trẻ và thông báo là em này có đủ điều kiện học lớp 1 hay không ?

Đầu vào

Một số nguyên t (t >= 0) - tuổi của đứa trẻ.
Đầu ra

Nếu t >= 6, in ra màn hình Tuoi t: Du tuoi vao lop 1.
Ngược lại, in ra Tuoi t: Khong du tuoi vao lop 1.
Chú ý:

Dữ liệu đầu vào luôn đúng, bạn không cần kiểm tra.
Bạn KHÔNG ĐƯỢC sử dụng hàm printf trước hàm scanf.
Xem thêm ví dụ bên dưới.



Gợi ý:

Sử dụng lệnh if hoặc toán tử <điều kiện> ? <giá trị đúng> : <giá trị sai> */

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n >= 6)
    {
        printf("Tuoi %d: Du tuoi vao lop 1.", n);
    }
    else
        printf("Tuoi %d: Khong du tuoi vao lop 1.", n);
}