#include<stdio.h>
#include<conio.h>

void swap(int*p1,int*p2);
void main()
{
	int x=100,y=200;
	printf("before swapping x=%d,y=%d",x,y);
	swap(&x,&y);
	printf("\n after swapping x=%d,y=%d",x,y);
	getch();
}
void swap(int*p1,int*p2)
{
	int temp;
	temp=*p1;
	*p1=*p2;
	*p2=temp;
}
