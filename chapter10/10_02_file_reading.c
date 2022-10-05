#include <stdio.h>

int main(){
    FILE *ptr;
    int num , num2;
    ptr = fopen("RaunakR.txt","r");
    if (ptr == NULL){
        printf("This file does not exist");
        
    }
    else{

    fscanf(ptr,"%d",&num);
    fscanf(ptr,"%d",&num2);
    printf("The value of num is %d\n",num);
    printf("The value of num is %d\n",num2);
    fclose(ptr);}

    return 0;
}