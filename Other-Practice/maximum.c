#include <stdio.h>
 
int main(){
    
    int num[100],n,i,max, loc=0;
    printf("How many Numbers: ");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&num[i]);
    }

    max=num[0];

    for (i = 1; i < n; i++)
    {
        if (max<num[i])
            max=num[i];
            loc=i;

        
    }
    printf("Maximum Number is: %d\n", max);
    printf("Location is: %d\n", loc);
    
    
return 0;
}