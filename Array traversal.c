#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,arr[100];
	printf("Please enter the size of array\n");
	scanf("%d",&n);
	printf("Now enter the elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The given array is\n");
	for(i=0; i<n; i++)
	{
		printf("%d ",arr[i]);
	}
}
