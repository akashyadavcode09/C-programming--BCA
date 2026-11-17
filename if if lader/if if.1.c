#include <stdio.h>
int main()
{
    int a;
    printf("enter your value ");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("the value is positive\n");

        if (a % 2 == 0)
        {
            printf("number is even");
        }
        else
        {
            printf("number is odd");
        }
    }
    else
    {
        printf("the value is negative");
    }
    return 0;
}