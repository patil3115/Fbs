void main(){
	int a=10,b=20,c;
	printf("before: a=%d, b=%d \n",a,b);
	
	c=a;  //c=10
	a=b;  //a=20
	b=c;  //b=10
	
	printf("after: a=%d, b=%d",a,b);
}
