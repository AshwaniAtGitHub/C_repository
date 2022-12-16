#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,sc,AND,OR,NOR;
	printf("Enter the values operands\n");
	scanf("%d%d",&a,&b);
	printf("Choose 1, 2 or 3 for AND, OR or NOR operation\n");
	scanf("%d",&sc);
	switch(sc)
    {
		case 1:
			{
			
	         AND=a&b;
	         printf("The AND of %d and %d is %d\n",a,b,AND);
	         break;
	        }
	   case 2: 
	    {
	   
	    OR=a|b;
	    printf("The OR of %d and %d is %d\n",a,b,OR);
	    break;
    	}
	   case 3:
	   	{	   	
	   OR=a|b;
	   NOR=~OR;
	   printf("The NOR of this %d and %d is %d\n",a,b,NOR);
	   break;
        }
    }
    
}
