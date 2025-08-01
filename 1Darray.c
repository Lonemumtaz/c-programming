#include <stdio.h>

int main() {
    int arr[5];
    int i;
    
    printf("Enter 5 numbers for the array:\n");
    
    // Taking input from user
    for (i = 0; i < 5; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    printf("\nThe array elements you entered are:\n");
    
    // Displaying the array
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    return 0;
}