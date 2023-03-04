#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,fact=1;

	printf("Enter a no");
	scanf("%d",&n);
	for(i=1; i<=n; i++);
	{
		fact=fact*i ;
		printf("%d%d*%d\n",fact,fact,i);
	}
	printf("factiorial of %d is %d",n,fact);
	getch();
}