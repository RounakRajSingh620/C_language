#include <stdio.h>

int main(){
    int i = 34;
    int *j = &i; //j will mow store the address of i
    printf("THe value of i is %d\n",i);
    printf("THe value of i is %d\n",*j);
    printf("THe address of i is %u\n",&i);
    printf("THe address of i is %u\n",j);
    printf("THe address of j is %u\n",&j);
    printf("THe value of j is %u\n",*(&j));
    return 0;
}