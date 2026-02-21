void main(){
	float s1,s2,s3,s4,s5,total,per;
	
	printf("Enter subject 1 marks: ");
	scanf("%f",&s1);
	
	printf("Enter subject 2 marks: ");
	scanf("%f",&s2);
	
	printf("Enter subject 3 marks: ");
	scanf("%f",&s3);
	
	printf("Enter subject 4 marks: ");
	scanf("%f",&s4);
	
	printf("Enter subject 5 marks: ");
	scanf("%f",&s5);
	
	total=s1+s2+s3+s4+s5;
	printf("Total marks: %f \n",total);
	
	per=total/5;
	printf("percentage: %f",per);
}
