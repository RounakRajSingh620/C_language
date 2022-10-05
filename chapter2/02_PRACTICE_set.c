#include <stdio.h>

int main(){
    // int a;  int b=a;
    // int v =3^3;
    // char dt='2';
    // float d=(3.0/8-2);
    
    // printf("%d\n",v);
    // printf("%f\n",d);
    
    //q3. write a program to determine when
    //a number is divisible by 97 or not
    int num;
    printf("enter the number\n");
    scanf("%d",&num);
    printf("divisibility test returns: %d\n", num%97);
    
    //q4. explain step by step evaluation of 3*x/y-z
    //where x=2,y=3,z=3,k=1
    int x=2, y=3, z=3, k=1;
    int results =3*x/y-z+k;
    //6/3 - 3 + 1
    //2 - 3 + 1 
    //2 - 3 + 1 
    //0 
    printf("the value of result is %d", results);

    return 0;
} 