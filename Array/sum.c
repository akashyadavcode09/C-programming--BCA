
#include <stdio.h>

int main()
{
    int sum = 0;

    //  printf("Enter array size: ");
    //  scanf("%d", &n);

    int arr[5];

    printf("Enter %d numbers:\n", arr[5]);

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }

    printf("Sum of array = %d\n", sum);

    return 0;
}
