#include<stdio.h>
int main (void)
{
 int n,sum=0,term=1;
 printf("Entrr n:\n");
 scanf("%d",&n);
  for(int i=1;i<=5;i++){
 term*=i;
   sum+=term;
  }
   printf("sum is %d\n",sum);
   return 0;
}