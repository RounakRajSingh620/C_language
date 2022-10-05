#include <stdio.h>

int main(){
    // char str[]= "Rounak";
    char str[] = {'R','a','u','n','a','k','\0'};
    char *ptr = str;
    while(*ptr!='\0'){
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}