#include <stdio.h>                                 /* including std input/output lib */
void main (void)
{
 int Rows,i,space,s;
	
  printf("Please Enter the Number of Rows:  ");
  scanf("%d", &Rows);
	
  for ( i = 1 ; i <= Rows; i++ ) 
    {
      for ( space = 1 ; space <= Rows-i; space ++ ) 
      {
      	printf(" ");    	
      }
      for (s = 1; s <= (2 * i - 1); s++)
      {
   	printf("*"); 
      }
      printf("\n");
    }
}