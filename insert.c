#include <stdio.h>
#define MAX 5
int main(){
    int array[MAX]={1,2,4,5};

    int value=3;
    int N=4;
    int i=0;
    int index=2;

    printf("Printing array before -\n");
    for (i = 0; i < N; i++)
    {
        printf("array[%d]=%d\n",i,array[i]);
    }
    for ( i = N; i >=index; i--)
    {
        array[i+1]=array[i];
    }
    array[index]=value;
    N++;
        printf("Printing array after insertion -\n");
    for(i = 0; i < N; i++) {
            printf("array[%d]=%d\n",i,array[i]);
    }
}