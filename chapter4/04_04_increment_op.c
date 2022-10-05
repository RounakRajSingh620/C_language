#include <stdio.h>

int main(){
    int i=5;
    printf("the value after i++ is:%d\n",i++);
    //i++ = =--------> Pehle print fir increment 
    //++i = =--------> Pehle increment fir print
    i+=10; // =-----------> increment i by 10 
    printf("the value of i is:%d\n",i);
    return 0;
}