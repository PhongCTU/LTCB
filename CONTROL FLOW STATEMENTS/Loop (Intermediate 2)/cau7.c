#include <stdio.h>
int main()
{
    int a, b, p, flat = 0;
    scanf("%d%d%d", &a, &b, &p);
    for (int i = a; i <= b; i++)
    {
        if (p % i == 0)
        {
            flat = 1;
            break;
        }
    }
    if (flat == 1)
    {
        printf("Co it nhat 1 so trong doan [%d, %d] la uoc cua %d.", a, b, p);
    }
    else
        printf("Khong co so nao trong doan [%d, %d] la uoc cua %d.", a, b, p);
    return 0;
}