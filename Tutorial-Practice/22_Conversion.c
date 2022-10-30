#include <stdio.h>

int main()
{

    int a;
    double km, mile, inches, foot, cm, meter, pound, kg;
    printf("Which type of conversion do you want:\n Example:\n 1.Kilometers to Miles\n 2.Inches to Foot\n 3.Centimeters to Inches\n 4.Inches to Meter\n 5.Pound to KiloGrams\nPlease select a Number: ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("How many Kilometer to Miles you want to convert: ");
        scanf("%lf", &km);
        mile = km * 0.62137119;
        printf("%.2lf Kilometers is = %.2lf Miles", km, mile);
        break;
    case 2:
        printf("How many Inches to Foot you want to convert: ");
        scanf("%lf", &inches);
        foot = inches * 0.0833333;
        printf("%.2lf Inches is = %.2lf Foot", inches, foot);
        break;
    case 3:
        printf("How many Centimeters to Inches you want to convert: ");
        scanf("%lf", &cm);
        inches = cm * 0.393701;
        printf("%.2lf Centimeter is = %.2lf Inches", cm, inches);
        break;
    case 4:
        printf("How many Inches to Meters you want to convert: ");
        scanf("%lf", &inches);
        meter = inches * 0.0254;
        printf("%.2lf Inches is = %.2lf Meter", inches, meter);
        break;
    case 5:
        printf("How many Pounds to KiloGrams you want to convert: ");
        scanf("%lf", &pound);
        kg = pound * 0.453592;
        printf("%.2lf Pound is = %.2lf KiloGram", pound, kg);
        break;
    default:
        break;
    }

    return 0;
}