#include<stdio.h>

int main(){
	int age;
	printf("Enter your age:- ");
	scanf("%d",&age);
	printf("Youe age is %d\n",age);
	
	float marks;
	printf("Enter your marks: ");
	scanf("%f",&marks);
	printf("Your marks is: %.2f\n",marks);
	
	char ch;
	printf("Enter your first char of name: ");
	scanf(" %c",&ch);
//	printf("%c",ch);
	printf("Your first name char is %c",ch);
	
}
