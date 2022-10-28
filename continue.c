#include <stdio.h>
 
int main(){
    int i, age;
    for ( i = 0; i <=10; i++)
    {
        printf("%d Enter Your Age: ",i);
        scanf("%d",&age);
        if (age>10)
        {
            printf("Your age is more then 10 so the code skipped the next print ");
            continue;
        }
        printf("Your age is less then 10 so the code printing this line ");
    }
    
    
    
return 0;
}