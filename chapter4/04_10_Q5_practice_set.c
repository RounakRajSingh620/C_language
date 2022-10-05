#include <stdio.h>

int main(){
    int i=1, sum=0,n=10;
    
    // for(i=0; i<=n; i++){
    //     sum+=i;
    // }
    while(i<=n){
        sum +=i;
        i++;
    }
    printf("the value of sum (from 0 to 10) is %d\n ",sum);
    return 0;
}