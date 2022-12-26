#include<stdio.h>
#include<conio.h>

int main()
{
	int n,m; //variables for cardinality of the set
	int i; //variables for required for loops
    printf("Enter the cardinality of the two sets.\n");
	scanf("%d%d",&n,&m); 
    int set1[n],set2[m],SemDiff[m+n];
    
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
int flag=0,j,y=0;	
for(i=0;i<n;i++)
{
flag=0;
	for(j=0;j<m;j++)
	{
		if(set1[i]==set2[j])
		{
		 flag =1;	
		}
		
	}
	if(flag!=1)
	{
	 SemDiff[y]=set1[i];
	 y++;	
	}
}
for(i=0;i<m;i++)
{
flag=0;
	for(j=0;j<n;j++)
	{
		if(set2[i]==set1[j])
		{
		 flag =1;	
		}
		
	}
	if(flag!=1)
	{
	 SemDiff[y]=set2[i];
	 y++;	
	}
}
			

	printf("The Symetric Differece of the two sets is\n");
	printf("{%d",SemDiff[0]);
		for(i=1;i<y;i++)
		{
		printf(", %d",SemDiff[i]);	
		} 
    printf("}");
	
}


