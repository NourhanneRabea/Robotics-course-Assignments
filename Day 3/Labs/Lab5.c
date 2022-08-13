#include<stdio.h>                                    /* including std input/output lib *
void main()
{
int m,x,z;                                           /* Declare 3 int variables */         
printf("Show multiplication table of: ");
scanf(" %d",&x);                                     /* take the value from the user */
for (m=1;m<=10;m++)
{
	z=x*m;
	printf("%d X %d = %d\n",x,m,z);              /* print the multiplication table of the no. */ 
}
}
	