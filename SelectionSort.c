#include <math.h> 
#include <stdio.h> 
   
// Selection Sort Function
void selectionSort(int array[], int n)
{

    int i, j, position, swap;
    for(i = 0; i < (n - 1); i++){
        position=i;
        for(j = i + 1; j < n; j++)
        {
        if(array[position]>array[j])
        position=j;
        }
        if(position != i)
        {
        swap=array[i];
        array[i]=array[position];
        array[position]=swap;
        }
    } 
}   
// Function to print the elements of an array
void printArray(int array[], int n) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        printf("%d ", array[i]); 
}


int main(){
    int n;
    printf("Enter the number of elements in array:\n");
    scanf("%d",&n);
    int array[50];
    printf("Enter the elements of the array:\n");
    for(int i=0; i<n; i++){
        scanf("%d",&array[i]);
    }
    printf("The sorted array is:\n");
    selectionSort(array,n);
    printArray(array,n) ;
}