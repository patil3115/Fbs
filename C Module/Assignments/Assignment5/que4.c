void main()  
{
	int i,j,k;
	
	int n;
	printf("Enter size: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n+1-i;k++)
		{
			printf(" ");
		}
		
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
