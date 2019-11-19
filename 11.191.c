#include <stdio.h>
int main(void)
{
    int n, i;
    double term=1, sum = 0;
    printf("Enter n:\n");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        term *= i;
        sum += 1.0 / term;
    }
    sum += 1;
    printf("sum is %.5f\n", sum);
    return 0;
}