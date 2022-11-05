//With Argument & with Return Value

#include <stdio.h>
int sum(int *a)
{
    printf("%d\n",*a+5);
}
int main(){
    int a;
    a=5;
    printf("The sum is %d \n",a);
    sum(&a); 
    printf("The sum is %d ",a);

return 0;
}

//With Argument & without Return Value


// #include <stdio.h>
// int i;
// int star(int n)
// {
//     for (i = 0; i < n; i++)
//     {
//         printf("%c", '*');
//     }
// }
// int main()
// {
//     star(10);

//     return 0;
// }

//Without Argument & with Return Value

// #include <stdio.h>
// int Number()
// {
//     int i;
//     printf("Enter a Number: ");
//     scanf("%d",&i);
//     return i;

// }    
// int main()
// {
//     int c = Number();
//     printf("The Number You Enterd is %d", c);

// }

