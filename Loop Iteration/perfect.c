#include<stdio.h>
int main()
{
	int orignum,num,sum=0,i;
	printf("Enter the number::");
	scanf("%d",&num);
	orignum=num;
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
	}
	while(orignum==sum)
	printf("%d",sum);

	
	
}
