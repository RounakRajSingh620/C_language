#include <stdio.h>

int main(){
    //Prime Number = is the nos which is divisible by  and itself.
    //this is not the best method to solve the  problem.
    int n=15, prime =1;
    for( int i=2;i<n;i++){
        if(n%i==0 ){
            prime = 0;
            break;
        }
    }
    if(prime==0 ){
        printf("This is not a  prime number");
    }
    else{
        printf("This is a  prime number");
    }
     return 0;  
}