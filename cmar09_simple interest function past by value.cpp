#include<stdio.h>
#include<conio.h>
float SI(float p,float n,float r);

void main()
{
	float p,n,r;
	float ans;
	printf("\n enter p,n,r");
	scanf("%f%f%f",&p,&n,&r);
	ans=SI(p,n,r);
	printf("simp int is %f",ans);
}
float SI(float p,float n,float r)
{
	float SI;
	SI=(p*r*n)/100;
	return SI;
	getch();
}
