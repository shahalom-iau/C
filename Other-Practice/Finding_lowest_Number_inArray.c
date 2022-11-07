#include <stdio.h>
int main()
{
    int n, ary[100], i, min, location;

    printf("Enter the size of array: ");
    scanf("%d", &n); // User Entered 3

    printf("Enter your Numbers; \n");
    for (i = 0; i < n; i++) // n=3
    {
        scanf("%d", &ary[i]); // ary i = ary0, ary1, ary2
    }
    min = ary[0];           // Minimum = 0 no index of array
    for (i = 0; i < n; i++) // n=3
    {
        if (min > ary[i]) // 10, 5, 15 (ary=ary1)
        {
            min = ary[i];
            location=i+1;
        }
    }
    printf("Minimum Number is: %d\n", min);
    printf("Minimum Number Location: %d",location);

    return 0;
}