#include<stdio.h>
int main()
{
	int arms,num,lastd,pow=0;
	printf("Enter the number::");
	scanf("%d",&num);
	arms=num;
	while(num>0)
	{
		lastd=num%10;
		pow=pow+(lastd*lastd*lastd);
		num=num/10;
	}
	if(arms==pow)
	printf("Hey it is Armstrong");
	else
	printf("Hey it is not Armstrong");
}
