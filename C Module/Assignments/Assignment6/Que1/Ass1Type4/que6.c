#include<stdio.h>

int checkCase(char c)
{
    if(c >= 'A' && c <= 'Z')
        return 1;   // Uppercase
    else
        return 0;   // Lowercase
}

int main()
{
    char ch;

    printf("Enter the alphabet: ");
    scanf("%c", &ch);

    if(checkCase(ch))
        printf("Uppercase letter\n");
    else
        printf("Lowercase letter\n");

    return 0;
}

