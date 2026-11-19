#include<stdio.h>

int main(){
    int student_marks[4][5];
    for(int i=0; i<4; i++){
        for(int j=0; j<5; j++){
            scanf("%d", &student_marks[i][j]);
        }
    }

    // calculate avg marks and avg perce of entire class
    int total_marks = 0;
    float total_per = 0.0;
    for(int i=0; i<4; i++){
        int sum = 0;
        float per = 0.0;
        for(int j=0; j<5; j++){
            sum += student_marks[i][j];
        }
        per = (sum * 100)/10.0;
        total_per += per;
        total_marks = total_marks + sum;
    }

    printf("Average marks: %.2f",total_marks/4.0);
    printf("Total Perce: %.2f",total_per/4);

}