//void main()            //method 1 
//{
//	int n;
//	printf("Enter size: ");
//	scanf("%d",&n);
//	
//	int i,j;
//	
//	for(i=1;i<=n;i++)
//	{
//		for(j=1;j<=n;j++)
//		{
//			if(j==1 || i==n || i==j ||j==2 && i>2 ||j==3 && i>3)
//			{
//				printf("* ");
//			}
//			else
//			{
//				printf("  ");
//			}
//		}
//		printf("\n");
//	}
//}

//method 2;
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
	
}

