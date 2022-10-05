#include <stdio.h>
void GoodMorning();
void GoodAfternoon();
void GoodNight();
int main(){
     GoodMorning();
     
    return 0;
}
void GoodMorning(){
    printf("Good Morning Raunak\n");
    GoodAfternoon();
}
void GoodAfternoon(){
    printf("Good Afternoon Raunak\n");
    GoodNight();
}
void GoodNight(){
    printf("Good Night Raunak\n");
}
