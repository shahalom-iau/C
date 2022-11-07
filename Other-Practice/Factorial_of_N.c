#include <stdio.h>

int main()
{

    int n, i, f = 1;

    printf("Enter a Number: ");
    scanf("%d", &n); // n=5

    for (i = 1; i <= n; i++) // i=1 cause if i=0 then every multiply will be 0
    {
        f = f * i;
    }
    printf("The Factorial of %d is = %d", n, f);

    return 0;
}
/*
For example:
5! = 5*4*3*2*1 = 120
3! = 3*2*1 = 6
*/