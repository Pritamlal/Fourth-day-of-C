#include<stdio.h>
int main()
{
	int end,sum=0,i,j;
	printf("Enter the end::");
	scanf("%d",&end);

	for(i=1;i<=end;i++)
	{
		sum=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				sum=sum+j;
			}
		}
	if(sum==i)
	printf("%d,",i);
}
}
