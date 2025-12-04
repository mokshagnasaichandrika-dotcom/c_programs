#include <stdio.h>

int main() {
    int a[10];
    int i,n, j;

    printf("Enter n value ");
    scanf("%d", &n);

    printf("Enter array elements");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Duplicate elements in the array are:\n");
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                printf("%d\n", a[i]);
                break; 
            }
        }
    }

    return 0;
}
