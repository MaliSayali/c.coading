#include<stdio.h>
#include<conio.h>

void main()
{
	int n;
	do
	{
		printf("\nenter a no");
		scanf("%d",&n);
		printf("No is %d",n);
	}while (n!=0);
	getch();
}