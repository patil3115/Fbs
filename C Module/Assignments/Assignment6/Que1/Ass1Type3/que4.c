#include<stdio.h>

void checkVowel(char c);   // declaration

void main()
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);   // space before %c to handle newline

    checkVowel(ch);   // call with argument
}

void checkVowel(char c)   // definition
{
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
       c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
        printf("Vowel");
    else
        printf("Consonant");
}

