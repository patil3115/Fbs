#include<stdio.h>

int checkVowel();   // declaration

void main()
{
    int result = checkVowel();   // function call

    if(result == 1)
        printf("Vowel");
    else
        printf("Consonant");
}

int checkVowel()    // definition
{
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);

    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
       c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
        return 1;  // vowel
    else
        return 0;  // consonant
}

