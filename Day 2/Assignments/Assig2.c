#include <stdio.h>
void main()
{
int x=1234,y=56789,I,P;
printf("enter ur ID: ");
scanf(" %d",&I);
if (I==x)
{
	printf("enter ur pass: ");
	scanf(" %d",&P);

	if (P==y)
	{
		printf("Hello Nour <3");
	}
	else 
	{
		printf("wrong password");
	}
}
else 
{
	printf("wrong ID");
}
}