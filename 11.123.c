#include<stdio.h>
int main(void)
{{
  int n,mul=1;
  int i;
  printf("Enter n:\n");
  scanf("%d",&n);
  for(i = 1;i<=n;i++)
{
    mul = mul*i;
}
printf("mul is %d\n",mul);
}
return 0;
}
