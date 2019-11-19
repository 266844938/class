#include <stdio.h>
int main(void)
{
    int n, sum = 0, term;
    printf("Enter n:\n");
    scanf("%d", &n);

    while (n > 0)
    {
        term = n % 10;
        sum += term;
        n = n / 10;
    }

    printf("sum is %d\n", sum);
    return 0;
}