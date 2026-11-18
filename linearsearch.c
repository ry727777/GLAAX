#include<stdio.h>
int main(){
    // size of array
    int n;
    scanf("%d", &n);

    // array of size n
    int marks[n];

    for(int i=0; i<n; i++){
        // input at each index
        scanf("%d", &marks[i]);
    }

    int number;
    scanf("%d", &number);

    int index = -1;

    for(int i=0; i<n; i++){
        if(number == marks[i]){
            index = i;
            break;
        }
    }

    printf("%d", index);

}