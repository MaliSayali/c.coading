#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5] = {10,20,30,40,50};
	int res=0;
	int*p1;
	int*p2;
	p1=&a[0];
	p2=&a[2];
	printf("p1 is %d",p1);
	p1++;
	printf("\np1++ is %d",p1);

	p1=p1+2;
	printf("\np1+2 is %d",p1);

	printf("\n\np2 is %d",p2);
	p2=p2--;
	printf("\np2--is %d",p2);
	res=*p1+*p2;
		getch();
}
