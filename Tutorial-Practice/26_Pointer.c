#include <stdio.h>
 
int main(){
    
    int a=50;
    int *ptr=&a;
    int *ptr2 = NULL;
    printf("The Value of a is %d\n",a);
    printf("The Value of a (with pointer) is %d\n", *ptr);
    printf("The address of a(in Hexadecimal) is %x\n", &a);
    printf("The address of Pointer(in Hexadecimal) is %x\n", &ptr);
    printf("The address of Pointer(in Hexadecimal) is %x \n", ptr2);
    printf("The address of a(in Hexadecimal With Pointer) is %x\n", ptr);
    
return 0;
}