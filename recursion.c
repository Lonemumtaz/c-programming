#include <stdio.h>
int factorial(int n) {
    if ( n == 1) {
        return 1; // Base case
    } else {
        return n * factorial(n - 1); // Recursive case
    }
}
int main (){
    int num=5; // Example number
    int result = factorial(num);
    printf("Factorial of %d is %d\n", num, result);

}