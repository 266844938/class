#include<stdio.h>
int main (void)
{
    int term,sum=0,n,tmp;
    printf("Etermter term:\term");
    scanf("%d",&n);
    for(n=100;n<=999;n++)
    {
        sum=0;
        tmp=n;
   
    while(tmp>0)
    {
        term=tmp % 10;
        sum += term*term*term;
        tmp = tmp/10;
    }
    if (sum==n){     
       printf("%d\n",n);
 }   
 }   
    return 0; 
} 