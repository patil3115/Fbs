#include<stdio.h>

int checkPalindrome();   // declaration

void main()
{
    int result = checkPalindrome();   // function call

    if(result == 1)
        printf("Palindrome");
    else if(result == 0)
        printf("Not a Palindrome");
    else
        printf("Enter a valid 3-digit number!");
}

int checkPalindrome()    // definition
{
    int n, first, last;
    printf("Enter the number: ");
    scanf("%d", &n);

    if(n >= 100 && n <= 999)
    {
        first = n / 100;
        last = n % 10;

        if(first == last)
            return 1;   // palindrome
        else
            return 0;   // not palindrome
    }
    else
    {
        return -1;      // invalid number
    }
}

