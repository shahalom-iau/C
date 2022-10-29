#include <stdio.h>
int main(){
    int a, i,m;
    printf("Enter the Number: ");
    scanf("%d", &a);

    for(i=1;i<=10;i++){
        m=a*i;
        printf("%d * %d = %d\n", a, i, m);
    }

}