#include<stdio.h>

int main(){
    char name[10];
    //scanf("%s", &name);
    gets(name);
    //fgets(name,10,stdin);
    printf("%s", name);
}