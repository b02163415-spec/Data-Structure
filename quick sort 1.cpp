#include<stdio.h> 
 
void quicksort(int a[], int low, int high) 
{ 
    int i = low, j = high; 
    int pivot = a[(low+high)/2], temp; 
 
    while(i <= j) 
    { 
        while(a[i] < pivot) i++; 
        while(a[j] > pivot) j--; 
 
        if(i <= j) 
        { 
            temp = a[i]; 
            a[i] = a[j]; 
            a[j] = temp; 
            i++; 
            j--; 
        } 
    } 
 
    if(low < j) 
        quicksort(a, low, j); 
    if(i < high) 
        quicksort(a, i, high); 
} 
 
int main() 
{ 
    int a[5] = {8,3,7,4,9}; 
 
    quicksort(a,0,4); 
 
    printf("Sorted array:\n"); 
    for(int i=0;i<5;i++) 
        printf("%d ",a[i]); 
 
    return 0;
}