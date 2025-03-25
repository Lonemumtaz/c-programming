#include <stdio.h>
int main()
{
    float celcius, fahrenheit;
    printf("enter the temperature in celcius : ");
    scanf("%f", &celcius);
    // convert celcius to fahrenheit using the formulla
    fahrenheit = celcius * 9 / 2 + 32;
    // print the result
    printf(" the temperature in fahrenheit is : %f\n", fahrenheit);
    return 0;
}