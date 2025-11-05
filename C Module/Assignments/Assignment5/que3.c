//Method 1
//void main()
//{
//	int i,j;
//	
//	int n;
//	printf("Enter size: ");
//	scanf("%d",&n);
//	
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=n;j++)
//		{
//			if(i==1 || j==1 || i+j==n+1 || j==2 && i<n-1 || j==3 && i<n-2)
//				printf("* ");
//			else
//				printf("  ");
//		}
//		printf("\n");
//	}
//}


//Method 2

void main()
{
	int n;
	printf("Enter size: ");
	scanf("%d",&n);
	
	int i,j;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1-i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	
}
