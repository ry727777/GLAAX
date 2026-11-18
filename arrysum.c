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

    // sum of all element in array
    int sum = 0;
    for(int i=0; i<n; i++){
        sum = sum + marks[i];
    }

    printf("%d", sum);

}