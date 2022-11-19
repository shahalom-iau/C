#include <stdio.h>
int swapf(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}
int main(){
    
    int a=10,b=20;
    printf("Before Swaping: %d %d \n",a,b);
    swapf(&a,&b);
    printf("After Swaping: %d %d \n",a,b);

    
return 0;
}
