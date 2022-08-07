#include <stdio.h>                                                                  /* including std input/output lib */
void main (void)
{
	int a,b,c;                                                                  /* Declare 3 int variables */
	printf("Please enter no1:");                                                /* print message on the screen */ 
	scanf(" %d",&a);                                                            /* take the value of a from the user */
	printf("Please enter no2:");                                                /* print message on the screen */
	scanf(" %d",&b);                                                            /* take the value of b from the user */
	printf("Please enter no3:");                                                /* print message on the screen */  
	scanf(" %d",&c);                                                            /* take the value of c from the user */
	printf("Number 3 is:%d \nNumber 2 is:%d \nNumber 1 is:%d",c,b,a);           /* print numbers in reverse order */  
	
}