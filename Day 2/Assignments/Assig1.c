#include <stdio.h>                                 /* including std input/output lib */
void main (void)
{
	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,x;         /* declare 11 int variables */
	printf("Enter Number 1:");                    
	scanf(" %d",&n1);                             /* first no. */
	printf("\nEnter Number 2:");
	scanf(" %d",&n2);                             /* second no. */
    printf("\nEnter Number 3:");
	scanf(" %d",&n3);                             /* third no. */
	printf("\nEnter Number 4:");
	scanf(" %d",&n4);                             /* forth no. */
	printf("\nEnter Number 5:");
	scanf(" %d",&n5);                             /* fifth no. */
	printf("\nEnter Number 6:");
	scanf(" %d",&n6);                             /* sixth no. */
	printf("\nEnter Number 7:");
	scanf(" %d",&n7);                             /* seventh no. */
	printf("\nEnter Number 8:");
	scanf(" %d",&n8);                             /* eighth no. */
	printf("\nEnter Number 9:");
	scanf(" %d",&n9);                             /* ninth no. */
	printf("\nEnter Number 10:");
	scanf(" %d",&n10);                            /* tenth no. */
	printf("enter the number u want to search for:\n");
    scanf(" %d",&x);                             
	if (x==n1 || x==n2|| x== n3 || x==n4 || x==n5 || x==n6 || x==n7 || x==n8 || x==n9 || x==n10)
	{
	printf("the value is exist= %d",x);           /*print the number*/
	}
	else                                          /*number is not exist*/
	{
		printf("value is not exist");             
	}
	
}