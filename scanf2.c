#include<stdio.h>

int main(){
	int age;
	char ch;
	float marks;
	
	scanf("%d %c%f",&ch,&age,&marks);
	
	printf("Age: %d \n Char: %c \n Marks: %.2f",age,ch,marks);
}
