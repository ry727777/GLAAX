#include<stdio.h>

struct Student{
    char name[50];
    float number;
    int roll_number;
};

int main(){
   struct Student s1,s2,s3;
   scanf("%s", s1.name);
   scanf("%f",&s1.number);
   scanf("%d",&s1.roll_number);
   

   scanf("%s",s2.name);
   scanf("%f",&s2.number);
   scanf("%d",&s2.roll_number);
   
    scanf("%s", s3.name);
   scanf("%f",&s3.number);
   scanf("%d",&s3.roll_number);
   

   printf("Student name: %s \n Marks: %.2f \n Roll NUmber: %d\n\n",s1.name,s1.number,s1.roll_number);
   printf("Student name: %s \n Marks: %.2f \n Roll NUmber: %d\n\n",s2.name,s2.number,s2.roll_number);
   printf("Student name: %s \n Marks: %.2f \n Roll NUmber: %d\n\n",s3.name,s3.number,s3.roll_number);

}