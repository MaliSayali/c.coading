#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	printf("Enter 3 angle");
	scanf("%d%d%d",&a,&b,&c);

	if(a==b ||  b==c ||  a==c)
	printf("Isosceles tri formed");
	else
		printf("Isosceles tri not formed");
	getch();
}