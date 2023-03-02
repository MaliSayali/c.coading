#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,ch,res;
	float ans;

	printf("Enter 2 number");
	scanf("%d%d",&a,&b);

	printf("1.addition \n 2.substraction \n 3.muitiplication \n 4.division");
	scanf("%d",&ch);

	switch(ch)
	{
		case 1: res=a+b;
				printf("Result of addition is %d",res);
				break;
		case 2: res=a-b;
				printf("result of substraction is %d",res);
			    break;
		case 3: res=a*b;
				printf("result of multiplication is %d",res);
			    break;
		case 4: ans=(float)a/b;
			    printf("result of division is %f",ans);
			    break;
		default:printf("case not matching");
	}
	getch();
}




				   

	