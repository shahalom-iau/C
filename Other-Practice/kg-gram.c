#include <stdio.h>
 
int main(){
    
    float a,b;

    printf("How many KG do you want to convert in gram: ");
    scanf("%f",&a);
    b= a*1000;
    printf("%.2f KG is equal to %.2f Gram",a,b);
    
return 0;
}