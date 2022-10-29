#include <stdio.h>
 
int main(){
    
    int i;
    for(i=2000;i<=3000;i++){
        if(i%400==0 || i%4==0 && i%100!=0){
            printf("%d is a Leap Year\n", i);
        }else
        {
            printf("%d this is not a Leap Year\n",i);
        }
        
    }
    
}