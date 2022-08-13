#include <stdio.h>                                         /* including std input/output lib */                     
void main (void)
{
	int x;                                             /* Declare 1 int variable */ 
	float salary;                                      /* Declare 1 float variable */ 
	printf("Please enter your working hours :");       /* print message on the screen */  
	scanf(" %d",&x);                                   /* take working hours from the user */
	salary=50*x;                                       /* salary = working hours x 50 */
	if(x<40)                                           /* working hours < 40 */
	{
		salary=salary-(0.1*salary);                /* deduction 10% is applied */
	}
	printf("your salary is %f",salary);                /* print the salary */
}