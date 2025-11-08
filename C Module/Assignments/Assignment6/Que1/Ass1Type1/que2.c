#include<stdio.h>

void checkPalindrome();   // function declaration

void main()
{
    checkPalindrome();    // function call
}

void checkPalindrome()    // function definition
{
    int n;
    int first, last;

    printf("Enter the number: ");
    scanf("%d", &n);

    if(n >= 100 && n <= 999)
    {
        first = n / 100;   // first digit
        last = n % 10;     // last digit

        if(first == last)
            printf("Palindrome");
        else
            printf("Not a Palindrome");
    }
    else
    {
        printf("Enter a valid 3-digit number!!");
    }
}

