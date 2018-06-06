#include<stdio.h>
int main()
{
	int x;float y;
	scanf("%d  %f",&x,&y);
	if(((x>0)&&(x<=2000))&&((y>0)&&(y<=2000)))
	{
	if(x>y)
	{
		printf("%.2f",y);
	}
	else
	{
		if(x%5==0)
		{
			y=y-x-0.50;
		}
		printf("%.2f",y);
	}
	}
	return 0;
} 
