#include<stdio.h>
#include<conio.h>

void main()
{
	float p,n,r,SI;
		printf("Enter value for p,n,r");
	scanf("%f%f%f",&p,&n,&r);

	SI=(p*n*r)/100;
		printf("simple interest is %f",SI);
	getch();
}
