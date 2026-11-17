#include <stdio.h>
int main()
{
    int a;
    printf("enter your number ");
    scanf("%d", &a);
    if (a < 0)
    {
        printf("the value if is nigative %d", a);
    }
    else
    {
        printf("the value of is positive");
    }
    return 0;
}
