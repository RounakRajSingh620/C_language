#include <stdio.h>
#include <string.h>

struct employee
{int code;
float salary;
char name[10];
};
void show(struct employee emp){
    printf("The code of employee is: %d\n",emp.code);
    printf("The salary of employee is: %f\n",emp.salary);
    printf("The name of employee is: %s\n",emp.name);
    }

int main(){
    struct employee e1;
    struct employee *ptr;

    ptr= &e1;
    //(*ptr).code=101;// or u can also write: ptr->code=101;
      ptr->code=101;
      ptr->salary=12.01;
      strcpy(ptr->name,"Raunak");
     //printf("%d",e1.code); 
     show(e1);
    
    return 0;
}
