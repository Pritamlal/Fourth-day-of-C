#include<stdio.h>
int main()
{
	int num,end,cur,lastd,i,j;
	long long fact,sum;
	printf("ENter the number::");
	scanf("%d",&end);
	for(i=1;i<=end;i++)
	{
		cur=i;
		sum=0;
		while(cur>0)
		{	
			fact=1ll;
			lastd=cur%10;
		
			for(j=1;j<=lastd;j++)
			{
				fact=fact*j;
			}
			sum+=fact;
			cur=cur/10;
		}
		if(sum==i)
		{
			printf("%d, ",i);
		}
	}
}
