#include <stdio.h>

typedef struct date{
    int date;
    int month;
    int year;

}date;

void display(date d){
    printf("The data is:%d/%d/%d\n",d.date,d.month,d.year);
}

int dateCmp(date d1,date d2){
    //Make decision on the basis of year
    if(d1.year>d2.year){
        return 1;
    }
    if(d1.year<d2.year){
        return -1;
    }
    //Make decision on the basis of month
    if(d1.month>d2.month){
        return 1;
    }
    if(d1.month>d2.month){
        return -1;
    }
    //Make decision on the basis of date
    if(d1.date>d2.date){
        return 1;
    }
    if(d1.date<d2.date){
        return -1;
    }
    return 0;
}
int main(){
    date d1={30,06,22};
    date d2={29,06,22};
    display(d1);
    display(d2);
    int a = dateCmp(d1, d2);
    printf("Date Comparision function: %d",a);
    return 0;
}