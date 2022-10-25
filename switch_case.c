#include <stdio.h>
 
int main(){
    
    int a;
    printf("Please input your age: ");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("Your age is %d and you are a baby",a);
        break;
    case 2:
        printf("Your age is %d and you are a little baby",a);
        break;
    case 3:
        printf("Your age is %d and you are a cute baby",a);
        break;
    case 4:
        printf("Your age is %d and you are a golu molu",a);
        break;
    case 5:
        printf("Your age is %d and you are a little boy",a);
        break;
    case 6:
        printf("Your age is %d and you are a boy",a);
        break;
    
    default:
        break;
    }
    
}