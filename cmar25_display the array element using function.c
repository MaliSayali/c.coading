#include<stdio.h>
#include<conio.h>
int i;
void accept (int a[]);
void accept (int a[])
{
	printf("Enter 5 values");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
}
void Display (int a[]);
void Display (int a[])
{
	printf("\nDisplaying values");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
}
void main()
{
	int a[5];
	
	Display(a);
	getch();
}