#include <stdio.h>

// Function declaration - call by value
int add(int a, int b);
void swap(int x, int y);

int main() {
    int num1 = 10, num2 = 20;
    int result;
    
    printf("Before function call:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);
    
    // Call by value - values are copied to function parameters
    result = add(num1, num2);
    printf("\nSum of %d and %d is: %d\n", num1, num2, result);
    
    printf("\nTrying to swap values using call by value:\n");
    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);
    
    swap(num1, num2);
    
    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);
    printf("Notice: Original values remain unchanged in call by value!\n");
    
    return 0;
}

// Function definition - call by value
int add(int a, int b) {
    printf("Inside add function: a = %d, b = %d\n", a, b);
    return a + b;
}

// Function to demonstrate call by value behavior
void swap(int x, int y) {
    int temp;
    printf("Inside swap function before: x = %d, y = %d\n", x, y);
    
    temp = x;
    x = y;
    y = temp;
    
    printf("Inside swap function after: x = %d, y = %d\n", x, y);
}
