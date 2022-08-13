#include <stdio.h>                                      /* including std input/output lib */
void main ()
{
	int x;                                          /* Declare 1 int variable */         
	printf("Enter the answer of 3x4=\n");           
	scanf(" %d",&x);                                /* take the answer from the user */
	while (x!=12)
	{
	printf("Not correct,please try again:");
	scanf(" %d",&x);
	}
	printf("Correct,Thnx");
}
