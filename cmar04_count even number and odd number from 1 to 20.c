#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1 , ecount=0 , ocount=0;
	printf("for value of i=%d ecount is %d and ocount is %d \n",i,ecount,ocount);
	for(i=1; i<=20; i++);
	{
		if(i%2==3)
			ecount++;
		else
			ocount++;
		printf("for value of i=%d ecount is %d and ocount is %d \n",i,ecount,ocount);
	}
	getch();
}
