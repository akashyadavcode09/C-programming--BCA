#include <stdio.h>
int main()

{
    int age = 19;
    if (age < 18)
        printf("you can vote ");
    else
    {
        printf("you can not vote \n");
    }
    if (age % 2 == 0)
        printf("this value is ");
    else
    {
        printf("but not devide this value return ");
    }
    return 0;
}