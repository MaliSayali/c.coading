#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1;
	float p,n,r,SI;
	char ch;
	do
	{
		printf("Enter values of p,n,r");
		scanf("%f%f%f",&p,&n,&r);

		SI=(p*n*r)/100;
		printf("\n simple imterest is %f",SI);
		printf("Do you want to continue? if yes press y");
		fflush(stdin);
		scanf("%c",&ch);
	}while (ch=='Y' || ch=='y');
	getch();
}