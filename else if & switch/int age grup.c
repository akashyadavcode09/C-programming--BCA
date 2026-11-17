#include <stdio.h>
int main()
{
    int age;
    printf("enter your age ");
    scanf("%d", &age);
    if (age >= 0 && age <= 12)
    {
        printf("child");
    }
    else if (age >= 13 && age <= 19)
    {
        printf("teenager");
    }
    else if (age >= 20 && age <= 59)
    {
        printf("siniyar");
    }
    else if (age >= 60 && age <= 100)
    {
        printf("avobe person");
    }
    printf("invalid number");
    return 0;
}