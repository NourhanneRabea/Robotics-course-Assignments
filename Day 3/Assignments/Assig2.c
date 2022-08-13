#include <stdio.h>                                 /* including std input/output lib */
void main (void)
{
	int ID,pass,i=0;
	printf("Please enter ur ID: ");
	scanf(" %d",&ID);
	switch(ID)
	{
		case 1234 :
		printf("enter your password :");
		scanf(" %d",&pass);
		do 
		{
			if(pass!=7788)
			{
			printf("try again : ");
			scanf(" %d" ,&pass );
			i++;
            
			}
			
			else 
			{
                        printf("welcome Ahmed");
			i+=2;
			} 
			}	while(i<=1);
			
		
			if(pass !=7788)
			{
				printf("Incorrect passord for 3 times,no more tries");
			}
		
		break;
		case 5678 :
		printf("enter your password :");
		scanf(" %d",&pass);
		do 
		{
			if(pass!=5566)
			{
			printf("try again : ");
			scanf(" %d" ,&pass );
		    i++;

			}
			else 
			{
			i+=2;
			} 
			}	while(i<=1);
			printf("wlcome Amr");
		
			if(pass !=5566)
			{
				printf("Incorrect passord for 3 times,no more tries");
			}
		
		break;
		case 9870 :
		printf("enter your password :");
		scanf(" %d",&pass);
		do 
		{
			if(pass!=1122)
			{
			printf("try again : ");
			scanf(" %d" ,&pass );
			i++;

			}
			
			else
			{
			i+=2;
			} 
			}	while(i<=1);
			printf("wlcome Wael");
		
			if(pass !=1122)
			{
				printf("Incorrect passord for 3 times,no more tries");
			}
		
		break;
		
		default:
		printf("you are not registered");
		
		
		
	
	}
	
}