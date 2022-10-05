#include <stdio.h>
#include <string.h>
struct employee
{int code;
float salary;
char name[10];
};
int main(){
    struct employee RAUNAK = {100,54.25,"Raj"};

    printf("Code is %d: \n", RAUNAK.code);
     printf("Salary is %f: \n", RAUNAK.salary);
      printf("Name is %s: \n", RAUNAK.name);

       return 0;}