#include <stdio.h>
int main()
{
  int x, y, temp;
  printf("enter x ");
  scanf("%d", &x);
  printf("enter y ");
  scanf("%d", &y);
  // before swapping
  printf("before swapping:x=%d\n,y= %d\n", x, y);
  temp = x;
  x = y;
  y = temp;
  // after swapping

  printf("after swapping:x=%d\n,y= %d\n", x, y);

  return 0;
}