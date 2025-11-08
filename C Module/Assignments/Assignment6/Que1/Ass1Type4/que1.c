#include<stdio.h>

int checkEvenOdd(int n)   // Function with parameter and return type
{
    if(n % 2 == 0)
        return 1;   // Even
    else
        return 0;   // Odd
}

int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = checkEvenOdd(num);   // Function call with argument

    if(result == 1)
        printf("Even\n");
    else
        printf("Odd\n");

    return 0;
}

