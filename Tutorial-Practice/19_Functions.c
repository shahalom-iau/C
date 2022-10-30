#include <stdio.h>
// int sum(int num1,int num2)
// {
//     return num1+num2;
// }
// int main()
// {

//     int num1, num2;
//     printf("Enter two number: ");
//     scanf("%d %d", &num1, &num2);
//     printf("The Sum is: %d\n", sum(num1,num2));

//     return 0;
// }
int sum(int a, int b){
    printf("%d\n",a+b);
}
int main(){
    int num1,num2;
    scanf("%d %d",&num1, &num2);
    sum(num1,num2);
    sum(20,30);
} 