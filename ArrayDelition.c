#include<stdio.h>
#include<conio.h>

int main()
{
	int s;
	printf("Enter the size of the array:\n");
	scanf("%d",&s);
	int array[100];
	printf("Enter the elements of the array are:\n");
	for(int i=0; i<s; i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Elements of the array are following:\n");
	for(int i=0; i<s; i++)
	{
		printf("%d\t",array[i]);
	}
	int position,num;
	printf("\nEnter the position of the element which you want to delete:\n");
	scanf("%d",&position);
	if (position < 1 || position > s+1)
	{
		printf("Invalid position:");
	}
	else
	{
		for (int i=position-1; i<=s-1; i++)
		{
			array[i]=array[i+1];
		} 
		s--;
	}	
	printf("The resultant array is:\n");
     
	for(int i=0; i<s; i++)
	{
		printf("%d\t",array[i]);
	}
	return 0;
}
