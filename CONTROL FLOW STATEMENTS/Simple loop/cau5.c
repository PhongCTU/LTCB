#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    printf("##########\n");
    for (int i = 2; i < n; i++)
    {
        printf("#        #\n");
    }
    printf("##########");
}
