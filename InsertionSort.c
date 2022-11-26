#include <math.h> 
#include <stdio.h> 
   
// Insertion Sort Function
void insertionSort(int array[], int n) 
{ 
    int i, element, j; 
    for (i = 1; i < n; i++)
    { element = array[i]; j = i - 1;
    while (j >= 0 && array[j] > element) { 
            array[j + 1] = array[j]; 
            j = j - 1; 
        } 
        array[j + 1] = element; 
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
    insertionSort(array,n);
    printArray(array,n) ;
}