#include<stdio.h>
int main()
{
    int num[100],n,i,min,count=0;

    printf("How many numbers: ");
    scanf("%d",&n);

    printf("Enter your numbers: ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&num[i]);
    }
    min= num[0];

    for(i=0; i<n; i++)
    {
        if(min>num[i]) 
        {
            min=num[i];
            count++;
        }
        
    }
    printf("Minimum= %d\n",min);
    printf("Minimum number Location = %d\n",count);

    return 0;       
}