#include <stdio.h>

int main()
{
//GoTo is Mainly used for exiting from every nested loop in a line.
    label:
        printf("This is inside label\n");
        goto end;
        printf("Hello World");
        goto label; // This code wont take effect if we give another statement under this.
    end:
        printf("This is end\n");

    int num;
    for (int i = 0; i < 10; i++)
    {
        printf("%d", i);
        for (int j = 0; j < 1; j++)
        {
            printf(" Enter a Number: "); // 0 is for exit
            scanf("%d", &num);
            if (num == 0)
            {
                goto endloop;
            }
        }
    }
endloop:

    return 0;
}