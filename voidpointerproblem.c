#include <stdio.h>
int main()
{
    void *p, *h;
    int a = 10;
    // char a='A';(this also will do the same work as that of line 7)

    char ch = 'A';
    p = &a;
    h = &ch;
    printf("%d\n", *(int *)p);
    printf("%c", *(char *)h);
    return 0;
}