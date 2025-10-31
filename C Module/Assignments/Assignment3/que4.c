#include<stdio.h>

int main()
{
	int n;
	int flag=0;      // simple variable to reduce dependency on i
	printf("Enter the number: ");
	scanf("%d",&n);
	int i=2;        // while loop dosnt allow initialization inside the while...so initialization is outside the loop
	
	while(i<=n/2)     ///optimize as there is no need to chacke all division cases
	                 /// because by simple logic if 4 is divisible by 2 thrn 8 is also didvisible by 2.
	{
		if(n%i==0)
		{
			flag=1;
			break;    //to break the 'if', if condition fails once as there is no need for furthur checking 
		}

		i++;
	}
	
	if(flag==0)
	{
		printf("Prime number");
	}
	else
	{
		printf("Not prime number");
	}
	
}
