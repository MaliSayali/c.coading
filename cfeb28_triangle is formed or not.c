#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	printf("Enter values of 3 angle");
	scanf("%d%d%d",&a,&b,&c);
	if((a+b+c==180))
	{
		printf("Triangle is formed");
	}
	else
	{
		printf("triangle not formed");
	}
	getch();
}
