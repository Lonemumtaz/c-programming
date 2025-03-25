#include <stdio.h>
#include <string.h>
int main()
{
    char str1[] = "mumtaz", str2[] = " lone";
    // merge two strings
    printf("%s\n", strcat(str1, str2));
    // compare two strings
    if (strcmp(str1, str2) == 0)
        printf("strings are equal");
    else
        printf("not equal");

    return 0;
}