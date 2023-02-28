#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	printf("Enter 3 angles");
	scanf("%d%d%d",&a,&b,&c);

	if(a==60 && b==60 && c==60)
		printf("Equilateral tri is formed");
	else
		printf("Equilateral tri is not formed");
	getch();
}