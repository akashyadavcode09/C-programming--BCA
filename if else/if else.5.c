#include <stdio.h>
int main()
{
    int a;
    printf("enter your number");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("the value is divisible by 2");
    }
    else
    {
        printf("the value is not divisible by 2");
    }
    return 0;
}
