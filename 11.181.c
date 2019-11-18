#include<stdio.h>
int main (void)
{
  int i,n,sum;
  n=1;
  for(i=1;i<=5;i++){
  n=n*i;
   sum=sum+n;
  }
   printf("sum is %d\n",sum);
   return 0;
}