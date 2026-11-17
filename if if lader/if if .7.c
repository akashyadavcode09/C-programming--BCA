#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your Marks: ");
    scanf("%d", &marks);
    if (marks >= 40)
    {
        printf("Student has passed\n");
        if (marks >= 80)
        {
            printf("A grade");
        }
        else
        {
            if ("marks>=60")
            {
                printf("B grade");
            }
            else
            {
                printf("C grade");
            }
        }
    }
    else
    {
        printf("student failed");
    }
    return 0;
}