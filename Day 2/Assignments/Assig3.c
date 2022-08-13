#include <stdio.h>
void main(void)
{
int x,y,z;
	printf("enter number 1: ");
	scanf(" %d",&x);
	printf("enter number 2: ");
	scanf(" %d",&y);
	printf("enter number 3: ");
	scanf(" %d",&z);
	if (x>y)
	{
		if (x>z)
		{
			printf("max number is %d",x);
		}
		else if(x<z)
		{
			printf("max number is %d",z);
		}
	}
	else if (y>x)
	{
		if (y>z)
		{
		printf("max number is %d",y);
		}
		else if (y<z)
		{
		printf("max number is %d",z);
		}
	}
	}