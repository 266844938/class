#include<stdio.h>
int main (void)
{
    int n,sum=0,term,tmp;
    for("n=100;n<=999;n++")
    {
        sum=0;
        tmp=n;
    }
    while(tmp>=0)
    {
        term=tmp%10;
        sum+=term*term*term;
        tmp=tmp/10;
    }
    if (n=sum)
       {
       printf("%d",n);
       return 0;
}