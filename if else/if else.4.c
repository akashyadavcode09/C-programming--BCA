#include <stdio.h>
int main()
{
    int markes;
    printf("enter your number");
    scanf("%d", &markes);
    if (markes >= 33)
    {
        printf("the student is pass");
    }
    else
    {
        printf("student is fail");
    }

    return 0;
}