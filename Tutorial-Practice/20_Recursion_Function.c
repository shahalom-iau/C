#include <stdio.h>
int factorial(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return (num * factorial(num - 1));
    }
}
int main()
{
    int a;
    printf("Enter the number you want the Factorial of:  ");
    scanf("%d", &a);
    printf("The Factorial of %d is %d", a, factorial(a));
    return 0;
}