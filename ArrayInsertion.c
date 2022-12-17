#include<stdio.h>
#include<conio.h>

int main()
{
	int s,i,j;
	printf("Enter the size of the array:\n");
	scanf("%d",&s);
	int array[100];
	printf("Enter the elements of the array are:\n");
	for(i=0; i<s; i++)
	{
		scanf("%d",&array[i]);
	}
	printf("Elements of the array are:\n");
	for(i=0; i<s; i++)
	{
		printf("%d\t",array[i]);
	}
	int position,num;
	printf("\nEnter the position where you want to insert a new element:\n");
	scanf("%d",&position);
	if (position < 1 || position > s+1)
	{
		printf("Invalid position:");
	}
	else
	{
		printf("Enter the new element:\n");
		scanf("%d",&num);
		for(i=s-1; i>=position-1; 	i--)
		{
			array[i+1] = array[i];
		}
			array[position-1] = num;
			s++;
	 printf("Elements of the array are:\n");
		for(i=0; i<s; i++)
		{
			printf("%d\t",array[i]);
		}
	
	}	
	return 0;
}
