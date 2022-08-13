#include <stdio.h>                            /* including std input/output lib */
void main()
{
int x;
printf("please enter ur mark : ");            /* Declare 1 int variable */ 
scanf(" %d",&x);                              /* take the value of a from the user */
if(x>=0 && x<50)                              /* mark < 50*/
{
printf("ur rate is FAILED");                  /* student Failled*/
}
else if (x>=50 && x<65)                       /* 50< mark <65 */
{
	printf("ur rate is Normal");          /* rate is Normal*/
}
else if(x>=65 && x<75)                        /* 65< mark <75 */
{
	printf("ur rate is Normal");          /* rate is Normal*/
}
else if (x>=75 && x<85)                       /* 75< mark <85 */
{
	printf("ur rate is Very Good");       /* rate is Very Good*/
}
else if (x>=85)                               /* mark >85 */      
{
	printf("ur rate is Excellent ");      /* rate is Excellent*/
}
}