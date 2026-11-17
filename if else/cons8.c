#include <stdio.h>
int mai()
{
    int age;
    printf("enter your age");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("you can vote");
        if (age >= 18 && age <= 60)
        {
            printf("you can vote ");
        }
        else
        {
            printf("you can not vote");
        }
    }
    else
    {
        printf("you can not vote");
    }
    return 0;
}