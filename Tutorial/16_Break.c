#include <stdio.h>
 
int main(){
    int i, age;
    for ( i = 0; i <=10; i++)
    {
        printf("%d Enter Your Age: ",i);
        scanf("%d",&age);
        if (age>10)
        {
            printf("Your age is more then 10");
            break;
        }
        
    }
    
    
    
return 0;
}