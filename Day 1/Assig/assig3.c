#include <stdio.h>                                 /* including std input/output lib */
void main (void)
{
	int a,b;                                   /* Declare 2 int variables */          
	printf("Please enter no a:");              /* print message on the screen */
	scanf(" %d",&a);                           /* take the value of a from the user */
	printf("Please enter no b:");              /* print message on the screen */ 
	scanf(" %d",&b);                           /* take the value of b from the user */
	printf("a+b=%d",a+b);                      /* print the summation of a,b */          
	printf("\na-b=%d",a-b);                    /* print the subtraction of a,b */       
	printf("\na&b=%d",a&b);                    /* print their anding */
	printf("\na|b=%d",a|b);                    /* print their oring */
	printf("\na^b=%d",a^b);                    /* print their Xoring*/
}