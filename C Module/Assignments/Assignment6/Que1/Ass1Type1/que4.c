#include<stdio.h>

void checkVowel();   // function declaration

void main()
{
    checkVowel();    // function call
}

void checkVowel()    // function definition
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
       c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
        printf("Vowel");
    else
        printf("Consonant");
}

