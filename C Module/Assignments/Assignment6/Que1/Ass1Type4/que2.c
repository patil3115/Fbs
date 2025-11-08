#include<stdio.h>

int checkPalindrome(int n)
{
    int first, last;

    if(n >= 100 && n <= 999)
    {
        first = n / 100;    // First digit
        last = n % 10;      // Last digit

        if(first == last)
            return 1;       // Palindrome
        else
            return 0;       // Not palindrome
    }
    else
    {
        return -1;          // Invalid number
    }
}

int main()
{
    int num, result;

    printf("Enter the number: ");
    scanf("%d", &num);

    result = checkPalindrome(num);

    if(result == 1)
        printf("Palindrome\n");
    else if(result == 0)
        printf("Not a palindrome\n");
    else
        printf("Enter a valid number!!\n");

    return 0;
}

