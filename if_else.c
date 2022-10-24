

#include <stdio.h>

int main()
{
    int a;
    printf("Enter your marks: ");
    scanf("%d",&a);
    printf("Your marks is %d ",a);
    if (a>=101 || a<0)
    {
        printf("And You have entered an invalid number!");
    }
    else if (a>=80 && a<=100)
    {
        printf("And you got A+");
    }
    else if (a>=70 && a<=79)
    {
        printf("And you got A");
    }
    else if (a>=60 && a<=69)
    {
        printf("And you got A-");
    }
    else if (a>=50 && a<=59)
    {
        printf("And you got B");
    }
    else if (a>=40 && a<=49)
    {
        printf("And you got C");
    }
    else if (a>=33 && a<=39)
    {
        printf("And you got D");
    }
    else{
        printf("And You become Fail");
    }
    

}
