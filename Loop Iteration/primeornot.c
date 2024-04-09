#include<stdio.h>
int main()
{
	int i,j,num,isPrime;
	printf("Enter the number::");
	scanf("%d",&num);
	//outer loop
	for(i=2;i<=num;i++)
	{
		isPrime=1;
	
			for(j=2;j<=i/2;j++)
			{
				if(i%j==0)
				{
					isPrime=0;
					break;
				}
			}
		
	
	if(isPrime==1)
	printf("%d, ",i);
}
}
