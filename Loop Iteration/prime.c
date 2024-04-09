#include<stdio.h>
int main()
{
	int num,i,j,isPrime=1;
	printf("Enter the num:");
	scanf("%d",&num);
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			isPrime=0;
			break;
		}
	}
	
	if(isPrime==1 && num>1)
	printf("It is prime yah %d",num);
	else
	printf("It is composite yah %d",num);	

}
