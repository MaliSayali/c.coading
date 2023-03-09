#include<stdio.h>
#include<conio.h>

void add();
	void add()
	{
		int a,b,res;
		printf("enter 2 nos");
		scanf("%d%d",&a,&b);
		res=a+b;
		printf("res is %d",res);
	}
	void main()
	{
		printf("msg 1");
		printf("msg 2");
		add();

		printf("msg 3");
		printf("msg 4");
		add();
		getch;
	}
