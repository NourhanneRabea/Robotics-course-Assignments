#include <stdio.h>                              /* including std input/output lib */
void main()
{
	int x;                                  /* Declare 1 int variable */       
	printf("Please enter number :");        /* print message on the screen */
	scanf(" %d",&x);                        /* take the value of a from the user */
	if(x%2==0)                              /*number is divisible by 2*/
	{
	printf("Number is Even");               /*the number is even */
	}
    else 
	{
	printf("Number is Odd");                /*the number is odd*/
	}
}