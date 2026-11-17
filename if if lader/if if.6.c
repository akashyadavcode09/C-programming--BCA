#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter your first number:");
    scanf("%d", &a);
    printf("enter your 2nd  number:");
    scanf("%d", &b);
    printf("enter your 3rd number:");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("a is grater");
        }
        else
        {
            printf("c is grater");
        }
    }
    else
    {
        if (b > c)
        {
            printf("b is grater");
        }
        else
        {
            printf("c is grater");
        }
    }
    return 0;
}
