void main()  
{
	int i,j,k;
	
	int n;
	printf("Enter size: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=i;k++)
		{
			printf(" ");
		}
		
		for(j=1;j<=n+1-i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
