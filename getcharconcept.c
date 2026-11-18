#include<stdio.h>

int main(){
    char hello[10];
    char everyone[20];

    scanf("%s", hello);
    getchar(); // <- chath the line change
    gets(everyone);

    printf("%s\n",hello);
    printf("%s",everyone);
}