#include <stdio.h>
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("positive number\n");
        if (n % 5 == 0)
        {
            printf("%d is divisible by 5", n);
        }
        else
        {
            printf("%d is note divisible by 5", n);
        }
    }
    else
    {
        printf("negative number");
    }
    return 0;
}