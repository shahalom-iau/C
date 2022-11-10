#include <stdio.h>

int main()
{

    int ary[100], n, i, max, loc = 0;

    printf("Enter How many number: ");
    scanf("%d", &n);

    printf("Enter your numbers: \n");
    for (i = 0; i <= n; i++)
    {
        scanf("%d", &ary[i]);
    }

    max = ary[0];

    for (i = 1; i <= n; i++)
    {
        if (max < ary[i])
        {
            max = ary[i];
            loc = i + 1;
        }
    }

    printf("The max value: %d\n", max);
    printf("The location: %d\n", loc);

    return 0;
}