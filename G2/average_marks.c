#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    float array[n];
    for(int i=0; i<n; i++){
        scanf("%f", &array[i]);
    }

    float  sum = 0;
    for(int i=0; i<n; i++){
        sum += array[i];
    }
    printf("%.2f", sum/n);
}