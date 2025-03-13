#include <stdio.h>
int main()
{
    int t;
    printf("enter time period");
    scanf(" %d", &t);
    float r, p, si;
    printf("enter rate of interest");
    scanf("%f", &r);
    printf("enter principal amount");
    scanf("%f", &p);
    // find simple interest using the formulla
    si = (p * r * t / 100);
    printf("simple interest = %f", si);
    return 0;
}
