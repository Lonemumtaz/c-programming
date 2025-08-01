#include <stdio.h>
 void modify (int*x){
    printf("inside function : *x=%d\n",*x); // This change will not affect the original variable
 }
 int main(){
    int a=10;
    printf("before function : a=%d\n",a);
    modify(&a);
    printf("after function : a=%d\n",a);
    return 0;
 }