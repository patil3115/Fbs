#include<stdio.h>

void checkCase();   // function declaration

void main()
{
    checkCase();    // function call
}

void checkCase()    // function definition
{
    char c;
    printf("Enter the alphabet: ");
    scanf("%c", &c);

    if(c >= 'A' && c <= 'Z')
        printf("Uppercase letter");
    else
        printf("Lowercase letter");
}

