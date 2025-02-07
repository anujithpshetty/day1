#include <stdio.h>

int main() {
    int a[] = {1, 2, 4, 11, 1, 7};
    int n = sizeof(a) / sizeof(a[0]);
    for (int i=0;i<n;i++) {
        for (int j=i+1;j<n;j++) {
            if (a[i]==a[j]) {
                a[i]=-1; 
                a[j]=-1; 
            }
        }
    }
    printf(" ");
    for (int i=0;i<n;i++) {
        if (a[i]!=-1) {
            printf("%d ",a[i]);
        }
    }
    printf("\n");

    return 0;
}