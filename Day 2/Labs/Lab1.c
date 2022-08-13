#include <stdio.h>                                  /* including std input/output lib */
void main (void)
{
	int x=8&&0;                                 
	int y=8||0;
	printf("False value in GCC =%d",x);         /* False value in GCC=0 */
	printf("\nTrue  value in GCC =%d",y);       /* True  value in GCC=1 */
}