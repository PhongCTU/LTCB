/*Năm bình thường có 365 ngày nhưng năm nhuận lại có 356 ngày. Ngày dư ra này được thêm vào tháng hai,
 vì thế tháng hai của năm nhuận sẽ có 29 ngày (thay vì 28 ngày như năm thường).
Quy tắc xác định năm nhuận như thế này. Năm chia hết cho 4 là năm nhuận (ví dụ: 2008, 1904, 1912, ...)
ngoại trừ những năm đầu thế kỷ có cách tính riêng. Năm đầu thế kỷ là năm chia hết cho 100 (ví dụ: 1900, 2000, ...)

Để xác định năm nhuận đối với những năm đầu thế kỷ, ta xét:
Nếu năm đó chia hết cho 400 thì đó là năm nhuận
Nếu năm đó không chia hết cho 400 thì đó là năm thường.
Viết chương trình cho phép nhập vào một năm và cho biết năm đó là năm nhuận hay năm thường.*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
    {
        printf("%d la nam nhuan.", n);
    }
    else
        printf("%d la nam thuong.", n);
}