#include<stdio.h>
#include<conio.h>

void main()
{
	int n;

	printf("Enter a number");
	scanf("%d",&n);

	if(n%2==0)
	printf("print is even");
	else
		printf("number is odd");
	getch();
}
