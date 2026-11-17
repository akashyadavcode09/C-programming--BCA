#include <stdio.h>
int main()
{
    int a, b, choice;
    printf("enter your first number: ");
    scanf("%d", &a);
    printf("enter your 2nd number: ");
    scanf("%d", &b);

    printf("\n1.addition");
    printf("\n2.subtraction");
    printf("\n3.multiplication");
    printf("\n4.division");
    printf("\n5.remainder");

    printf("\n\n enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf(" add  is valu: %d", a + b);
        break;
    case 2:
        printf(" subtruact is valu: %d", a - b);
        break;
    case 3:
        printf("multiply is value: %d", a * b);
        break;
    case 4:
        printf(" divide is value: %d", a / b);
        break;
    case 5:
        printf("remainder is value: %d ", a % b);
        break;

    default:
        printf("not valied");
        break;
    }
    return 0;
}