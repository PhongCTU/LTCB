#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'u' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'A' || ch == 'U' || ch == 'I' || ch == 'E' || ch == 'O')
    {
        printf("%c is a vowel.", ch);
    }
    else
        printf("%c is a consonant.", ch);
}