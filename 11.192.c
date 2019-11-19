#include <stdio.h>
int main(void)
{
    int i;
    double term = 1, sum = 0;
    i = 1;
    while (term >= 1e-5)
    {
        term = term / i;
        sum += term;
        i++;
    }
    sum += 1;
    printf("sum is %.5f\n", sum);
    return 0;
}