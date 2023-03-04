#include<stdio.h>
#include<conio.h>

void main()
{
	int n,sum=0,r,x;
	printf("Enter your number");
	scanf("%d",&n);
	x=n;
		for(;n!=0;)
		{
			r=n%10;
			sum=sum+r;
			n=n/10;
		}
		printf("sum of %d is %d",x,sum);
		getch();
}


