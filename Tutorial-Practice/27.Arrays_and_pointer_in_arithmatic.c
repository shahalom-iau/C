#include <stdio.h>

int main()
{

    int a = 5;
    int *pa = &a;

    printf("First Pointer Value %d\n", pa);
    pa++; // This CHANGE pointer value
    printf("Pointer Value after plusplus %d\n", pa);
    printf("Pointer value after plus 1 %d\n", pa + 1);
    printf("Pointer Value %d\n", pa);
    printf("Pointer value after -1 %d\n", pa - 1);

    return 0;
}