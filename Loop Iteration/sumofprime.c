#include<stdio.h>
int main()
{
	int num,i,j,isPrime,sum=0;
	printf("Enter the number::");
	scanf("%d",&num);
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
		{
			sum+=i;
		}
	}
	printf("The sum value is %d",sum);
}
