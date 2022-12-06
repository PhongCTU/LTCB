void Move(int n, char A, char B, char C)
{
    if (n == 1)
    {
        printf("%c -> %c", A, C);
        return;
    }

    Move(n - 1, A, C, B);
    printf("\n");
    Move(1, A, B, C);
    printf("\n");
    Move(n - 1, B, A, C);
}