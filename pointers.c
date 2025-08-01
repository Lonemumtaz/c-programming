#include <stdio.h>

int main()
{
    int num=10;
    int*ptr;
    ptr=&num;
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n",&num);
    printf("Value of ptr: %p\n", ptr);
    printf("value ptr points to: %d\n", *ptr);
    return 0;
}
