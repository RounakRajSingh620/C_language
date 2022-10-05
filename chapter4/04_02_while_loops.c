#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    while(a<10){
        //a=11;
        //while(a>10) =-----> THIS TWO LINES WILL LEAD TO THE  AN INFINITE LOOP
        printf("%d\n",a);
        a++;
    }
    return 0;
}