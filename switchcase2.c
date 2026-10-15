#include<stdio.h>

int main(){
	printf("Enter two number: ");
	int num1, num2;
	scanf("%d%d",&num1,&num2);
	printf("What do you want (+ - * /) ? ");
	char choice;
	scanf(" %c",&choice);
	
	switch(choice){
		case '+':
			printf("Addition of two number is: %d",num1+num2);
			break;
		case '-':
			printf("Subtraction of two number is: %d",num1-num2);
			break;
		case '*':
			printf("Subtraction of two number is: %d",num1-num2);
			break;
		case '/':
			printf("Subtraction of two number is: %d",num1/num2);
			break;
		default:
			printf("Invalid choice");
	}
}
