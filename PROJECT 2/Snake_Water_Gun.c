#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int SnakeWaterGun(char you,char comp){
    //returns 1 if you win, -1 if you lose and0 if draw

    //condition for draw
    // Cases covered:
    //ss
    //gg
    //ww
    if(you == comp){
        return 0;
    }

    //Non-draw conditions
    //Cases covered:
    //sw /ws
    //sg /gs
    //gw /wg
    if(you=='s' && comp=='w'){
        return 1 ;
    }
    else if(you=='w' && comp=='s'){
        return -1;
    }

    if(you=='s' && comp=='g'){
        return -1 ;
    }
    else if(you=='g' && comp=='s'){
        return 1;
    }
   
    if(you=='g' && comp=='w'){
        return 1 ;
    }
    else if(you=='w' && comp=='g'){
        return -1;
    }
    
}
int main(){
    char you,comp;

    srand(time(0));
    int number = rand()%100 + 1;
    
    if(number<33){
        comp='s';
    }
    else if(number>33 && number<66){
        comp = 'w';
    }
    else{
        comp = 'g';
    }

    
    comp = 's';
    printf("Enter 's' for snake,'w' for water and 'g' for gun\n");
    scanf("%c",&you);
    int result = SnakeWaterGun(you,comp);
    printf("You chose %c and computer chose %c.",you,comp);
    if (result == 0){
        printf("Game Draw\n");
    }
    else if(result==1){
        printf("You win\n");
    }
    else{
        printf("You lose\n");
    }
  return 0;
}