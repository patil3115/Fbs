#include<stdio.h>

int main()
{
	int no;
	printf("Enter number: ");
	scanf("%d",&no);
	
	printf("\n--- MENU ---\n");
    printf("1. Check Even or Odd\n");
    printf("2. Check Prime or Not\n");
    printf("3. Check Palindrome or Not\n");
    printf("4. Check Positive, Negative or Zero\n");
    printf("5. Reverse the Number\n");
    printf("6. Find Sum of Digits\n\n");
    
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    int i=2;
	int flag=1;
	
	int rem,rev=0,temp=no;
	
    
    if(choice==1)
    {
    	// i> Even or odd
	if(no%2==0)
		printf("Even number \n");
	else 
		printf("Odd number \n");
	}
	
	else if(choice==2)	
	{
		// ii> Prime or not	
//	int i=2;
//	int flag=1;
	
	while(i<=no/2)
	{
		if(no%i==0)
		{
			flag=0;
			break;
		}	
		i++;
	}
	
	if(flag==1)
		printf("Prime \n");
	else
		printf("Not prime \n");
	}
	
	else if(choice==3)
	{
	// iii> Palindrome or not
	
//	int rem,rev=0,temp=no;
	
	while(no>0)
	{
		rem=no%10;
		rev=rev*10+rem;
		no=no/10;
	}
	
	if(rev==temp)
		printf("Palindrome");
	else
		printf("Not palindrome");
	}
		
	else if(choice==4)
	{
		// iv> Positive ,negative or zero
	if(no>0)
		printf("Positive");
	else if(no==0)
		printf("Zero");
	else
		printf("Negative");
	}
		
	else if(choice==5)
	{
		// v> Reverse a number
//	int rev=0,rem;
	
	while(no!=0)
	{
		rem=no%10;
		rev=rev*10+rem;
		no=no/10;
	}
	printf("%d",rev);
	
	}
	
	else if(choice==6)
	{
		// vi> Sum of digits
	
	int sum=0,rem;
	
	while(no>0)
	{
		rem=no%10;
		sum=sum+rem;
		no=no/10;
	}
	
	printf("%d",sum);
	}
	
	
}
