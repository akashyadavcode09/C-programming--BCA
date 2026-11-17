#include <stdio.h>
int main()
{
    int age;
    printf("enter your age");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("eligible for driveing lincese");
    }
    else
    {
        printf("not eligible for driveing lincese ");
    }
    return 0;
}