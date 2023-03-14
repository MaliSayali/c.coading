#include<stdio.h>
#include<conio.h>
void areacircumf(int r,float*ar,float*cr);
void main()
{
	int r;
	float a,c;
	printf("Enter a radius");
	scanf("%d",&r);
	areacircumf(r,&a,&c);

	printf("area of circle is %f",a);
	printf("\n circumference is %f",c);
	getch();
}
void areacircumf(int r,float*ar,float*cr)
{
	float area,circum;
	area=3.14*r*r;
		circum=2*3.14*r;
	*ar=area;
	*cr=circum;
}