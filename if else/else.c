#include <stdio.h.>
int main()
{
    int a;
    printf("enter your fist number: ");
    scanf("%d", &a);
    int b;
    printf("enter your scoundm number:  ");
    scanf("%d", &b);
    int c;
    printf("enter your 3 ed number:  ");
    scanf("%d", &c);
    // if (a + b > c && a < c || b - c < a && a > b)
    if (a * b > c && b + c - a % 6)
    {
        printf("the volue is devided by ");
    }
    else
    {
        printf("this value is not devided  ");
    }
    return 0;
}