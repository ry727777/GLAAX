#include<stdio.h>

int main(){
    char name[6];

    for(int i=0; i<5; i++){
        scanf("%c", &name[i]);
    }

    for(int i=0; i<5; i++){
        printf("%c", name[i]);
    }

}