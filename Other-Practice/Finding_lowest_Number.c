#include <stdio.h>

int main()
{

    int n1, n2, n3;

    printf("Enter Your First Number: ");
    scanf("%d", &n1);
    printf("Enter Your Second Number: ");
    scanf("%d", &n2);
    printf("Enter Your Third Number: ");
    scanf("%d", &n3);

    if (n1 < n2 && n1 < n3)
    {
        printf("%d is the lowest Number", n1);
    }
    else if (n2 < n3 && n2 < n1)
    {
        printf("%d is the lowest Number", n2);
    }
    else
    {
        printf("%d is the lowest Number", n3);
    }

    return 0;
}