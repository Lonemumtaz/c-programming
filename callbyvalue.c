#include <stdio.h>
void modify(int x) {
    x = x+10;
    printf("inside function(x):%d\n",x); // This change will not affect the original variable
}
int main () {
    int a = 5;
    printf("before function(a):%d\n",a);
    modify(a);
    printf("after function(a):%d\n",a); // Original variable remains unchanged
    return 0;
}
