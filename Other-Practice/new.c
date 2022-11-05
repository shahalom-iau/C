#include <stdio.h>

int main()
{

    int i, n, s = 0;
    int t1 = 0, t2 = 1;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("%d, %d,", t1, t2);
    for (i = 3; i <= n; i++)
    {
        s = t1 + t2;
        printf("%d,", s);
        t1 = t2;
        t2 = s;
    }
    printf("%d", ++i);
    return 0;
}