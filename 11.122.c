#include<stdio.h>
int main(void)
{
  int n,sum=0;
  int i;
  printf("Enter n:\n");
  scanf("%d",&n);
  for(i = 1;i<=n;i++)
{
    sum = sum+i;
}
printf("Sum is %d\n",sum);
}


