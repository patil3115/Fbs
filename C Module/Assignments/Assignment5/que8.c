void main()
{
	int i,j;
	
	int n;
	printf("Enter size: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
			printf("* ");
			
		printf("\n");
	}
	
	for(i=2;i<=n;i++)
	{
		for(j=1;j<=n+1-i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

