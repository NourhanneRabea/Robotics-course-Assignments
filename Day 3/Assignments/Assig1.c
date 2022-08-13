#include <stdio.h>                                 /* including std input/output lib */
void main (void)
{
	float x,y,sum=0;
	while(1)                                       /* infinite loop */
	{
		printf("Please enter first number " );
		scanf(" %f",&x);                           /* take 1st no. from user */
		printf("Please enter second number " );
		scanf(" %f",&y);                           /* take 2nd no. from user */
		sum=x+y;                                   /* calculate the sum of the 2 numbers */
		printf("The result is %f\n",sum);            /* print their summation */
	}
	
	
}