#include <stdio.h>

int main(){
    int age;
    int vipPass = 0 ;
   vipPass = 1 ;
    printf("enter your age\n");
    scanf("%d",&age);

    if((age <= 70 && age>=18) || !(vipPass==1)){
        printf("you are above 18 and below 70,you can drive\n");
    }
    else{
        printf("you cannot drive\n");
    }

    if (age==50){
        printf("Half Century\n");
    }
    return 0;
}