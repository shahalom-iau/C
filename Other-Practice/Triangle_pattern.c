#include <stdio.h>
 
int main(){
    
    int n1,row1,col1;

    printf("Enter N1:");
    scanf("%d",&n1);

    for (row1=1; row1<=n1; row1++)
    {
        for (col1=1; col1<=row1; col1++)
        {
            printf("%d",col1);
        }
        printf("\n");
    }
    printf("\n\n");
    
return 0;
}