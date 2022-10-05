#include <stdio.h>
#include<string.h>

int main(){
     char st1[45]= "HELLO ";
     char *st2 = " Raunak";
      int val = strcmp(st1, st2);
    printf("Now the val is %d", val);    
    return 0;
}