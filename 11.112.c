#include<stdio.h>
int main(void)
{ int x,e;
printf("Enter x:\n");
 scanf("%d",&x);
   e=(x>0) ? x: -x ;
  printf("e is %d\n",e);
  return 0;
}