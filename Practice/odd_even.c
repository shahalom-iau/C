#include <stdio.h>

int main()
{

    int a, b;
    printf("Input a Number: ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("This is even Number");
    }
    else
    {
        printf("This is Odd Number");
    }

    return 0;
}