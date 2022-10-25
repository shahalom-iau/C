#include <stdio.h>
 
int main(){
    int a,b;

    printf("Please input a number: ");
    scanf("%d", &a);

    printf("Please input another number: ");
    scanf("%d", &b); 

    printf("The Sum of the number is: %d",a+b);
    return 0;
}