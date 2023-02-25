#include<stdio.h>
#include<conio.h>

void main()
{
	int a=10,r;
	int m=1;
	r=-10;
	printf("minus of a is %d \n",r);

		printf("\nvalue of a normally is %d",a);
		r=a++;
		printf("\nvalue of r in post incr is %d",r);
		printf("\nvalue of a in post incr is %d \n",a);


		printf("\nvalue of a normally is %d",a);
		r=++a;
		printf("\nvalue of r in pre incr is %d",r);
		printf("\nvalue of a in pre incr is %d \n",a);

		printf("\nvalue of normally is %d",a);
		r=--a;
		printf("\nvalue of r in pre decr is %d",r);
		printf("\nvalue of a in pre decr is %d \n",a);

		printf("\nsizeof a in byte is %d bytes \n",sizeof (a));
		printf("\n Normal value of true is %d",m);
		printf("\n Not of true is %d",!m);
		getch();
}
