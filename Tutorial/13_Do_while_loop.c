#include <stdio.h>
 
int main(){
    
    int a, i=0;
    printf("Enter a number:");
    scanf("%d",&a);

    do
    {
        printf("%d\n", i );
        i=i+1;
    } while (i<=a);
    
    
return 0;
}