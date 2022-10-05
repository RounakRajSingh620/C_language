#include <stdio.h>

void display(); //function prototype

int main(){
    int a;
    printf("Initializing display function \n");
    display(); //Function Call
    printf("Display function finished its work\n ");
     
    
    return 0;
}
void display(){
    printf("this is display\n");
} 