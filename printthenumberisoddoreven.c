#include <stdio.h>
int main()
{
    int n; // int m;
    printf("entrer the number:");
    scanf("%d", &n); // another condition for this is
    // m=n/2;//if(m*2==n)

    if (n % 2 == 0)
    {
        printf("the number is even");
    }
    else
    {
        printf("the number is odd");
    }
    return 0;
}