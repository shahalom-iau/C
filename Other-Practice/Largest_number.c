#include <stdio.h>

int main()
{

    int a,b,c;
    printf("Please input 3 numbers:\n");
    scanf("%d %d %d",&a ,&b ,&c);

    if (a > b && a > c)
    {
        printf("First number is the largest umber");
    }
    else if (b > a && b > c)
    {
        printf("Second number is the lagest number");
    }
    else
    {
      printf("Third number is the largest number");
    }

    return 0;
}