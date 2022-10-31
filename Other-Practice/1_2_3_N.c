#include <stdio.h>

int main()
{

    int i, N, sum;
    printf("Please input Nth Number: ");
    scanf("%d", &N);
    sum = 0;
    for (i = 1; i <= N; i++)

    {
        sum = sum + i;
    }
    printf("The series value of %d is %d", N, sum);

    return 0;
}