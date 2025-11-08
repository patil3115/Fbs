#include<stdio.h>

int isVowel(char c)
{
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'|| 
       c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        return 1;
    else
        return 0;
}

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if(isVowel(ch))
        printf("Vowel\n");
    else
        printf("Consonant\n");

    return 0;
}

