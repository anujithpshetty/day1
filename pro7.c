#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter the size of the first array: ");
    scanf("%d",&n1);
    int a1[n1];
    printf("Enter the elements of the first array:\n");
    for (int i=0;i<n1;i++) {
        scanf("%d",&a1[i]);
    }
    printf("Enter the size of the second array: ");
    scanf("%d",&n2);
    int a2[n2];
    printf("Enter the elements of the second array:\n");
    for (int i=0;i<n2;i++) {
        scanf("%d",&a2[i]);
    }
    int merged[n1+n2];
    for (int i =0;i<n1;i++) {
        merged[i]=a1[i];
    }
    for (int i=0;i<n2;i++) {
        merged[n1+i]=a2[i];
    }
    printf("The merged array is:\n");
    for (int i=0;i<n1+n2;i++) {
        printf("%d ",merged[i]);
    }
    printf("\n"); 
    return 0;
}