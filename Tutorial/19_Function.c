//With Argument & with Return Value

// #include <stdio.h>
// int sum(int a, int b)
// {
//     return a+b;
// }
// int main(){
//     int a,b,c;
//     a=5;
//     b=5;
//     c =sum(a,b);
//     printf("The sum is %d ",c);

// return 0;
// }

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

#include <stdio.h>
int Number()
{
    int i;
    printf("Enter a Number: ");
    scanf("%d",&i);
    return i;

}    
int main()
{
    int c = Number();
    printf("The Number You Enterd is %d", c);

}

void myname(){
printf("my name is Sharma");
}
int main(){
printf("what is your name?");
myname();
return 0;
}