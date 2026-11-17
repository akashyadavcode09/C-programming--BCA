#include <stdio.h>
int main()
{
    int markes;
    printf("enter your markes: ");
    scanf("%d", &markes);
    if (markes >= 40)
    {
        printf("passed\n");
        if (markes >= 60)
        {
            printf("first gread");
        }
        else
        {
            printf("2nd gread");
        }
    }
    else
    {
        printf("fail");
    }
    return 0;
}