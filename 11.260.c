#include <stdio.h>
#include <math.h>
int main(void)
{
    int n, i;
    printf("Enter n:\n");
    scanf("%10d", &n);
    for (i = 2; i <= 500; i++)
    {
        for (i = 2; i < sqrt(n); i++)
        {
            if (n % i == 0)
            {
                break;
            }
        }
        if (i > sqrt(n))
        {
            printf("Yes!\n");
        }
        else
        {
            printf("No!\n");
        }
    }

    return 0;
}
