#include<stdio.h>
int main()
{
	int sum=0,i,num,lastd,fact,orignum;
	printf("Enterthe number::");
	scanf("%d",&num);
	orignum=num;
	while(num>0)
	{
		lastd=num%10;
		
		fact=1;
		for(i=1;i<=lastd;i++)
		{
			fact=fact*i;
		}
		
		sum=sum+fact;
		num=num/10;
	}
	if(orignum==sum)
	printf("It is strong number");
	else
	printf("It is not strong number");
}
