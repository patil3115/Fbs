#include<stdio.h>

void checkCase(char c);   // declaration

void main()
{
    char ch;
    printf("Enter an alphabet: ");
    scanf(" %c", &ch);   // space before %c to handle newline

    checkCase(ch);   // call with argument
}

void checkCase(char c)   // definition
{
    if(c >= 'A' && c <= 'Z')
        printf("Uppercase Letter");
    else
        printf("Lowercase Letter");
}

