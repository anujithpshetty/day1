#include<stdio.h>
int main()
{ 
    int n; 
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n); 
    int array[n];
    for (int i=0;i<n;i++) 
    {
        printf("Enter element %d: ",i + 1);
        scanf("%d", &array[i]);
        } 
        printf("The array is: "); 
        for (int i=0;i<n;i++) 
        { 
            printf("%d ", array[i]);
            }
            printf("\n"); 
            return 0; 
    
}