#include<stdio.h>
#include<conio.h>

void main()
{
	int x,sum;
	int i=1;

	printf("Enter a number");
	scanf("%d",&x);

	while(i<=x)
	{
		printf("initial i=%d and sum=%d,i,sum");
		sum=sum+i;
		printf("\t\tafter i=%d and sum=%d \n", i,sum);
		i++;
	}
	getch();
}

