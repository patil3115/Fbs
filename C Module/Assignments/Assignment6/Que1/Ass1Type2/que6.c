#include<stdio.h>

int checkCase();   // declaration

void main()
{
    int result = checkCase();   // function call

    if(result == 1)
        printf("Uppercase Letter");
    else
        printf("Lowercase Letter");
}

int checkCase()    // definition
{
    char c;
    printf("Enter an alphabet: ");
    scanf("%c", &c);

    if(c >= 'A' && c <= 'Z')
        return 1;   // uppercase
    else
        return 0;   // lowercase
}

