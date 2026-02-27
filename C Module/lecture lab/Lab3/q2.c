void main()
{
	int no=12345;
	int rem,sum=0;
	
	while(no>0)
	{
		rem=no%10;
		sum=sum+rem;
		no=no/10;
	}
	
	printf("Sum: %d",sum);
}
