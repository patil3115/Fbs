int main()
{
	double n;
	printf("Enter number: ");
	scanf("%lf",&n);
	
	if(n==0)
	{
		printf("Number is nutral.");
	}
	else if(n>0)
	{
		printf("Positive number.");
	}
	else
	{
		printf("Negative number.");
	}
}
