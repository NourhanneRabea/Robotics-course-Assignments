#include<stdio.h>                                     /* including std input/output lib *
void main()
{ 
int x,fact=1,y;                                       /* Declare 3 int variables */   
printf("enter a positive integer: ");
scanf(" %d",&x);                                      /* take a positive int no. from thr user */ 
do 
{
	fact*=y;
	y++;
}
while(y<=x);
printf("Factorial: %d",fact);                         /* print thr factorial of the no. (no.!)*/
}