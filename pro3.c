#include <stdio.h>

int main() {
int array[] = {1,2,3,4,5};
    int add= sizeof(array) / sizeof(array[0]); 
    int sum=0;
    for (int i=0;i<add;i++) {
        sum =sum+array[i];
    }
 printf("The sum of the array is: %d\n", sum);
 return 0;
}