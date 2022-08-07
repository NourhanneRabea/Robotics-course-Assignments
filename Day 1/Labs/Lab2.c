#include <stdio.h>                                       /* including std input/output lib */
void main (void)                              
{
	int x;                                           /* Declare int variable */
	printf("please enter the value:");               /* print message on the screen */
	scanf(" %d",&x);                                 /* take the value of the no from the user */
	printf("the value you entered is %d",x);         /* print the value of the no  */
}