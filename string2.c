#include<stdio.h>

int main(){
    char name[20];
    printf("What's your name? ");
    //scanf("%s", name);
    fgets(name,15, stdin);
    printf("Hello, %s", name);
}