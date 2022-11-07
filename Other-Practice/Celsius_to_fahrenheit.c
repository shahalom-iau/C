#include <stdio.h>

int main()
{
    float c,f;
    printf("Enter Celsius Number: ");
    scanf("%f",&c);

    f=(c*1.8)+32;
    printf("%.0f Celsius is = %.2f Fahrenheit",c,f);
    return 0;
}