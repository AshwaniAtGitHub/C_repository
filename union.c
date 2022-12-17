
#include<stdio.h>
#include<conio.h>

int main()
{
	int n,m; //variables for cardinality of the set
	int i; //variables for required for loops
    printf("Enter the cardinality of the two sets.\n");
	scanf("%d%d",&n,&m); 
    int set1[n],set2[m],U[m+n];
    
    printf("Enter the elements of first set.\n");
	for(i=0;i<n;i++)
	{
	scanf("%d",&set1[i]); //asking the user for entering values of the set	
	}
	
	printf("Enter the elements of second set.\n");	
	for(i=0;i<m;i++)
	{
	scanf("%d",&set2[i]); //asking the user for entering values of the set	
	}
	
	for(i=0;i<n;i++)
		{
		  U[i]=set1[i]; 	
		}
	
	int j,k,y=0,flag; // for aditional for loops and counter.
for(j=0;j<m;j++)
{
	flag=0;
	
	for(k=0;k<n;k++)
	{
		if(set1[k]==set2[j])
		{
		  flag=1;
		  break;	
		}
	}
	if(flag!=1)
	{
	  U[n+y]=set2[j];
	  y=y+1;	
	}
}
			

	printf("The Union of the two sets is\n");
	printf("{%d",U[0]);
		for(i=1;i<n+y;i++)
		{
		printf(", %d",U[i]);	
		} 
    printf("}");
	
}


