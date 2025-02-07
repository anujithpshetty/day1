#include <stdio.h>
#include <limits.h> 
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int array[n];
    for (int i=0;i<n;i++) 
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&array[i]);
    }
    int largest =INT_MIN;
    int second_largest =INT_MIN;

    for (int i=0;i<n;i++) {
        if (array[i] > largest) {
            second_largest = largest; 
            largest = array[i];
        } else if (array[i]>second_largest&&array[i]!=largest)
        {
            second_largest = array[i];
        }
    }

    if (second_largest==INT_MIN) {
        printf("There is no second largest.\n");
    } 
    else
    {
        printf("The second largest is: %d\n",second_largest);
    }

    return 0;
}