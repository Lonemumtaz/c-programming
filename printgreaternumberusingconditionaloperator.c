#include <stdio.h>
int main()
{
    int a, b, c, max;
    printf("enter three numbers: ");
    scanf("%d %d %d %d", &a, &b, &c);
    max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    printf("%d", max);

    return 0;
}