#include <stdio.h>
int main()
{
    int a;
    printf("enter your value ");
    scanf("%d", &a);
    if (a < 0)
    {
        printf("the number is negetive");
    }
    else
    {
        printf("positive number");
    }
    return 0;
}