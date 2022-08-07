#include <stdio.h>                       /* including std input/output lib */
void main (void)
{
	int x,y;                         /* Declare 2 int variables */
	printf("Please enter no1:");     /* print message on the screen */
	scanf(" %d",&x);                 /* take the value of x from the user */
	printf("Please enter no2:");     /* print message on the screen */
        scanf(" %d",&y);                 /* take the value of y from the user */
        printf("a+b= %d",x+y);           /* printing the summation of x,y */
	printf("\naxb= %d",x*y);         /* printing the multiplication of x,y */
}