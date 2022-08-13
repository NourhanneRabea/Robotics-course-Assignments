#include <stdio.h>                               /* including std input/output lib */
void main()
{
	int ID;                                  /* Declare 2 int variable */  
	printf("Please enter ur ID: ");          /* print message on the screen */
	scanf(" %d",&ID);                         /* take the ID of a from the user */
 
    switch(ID)
    {
    case 1234:                                   /* ID :1234 */
    printf("Ahmed");                             /* Name:Ahmed */
    break;
    case 5678:                                   /* ID :5678 */
    printf("Youssef");                           /* Name : youssef */
    break;
    case 1145:                                   /* ID :1145 */
    printf("Mina");                              /* Name : Mina */
    break;	
	}
}	
