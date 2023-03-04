#include<stdio.h>
#include<conio.h>

void main()
{
	int x;
	int i=1;
	printf("Enter a number");
	scanf("%d",&x);

	while(i<=x)
	{
		printf("\n%d",i);
		i++;
	}
	getch();
}
