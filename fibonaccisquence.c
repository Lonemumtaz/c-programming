#include <stdio.h>
int main()
{
    int n, a = 0, b = 1, c, i;
    printf("enter number of term... ");
    scanf("%d", &n);
    for (i = i; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}