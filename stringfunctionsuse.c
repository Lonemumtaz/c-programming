#include <stdio.h>
#include <string.h>
int main()
{
    char str[] = "mumtaz";
    printf("%s\n", strupr(str));
    printf("%s\n", strlwr(str));
    printf("%s\n", strrev(str));
    printf("%d\n", strlen(str));

    return 0;
}