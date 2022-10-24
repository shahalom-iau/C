#include <stdio.h>
 
int main(){
    
    int a;
    scanf("%d", &a);
    if (a%400==0 || a%4==0 && a%100!=0)
    {
        printf("This year is Leap Year\n");
    }
    else
    {
        printf("This is not a Leap Year");
    }
    
    
    
}