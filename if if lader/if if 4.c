#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter your first number: ");
    scanf("%d", &a);
    printf("enter your 2nd number: ");
    scanf("%d", &b);
    printf("enter your 3rd number: ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("a is grater");
    }

    else if (b > a && b > c)
    {
        printf("b is grater");
    }

    else if (c > a && c > b)
    {
        printf("c is grater");
    }

    return 0;
}