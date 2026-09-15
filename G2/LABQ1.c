/*
1. Student Introduction Card
Write a C program to print the following information in a properly formatted way:
-------------------------
     STUDENT CARD
-------------------------
First      : R
Age        : 18
Percentage : 84.5 
Section    : A
-------------------------
Use appropriate format specifiers and escape sequences and data types.
*/


#include<stdio.h>
int main(){
	char first = 'R';
	int age = 18;
	float perce = 84.5;
	char section = 'A';
	
	printf("-------------------------\n");
	printf("\tSTUDENT CARD\n");
	printf("-------------------------\n");
	printf("First\t\t: %c\n",first);
	printf("Age\t\t: %d\n",age);
	printf("Percentage\t: %f\n",perce);
	printf("Section\t\t: %c\n",section);
	printf("-------------------------\n");
	
}
