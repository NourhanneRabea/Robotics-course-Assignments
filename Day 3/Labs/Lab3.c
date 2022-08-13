#include<stdio.h>                                     /* including std input/output lib */
void main()
{
	int x,sum=0,y;                                /* Declare 3 int variables */
	for (y=1;y<=10;y++)
	{
		printf("number%d:",y);          
		scanf(" %d",&x);                     /* take the values from user */
		sum+=x;                              /* calculate the sum of 10 times */
	}
	printf("sum=%d\n",sum);                      /* print the summation */ 
	float average=sum/10;                        /* calculate the average */
	printf("average is %f\n",average);           /* print the average */
}