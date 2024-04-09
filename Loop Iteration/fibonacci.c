#include<stdio.h>
int main()
{
	int arr[100];
	int i,n,sum=0;
	printf("Enter the n:");
	scanf("%d",n);
	for(i=0;i<n;i++)
	{
		sum=sum+i;
	}
	printf("%d",sum);
}
