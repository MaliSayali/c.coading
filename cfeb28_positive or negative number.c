#include<stdio.h>
#include<conio.h>

void main()
{ 
	int a;
	printf("Enter a number");
	scanf("%d",&a);

	if(a>=0)
		printf("Number is positive");
	else
		printf("Number is negative");
	getch();
}
