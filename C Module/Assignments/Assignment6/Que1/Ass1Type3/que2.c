#include<stdio.h>

void checkPalindrome(int n);   // declaration

void main()
{
    int num;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    checkPalindrome(num);   // call with argument
}

void checkPalindrome(int n)   // definition
{
    int first, last;

    if(n >= 100 && n <= 999)
    {
        first = n / 100;
        last = n % 10;

        if(first == last)
            printf("Palindrome");
        else
            printf("Not a Palindrome");
    }
    else
    {
        printf("Enter a valid 3-digit number!");
    }
}

