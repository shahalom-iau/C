#include <stdio.h>
int main()
{

    int a, b;

    printf("Enter Your First Number: ");
    scanf("%d", &a);
    printf("Enter Your Second Number: ");
    scanf("%d", &b);

    if (a > b)
    {
        printf("A (%d) is the Largest Number", a);
    }
    else if (a == b)
    {
        printf("Your Both Number are same!");
    }

    else
    {
        printf("B (%d) is the largest Number", b);
    }

    return 0;
}