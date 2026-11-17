#include <stdio.h>
int main()
{
    int month;
    printf("enter a nomber: ");
    scanf("%d", &month);
    switch (month)
    {
    case 1:
        printf("the month of is \'january");
        break;
    case 2:
        printf("the month of is \'febauray");
        break;
    case 3:
        printf("the month of is \'march");
        break;
    case 4:
        printf("the month of is \'april");
        break;
    case 5:
        printf("the month of is \'may");
        break;
    case 6:
        printf("the month of is \'june");
        break;
    case 7:
        printf("the month of is \'july");
        break;
    case 8:
        printf("the month of is \'august");
        break;
    case 9:
        printf("the month of is \'september");
        break;
    case 10:
        printf("the month of is \'october");
        break;
    case 11:
        printf("the month of is \'november");
        break;
    case 12:
        printf("the month of is \'december");
        break;

    default:
        printf("not valied");
    }
    return 0;
}